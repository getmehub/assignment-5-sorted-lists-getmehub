#include <iostream>
#include "SortedListP.h"
#include "SortedListA.h"
using namespace std;

int main() {
    cout << "SortedListA Demo" << endl;
    cout << "----------------" << endl;

    SortedListA *a = new SortedListA();
    a->insert(5);
    a->insert(6);
    a->insert(1);
    a->insert(6);

    cout << (*a) << endl;
    for(int i = 0; i < (*a).size ; i++)
        cout << "*a[" << i << "]=" << (*a)[i] << endl;

    cout << endl;

    cout << "SortedListP Demo" << endl;
    cout << "----------------" << endl;

    SortedListP *p = new SortedListP();

    p->insert(5);
    p->insert(1);
    p->insert(1);
    p->insert(3);
    p->insert(2);

    cout << "Size = " << (*p).size << endl;
    cout << *p << endl;
    for(int i = 0; i < (*p).size ; i++)
        cout << "*p[" << i << "]=" << (*p)[i] << endl;

    return 0;
}