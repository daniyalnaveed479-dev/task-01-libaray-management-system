
#include "LinkedList.h"

void LinkedList::InsertAt(BookNode* book, int index)
{
    if (book == nullptr)
        return;

    if (index < 0 || index > count)
    {
        cout << "Invalid index!" << endl;
        delete book;
        return;
    }

    if (index == 0)
    {
        Insert(book);
        return;
    }

    BookNode* current = head;

    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    book->next = current->next;
    current->next = book;
    count++;
}
