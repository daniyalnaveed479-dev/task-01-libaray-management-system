
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
using namespace std;

struct BookNode
{
    int bookID;
    string title;
    BookNode* next;
};

class LinkedList
{
private:
    BookNode* head;
    int count;

public:
    LinkedList();
    ~LinkedList();

    void Insert(BookNode* book);
    BookNode* Remove();

    void InsertAt(BookNode* book, int index);
    BookNode* RemoveAt(int index);

    void Swap(int index1, int index2);
    void Sort();
    void Reverse();
    void Print();

    bool IsEmpty();
    bool IsNotEmpty();
    int Size();
};

BookNode* CreateBook(int id, string title);

#endif
