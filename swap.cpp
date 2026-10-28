
#include "LinkedList.h"
#include <utility>

void LinkedList::Swap(int index1, int index2)
{
    if (index1 < 0 || index1 >= count ||
        index2 < 0 || index2 >= count)
    {
        cout << "Invalid index!" << endl;
        return;
    }

    if (index1 == index2)
    {
        cout << "Both indexes are same." << endl;
        return;
    }

    BookNode* first = head;
    BookNode* second = head;

    for (int i = 0; i < index1; i++)
        first = first->next;

    for (int i = 0; i < index2; i++)
        second = second->next;

    swap(first->bookID, second->bookID);
    swap(first->title, second->title);

    cout << "Books swapped successfully!" << endl;
}
