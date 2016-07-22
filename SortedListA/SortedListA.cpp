//
// Created by Marc Sosnick on 7/12/16.
//

#include "SortedListA.h"
//#include <iostream>
//#include <stdlib.h>             // EXIT_FAILURE
using namespace std;

/** Constructor, creates read-only size value.
 *  This trick uses the ability of a constructor to change the value of a const
 *  at the time of instnatiation to bind a non-constant private variable (_size)
 *  to a constant public variable (size).  This means that the class can change
 *  the value, but the user of the class can only access the const (or read-only)
 *  version of the variable.
 *  the trick itself: http://www.cplusplus.com/forum/articles/36872/
 *  why this works: http://stackoverflow.com/questions/2785612/c-what-does-the-colon-after-a-constructor-mean
 */
SortedListA::SortedListA() : size(_size){

    this->items= new int(size);
    _size = size;
}

/**Inserts element into sorted list in sorted position.
 * Inserts an element into a sorted array so that
 * the array remains sorted.  Updates the _size element
 * count.
 */
void SortedListA::insert(int v) {
    // if the list is empty
   int node = _size;
       for (int i = 0; i <_size;){
           if (v <items[i])
               node =i;
            break;
        }
         for (int i =size; i>=node; i--){
             items[i]=items[i-1];
         }
   items [node]=v;
    _size++;
}

/** Allows object to print current state into stream.
 * Prints each value in the array, separated by commas.
 * Surrounds entire value with square brackets, and
 * indicates that it is a SortedListA object.
 * Note, last value does not have a comma after it.
 * For example:
 * SortedListA[1, 1, 1, 2, 4]
 *
 */
ostream& operator<<(ostream &ostr, const SortedListA &p){

for (int i=0; i< p.size; i++){
    ostr <<"SortedListA"<< "["<<p.items[i]<< ",";
}
    ostr<< p.items<< "]"<< endl;

    return ostr;
}

/** Returns value at element specified in subscript.
 *  If the subscript is out of bounds, prints error message
 *  "Index out of bounds!" and exits with a value
 *  of EXIT_FAILURE.
 */
int & SortedListA::operator [](const int element){

if(element > size){
    cout<< "Index out of bounds !"<< endl;

}else
{for (int i=0; i< element;i++);}

    {return items[element];}

}

