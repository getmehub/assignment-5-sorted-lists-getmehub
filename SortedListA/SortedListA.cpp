//
// Created by Marc Sosnick on 7/12/16.
//

#include "SortedListA.h"
#include <iostream>
#include <stdlib.h>             // EXIT_FAILURE
#include <SortedListP.h>

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
    _size =0;
    this->items =new int [_size];             /// creating new arry _size whose initial vaue is 0.

}
/**Inserts element into sorted list in sorted position. 
 * * Inserts an element into a sorted array so that 
 * * the array remains sorted.  Updates the _size element  * count. 
*/
  void SortedListA::insert(int v) {

    for (int i = _size-1; i>= 0; i--){     /// if the head contains any number then it decrease to 0.
        if (items[i] > v) {
            items[i + 1] = items[i];       /// incraese the unit by 1 and sets as head.

        } else {
            items[i + 1] = v;
            _size++;
            return;
        }
    }
            items[0]= v;
           _size++;

        }
// TODO: SortedListA insert() }   
// /** Allows object to print current state into stream. 
// * Prints each value in the array, separated by commas. 
// * Surrounds entire value with square brackets, and 
// * indicates that it is a SortedListA object. 
// * Note, last value does not have a comma after it. 
// * For example:  * SortedListA[1, 1, 1, 2, 4] 
// *  */ 
ostream& operator<<(ostream &ostr, const SortedListA &p){ 
    ostr << "SortedListA" << "[" ; 
    for (int i=0; i< p._size-1 ; i++ ){
         ostr << p.items[i] << ",";
    }
        ostr<< p.items[p._size-1]<<"]"<<endl;    
        return ostr;
     }  
/** Returns value at element specified in subscript. 
 * *  If the subscript is out of bounds, prints error message 
 * *  "Index out of bounds!" and exits with a value  *  of EXIT_FAILURE. 
 * */ 
int & SortedListA::operator [](const int element) {
     if (element >= this->_size) { 
        cout << "Index out of bounds!" << endl; 
        exit(EXIT_FAILURE);  
    }
    else {   
            return this->items[element];     }
} 
