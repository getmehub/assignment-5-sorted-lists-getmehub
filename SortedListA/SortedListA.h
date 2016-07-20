//
// Created by Marc Sosnick on 7/12/16.
//

#ifndef SORTEDLIST_SORTEDLISTA_H
#define SORTEDLIST_SORTEDLISTA_H
#include <iostream>

class SortedListA {
private:
    int* items;
    int _size;

public:
    const int& size;    //< Number of elements in list, read-only

    SortedListA();
    void insert(int v);


    int &operator [](int element);
    friend std::ostream& operator <<(std::ostream &, const SortedListA &);



};


#endif //SORTEDLIST_SORTEDLISTA_H
