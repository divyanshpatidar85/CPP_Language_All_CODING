#include <iostream>
using namespace std;
struct Queue
{
    int data;
    Queue *rear;
};
Queue *insertion(Queue *ptr, Queue *ntr, int element)
{
    int i = 0, data;
    Queue *jne;
    while (i != element)
    {
        if (i == 0)
        {
            cout << "Enter data \n";

            cin >> data;
            ntr->data = data;
            jne = ntr;
        }
        else
        {
            jne->rear = new Queue[1];
            cout << "Enter data \n";
            cin >> data;
            jne = jne->rear;
            jne->data = data;
            jne->rear = NULL;
        }
        i++;
    }

    return jne;
}
void travalsel(Queue *ptr, Queue *tr)
{
    cout << "jai shree ram \n";
    while (ptr != tr)
    {
        // cout<<"hi";
       cout << ptr->data << " ";
        ptr = ptr->rear;
    }
    cout << ptr->data << " ";
}

int main()
{
    int ele;
    cout << "Enter number of element \n";
    cin >> ele;
    Queue *t, *r;
    t = new Queue[1];
    r = t;
    r = insertion(t, r, ele);
    travalsel(t, r);
    return 0;
}