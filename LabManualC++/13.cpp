#include <bits/stdc++.h>
using namespace std;
// again practice
// Queue using linklist
class QNode
{
public:
    int data;
    QNode *next;

    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};

class Queue
{
public:
    QNode *front, *rear;

    Queue()
    {
        front = rear = NULL;
    }

    void EnQueue(int x)
    {
        QNode *temp = new QNode(x);
        if (front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }

    void Dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        QNode *temp = front;
        front = front->next;
        delete temp;
    }

    void Display()
    {
        QNode *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int Front()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    int Rear()
    {
        if (rear == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1; 
        }
        return rear->data;
    }
};

int main()
{
    Queue q1;
    q1.EnQueue(10);
    q1.EnQueue(20);
    q1.EnQueue(30);
    q1.EnQueue(40);
    q1.EnQueue(50);
    cout << "Queue After Enqueue All Elements: ";
    q1.Display();

    q1.Dequeue();
    cout << "Queue After one Dequeue: ";
    q1.Display();

    cout << "Front Element is: " << q1.Front() << endl;
    cout << "Rear Element is: " << q1.Rear() << endl;

    return 0;
}
