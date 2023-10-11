//Kaleigha Hayes
//1313037
//10/08/2023

#include "Circular_Doubly_Linked_List.h"
#include <iostream>
using namespace std;

int main() {
    CircularDoublyLinkedList myList;
    myList.insert(1.0);
    myList.insert(2.0);
    myList.insert(3.0);
    myList.insert(4.0);

    cout << "Forward traversal:" << endl;
    myList.printForward();

    cout << "Backward traversal:" << endl;
    myList.printBackward();

    return 0;
}
