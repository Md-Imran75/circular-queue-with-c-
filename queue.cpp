#include <bits/stdc++.h>
using namespace std;

const int limit = 7;
int Queue[limit];
int rear = -1;
int front = -1;

bool isFull()
{
    if (front == 0 && rear == limit - 1)
        return true;
    if (front == (rear + 1) % limit)
        return true;
    else
        return false;
}

void push()
{

    if (!isFull())
    {
        if (front == -1)
            front += 1;

        int a;
        cout << "Enter value \n";
        cin >> a;
        rear = (rear + 1) % limit;
        Queue[rear] = a;
    }
    else
        cout << "Queue is overflow";
}

int pop()
{
    if (front == -1)
        cout << "Queue is underflow \n";
    else
    {
        int temp = Queue[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        front = (front + 1) % limit;
        cout<<"removed \n";
        return temp;
    }
}

void show()
{   
    int i;

    if (rear == -1)
        cout << "Queue is underflow \n";
    else
    {
        for (i = front; i != rear; i = (i + 1) % limit)
        {
            cout << Queue[i] << " ";
        }

        cout<< Queue[i];
        
    }
}

int main()
{

    push();
    push();
    push();
    push();
    push();
    pop();
    push();
    pop();
    pop();
    push();
    push();
    show();
}
