#include "LinkedList.h"
#include <iostream>
using namespace std;

int main() {
    LinkedList list;

    list.InsertAtTail(1);
    list.InsertAtTail(2);
    list.InsertAtTail(3);
    list.InsertAtTail(4);

    cout << " InsertAtTail " << endl;
    list.PrintList(); // Output: 1 2 3 4

    cout << " InsertAt(Insert 4 at 0)" << endl;
    list.InsertAt(0, 4);//0 is postion & 4 is value
    list.PrintList(); // Output: 4 1 2 3 4

    cout << " InsertBefore(4, 5)" << endl;
    list.InsertBefore(4, 5);
    list.PrintList(); // Output: 5 4 1 2 3 4

    cout << " InsertAtHead(0)" << endl;
    list.InsertAtHead(0);
    list.PrintList(); // Output: 0 5 4 1 2 3 4

    return 0;
}
