#include <iostream>
using namespace std;

int queue[100], n = 100;
int front = -1, rear = -1;

void Enqueue(int val)
{
    if ((rear + 1) % n == front)
    {
        cout << "Queue is Full" << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear = (rear + 1) % n;
    queue[rear] = val;
}

int Dequeue()
{
    if (front == -1)
    {
        cout << "Queue is Empty" << endl;
        return -1;
    }
    int ans = queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % n;
    return ans;
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue elements are: ";
        int i = front;
        while (i != rear)
        {
            cout << queue[i] << " ";
            i = (i + 1) % n;
        }
        cout << queue[i] << endl;
    }
}

int main()
{
    int choice = 0;
    int val;

    while (choice != 4)
    {
        cout << "1. Insert element in Queue" << endl;
        cout << "2. Delete element in Queue" << endl;
        cout << "3. Display elements of Queue" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> val;
            Enqueue(val);
            break;

        case 2:
            val = Dequeue();
            if (val != -1)
                cout << "Deleted element is: " << val << endl;
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Exiting from the program." << endl;
            break;

        default:
            cout << "Invalid choice!!!" << endl;
            break;
        }
    }

    return 0;
}
