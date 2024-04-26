#include <iostream>
using namespace std;

int queue[100], n = 100;
int front, rear = -1;

void insert(int val)
{
    if (rear == n - 1)
    {
        cout << "Queue is full\n";
    }
    else
    {
        rear++;
        queue[rear] = val;
    }
}

void pop()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is underflow\n";
    }
    else
    {
        cout << "Deleted element is " << queue[front] << "\n";
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue elements are: ";
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout <<endl;
    }
}

int main()
{
    int choice = 0;
    int val;

    while (choice != 4)
    {
        cout << "Insert element in Queue " << endl;
        cout << "Delete element in Queue " << endl;
        cout << "Display element of Queue " << endl;
        cout << "Exit" << endl;
        cout << "Enter what is the choice you want " << endl; // Here's the correction
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            insert(val);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Exit from the program " << endl;
            break;

        default:
            cout << "Your Invalid choice!!!!! " << endl;
            break;
        }
    }
    return 0;
}
