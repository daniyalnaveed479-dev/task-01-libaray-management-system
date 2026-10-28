
#include "LinkedList.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    LinkedList library;
    int choice, id, index, index1, index2;
    string title;

    library.InsertAt(CreateBook(103, "Operating Systems"), 0);
    library.InsertAt(CreateBook(101, "Data Structures"), 1);
    library.InsertAt(CreateBook(105, "Computer Networks"), 2);
    library.InsertAt(CreateBook(102, "Database Systems"), 3);
    library.InsertAt(CreateBook(104, "Software Engineering"), 4);

    do
    {
        cout << "\n===== LIBRARY BOOK COLLECTION SYSTEM =====\n";
        cout << "1. Display All Books\n";
        cout << "2. Insert Book at Head\n";
        cout << "3. Remove Book from Head\n";
        cout << "4. Insert Book at Index\n";
        cout << "5. Remove Book at Index\n";
        cout << "6. Swap Books\n";
        cout << "7. Sort Books by ID\n";
        cout << "8. Reverse Book Collection\n";
        cout << "9. Check Collection Status\n";
        cout << "10. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice))
        {
            cout << "Invalid input!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (choice)
        {
        case 1:
            library.Print();
            break;

        case 2:
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter Book Title: ";
            getline(cin, title);
            library.Insert(CreateBook(id, title));
            cout << "Book inserted successfully.\n";
            break;

        case 3:
        {
            BookNode* removed = library.Remove();

            if (removed != nullptr)
            {
                cout << "Removed: " << removed->title << endl;
                delete removed;
            }
            else
                cout << "Collection is empty.\n";

            break;
        }

        case 4:
            cout << "Enter index (0 to "
                 << library.Size() << "): ";
            cin >> index;

            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Enter Book Title: ";
            getline(cin, title);

            if (index >= 0 && index <= library.Size())
                library.InsertAt(CreateBook(id, title), index);
            else
                cout << "Invalid index!\n";

            break;

        case 5:
            cout << "Enter index to remove: ";
            cin >> index;

            {
                BookNode* removed = library.RemoveAt(index);

                if (removed != nullptr)
                {
                    cout << "Removed: " << removed->title << endl;
                    delete removed;
                }
            }

            break;

        case 6:
            cout << "Enter first index: ";
            cin >> index1;
            cout << "Enter second index: ";
            cin >> index2;
            library.Swap(index1, index2);
            break;

        case 7:
            library.Sort();
            break;

        case 8:
            library.Reverse();
            break;

        case 9:
            if (library.IsEmpty())
                cout << "Collection is EMPTY.\n";
            else if (library.IsNotEmpty())
                cout << "Collection is NOT EMPTY.\n";

            cout << "Total books: " << library.Size() << endl;
            break;

        case 10:
            cout << "Program closed.\n";
            break;

        default:
            cout << "Invalid choice! Select 1-10.\n";
        }

    } while (choice != 10);

    return 0;
}
