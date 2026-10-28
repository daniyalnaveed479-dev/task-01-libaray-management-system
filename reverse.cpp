
#include "LinkedList.h"

void LinkedList::Reverse()
{
    BookNode* previous = nullptr;
    BookNode* current = head;
    BookNode* next = nullptr;

    while (current != nullptr)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    head = previous;

    cout << "Book collection reversed successfully!" << endl;
}
