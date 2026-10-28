
#include "LinkedList.h"

BookNode* LinkedList::Remove()
{
    if (IsEmpty())
        return nullptr;

    BookNode* book = head;
    head = head->next;
    book->next = nullptr;
    count--;

    return book;
}
