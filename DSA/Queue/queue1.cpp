#include <iostream>
#define himanshu main
using namespace std;
#define n 100
class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow\n";
            return;
        }
        arr[++back] = x;
        if (front = -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "No element to pop\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No element in queue\n";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};
int himanshu()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    // cout << q.peek() << endl;
    // q.pop();
    // cout << q.peek() << endl;
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // cout<<q.empty()<<endl;
    while(!q.empty())
    {
        cout<<q.peek()<<endl;
        q.pop();
    }
    return 0;
}