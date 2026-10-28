
#include "LinkedList.h"

void LinkedList::Print()
{
    if (IsEmpty())
    {
        cout << "The book collection is empty." << endl;
        return;
    }

    BookNode* current = head;
    int index = 0;

    cout << "\nIndex\tBook ID\tTitle\n";
    cout << "----------------------------------------\n";

    while (current != nullptr)
    {
        cout << index << "\t"
             << current->bookID << "\t"
             << current->title << endl;

        current = current->next;
        index++;
    }

    cout << "Total books: " << count << endl;
}
