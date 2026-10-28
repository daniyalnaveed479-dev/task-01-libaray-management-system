
#include "LinkedList.h"

LinkedList::LinkedList()
{
    head = nullptr;
    count = 0;
}

LinkedList::~LinkedList()
{
    while (!IsEmpty())
    {
        delete Remove();
    }
}
