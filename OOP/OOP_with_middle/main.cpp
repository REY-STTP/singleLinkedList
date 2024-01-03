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

    cout << "\n\n" << endl;

    linkedList.addMiddle("Bumi Manusia", "Pramoedya Anata Toer", 2005, 2);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.addMiddle("Negeri 5 Menara", "Ahmad Fuadi", 2009, 2);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.removeMiddle(5);
    linkedList.printSingleLinkedList();

    cout << "\n\n" << endl;

    linkedList.changeMiddle("Sang Pemimpi", "Andrea Hirata", 2006, 2);
    linkedList.printSingleLinkedList();

    return 0;
}
