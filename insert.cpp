
#include "LinkedList.h"

void LinkedList::Insert(BookNode* book)
{
    if (book == nullptr)
        return;

    book->next = head;
    head = book;
    count++;
}
