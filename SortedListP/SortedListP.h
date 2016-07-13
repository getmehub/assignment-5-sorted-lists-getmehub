//
// Created by Marc Sosnick on 7/11/16.
//

#ifndef SORTEDLIST_SORTEDLISTP_H
#define SORTEDLIST_SORTEDLISTP_H
#include <iostream>

/**
 * \class Item
 * \brief List class for SortedListP
 *
 * Item stores each value for the sorted list, and the location
 * of the next item on the list.
 */
class Item{
public:
    int value;  //< The value of the list element
    Item* next; //< Pointer to the next list element
};


/**
 * \class SortedListP
 * \brief Sorted list of integers with duplicates
 *
 * Implements a sorted list of integers.  Always keeps list in
 * order.  This implementation uses linked lists.
 */
class SortedListP {
private:
    Item* head; //< Points to the head item
    int _size;  //< Number of elements in list

public:
    const int& size;    //< Number of elements in list, read-only

    SortedListP();
    void insert(int v);
    int &operator [](int element);
    friend std::ostream& operator <<(std::ostream &, const SortedListP &);
};

#endif //SORTEDLIST_SORTEDLISTP_H
