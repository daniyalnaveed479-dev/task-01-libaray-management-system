
#include "LinkedList.h"

BookNode* LinkedList::RemoveAt(int index)
{
    if (index < 0 || index >= count)
    {
        cout << "Invalid index!" << endl;
        return nullptr;
    }

    if (index == 0)
        return Remove();

    BookNode* current = head;

    for (int i = 0; i < index - 1; i++)
    {
        current = current->next;
    }

    BookNode* book = current->next;
    current->next = book->next;
    book->next = nullptr;
    count--;

    return book;
}
