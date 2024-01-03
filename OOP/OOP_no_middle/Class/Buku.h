#include <iostream>
using namespace std;

class Buku {
public:
    string judul, pengarang;
    int tahunTerbit;

    Buku(string judul = "Tidak Ada", string pengarang = "Tidak Ada", int tahunTerbit = 0) {
        this->judul = judul;
        this->pengarang = pengarang;
        this->tahunTerbit = tahunTerbit;
        this->next = nullptr;
    }

    // Getter dan Setter
    Buku* getNext() const {
        return next;
    }

    void setNext(Buku* next) {
        this->next = next;
    }

private:
    Buku* next;
};

class LinkedList : public Buku {
public:
    LinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }

    ~LinkedList() {
        Buku* current = head;
        while (current != nullptr) {
            Buku* next = current->getNext();
            delete current;
            current = next;
        }
        head = tail = nullptr;
    }

    void createSingleLinkedList(string judul, string pengarang, int tahunTerbit) {
        Buku* newBuku = new Buku(judul, pengarang, tahunTerbit);
        head = newBuku;
        tail = newBuku;
    }

    void addFirst(string judul, string pengarang, int tahunTerbit) {
        Buku* newNode = new Buku(judul, pengarang, tahunTerbit);
        newNode->setNext(head);
        head = newNode;
    }

    void addLast(string judul, string pengarang, int tahunTerbit) {
        Buku* newNode = new Buku(judul, pengarang, tahunTerbit);
        newNode->setNext(nullptr);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->setNext(newNode);
            tail = newNode;
        }
    }

    void removeFirst() {
        if (head) {
            Buku* del = head;
            head = head->getNext();
            delete del;
        } else {
            cout << "List kosong, tidak ada yang dihapus." << endl;
        }
    }

    void removeLast() {
        if (head) {
            Buku* del = tail;
            Buku* cur = head;
            while (cur->getNext() != tail) {
                cur = cur->getNext();
            }
            tail = cur;
            tail->setNext(nullptr);
            delete del;
        } else {
            cout << "List kosong, tidak ada yang dihapus." << endl;
        }
    }

    void changeFirst(string judul, string pengarang, int tahunTerbit) {
        if (head) {
            head->judul = judul;
            head->pengarang = pengarang;
            head->tahunTerbit = tahunTerbit;
        } else {
            cout << "List kosong, tidak ada yang diubah." << endl;
        }
    }

    void changeLast(string judul, string pengarang, int tahunTerbit) {
        if (head) {
            tail->judul = judul;
            tail->pengarang = pengarang;
            tail->tahunTerbit = tahunTerbit;
        } else {
            cout << "List kosong, tidak ada yang diubah." << endl;
        }
    }

    void printSingleLinkedList() {
        cout << "Jumlah data ada : " << countSingleLinkedList() << endl;
        Buku* current = head;
        while (current != nullptr) {
            cout << "Judul Buku : " << current->judul << endl;
            cout << "Pengarang Buku : " << current->pengarang << endl;
            cout << "Tahun Terbit Buku : " << current->tahunTerbit << endl;
            current = current->getNext();
        }
    }

private:
    Buku* head;
    Buku* tail;

    int countSingleLinkedList() {
        Buku* current = head;
        int jumlah = 0;
        while (current != nullptr) {
            jumlah++;
            current = current->getNext();
        }
        return jumlah;
    }
};