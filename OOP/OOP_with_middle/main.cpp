#include <iostream>
#include "Class/Buku.h"
using namespace std;

int main() {
    LinkedList linkedList;

    linkedList.createSingleLinkedList("Kata", "Geez & Aan", 2018);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.addFirst("Dia adalah Kakakku", "Tere Liye", 2009);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.addLast("Aroma Karsa", "Dee Lestari", 2018);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.removeFirst();
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.addLast("11.11", "Fiersa Besari", 2018);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.removeLast();
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.changeFirst("Berhenti di Kamu", "Gia Pratama", 2018);
    linkedList.printSingleLinkedList();

    return 0;
}
