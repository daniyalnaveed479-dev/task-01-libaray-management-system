
#include "LinkedList.h"
#include <utility>

void LinkedList::Sort()
{
    for (BookNode* i = head; i != nullptr; i = i->next)
    {
        for (BookNode* j = i->next; j != nullptr; j = j->next)
        {
            if (i->bookID > j->bookID)
            {
                swap(i->bookID, j->bookID);
                swap(i->title, j->title);
            }
        }
    }

    cout << "Books sorted by ID successfully!" << endl;
}
