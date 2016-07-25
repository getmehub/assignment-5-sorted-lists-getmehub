#include "SortedListP.h"
#include <iostream>
#include <stdlib.h>                 // EXIT_FAILURE
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
SortedListP::SortedListP() : size(_size){
    this->head= nullptr;
   _size =0;
}

/**Inserts element into sorted list in sorted position.
 * Inserts an element into a sorted linked list so that
 * the list remains sorted.  Updates the _size element
 * count.
 */

void SortedListP::insert(int v) {
    Item *node = new Item();
    node->value = v;
    node->next = nullptr;

    Item nhead;
    nhead.next = head;
    Item *ptr = &nhead;
    while (ptr->next != nullptr) {
        if (ptr->next->value > v) {
            node->next = ptr->next;
            ptr->next = node;
            _size++;
            head = nhead.next;
            return;
        }
        else {
            ptr = ptr->next;
        }

    }
    ptr->next = node;
    _size++;
    head = nhead.next;
}

/** Allows object to print current state into stream.
 * Prints each value in the list, separated by commas.
 * Surrounds entire value with square brackets, and
 * indicates that it is a SortedListP object.
 * Note, last value does not have a comma after it.
 * For example:
 * SortedListP[1, 1, 1, 2, 4]
 *
 */
ostream& operator<<(ostream &ostr, const SortedListP &p) {

        ostr << "SortedListP" << "[";
    Item *ptr;
    ptr=p.head;
    while(ptr->next !=nullptr)
    {ostr <<ptr ->value<<",";
    ptr=ptr->next;
    }
        ostr << p.head->value << "]" << endl;
        return ostr;
    }



/** Returns value at element specified in subscript.
 *  If the subscript is out of bounds, prints error message
 *  "Index out of bounds!" and exits with a value
 *  of EXIT_FAILURE.
 */
    int &SortedListP::operator[](const int element) {
    //TODO: SortedListP subscript operator

    if (element >= this->size) {
        cout << "Index out of bounds !" << endl;
        exit(EXIT_FAILURE );

    } else {
        Item *ptr;
        ptr = this->head;
        for (int i = 0; i < element; i++){
            ptr = ptr->next;
        }

        {
            return ptr->value;
            (EXIT_SUCCESS);
        }
    }

}

