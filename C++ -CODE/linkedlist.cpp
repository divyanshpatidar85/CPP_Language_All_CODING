#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int insertion(struct Node *ptr, int n)
{
    Node *header = ptr;
    int i = 0;
    int j;  
    while (i != n)
    {
        if (i == 0)
        {
            cout << "Enter value of ele " << i + 1 << " : \n";
            cin >> j;
            ptr->data = j;
            ptr->next = NULL;
        }
        else
        {
            header->next = (Node *)malloc(sizeof(Node));
            header = header->next;
            cout << "Enter value of ele " << i + 1 << " : \n";
            cin >> j;
            header->data = j;
            header->next = NULL;
        }
        i++;
    }
}
void traversel(struct Node *ptr)
{
    cout << "jai shree ram \n";
    while (ptr != NULL)
    {

        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
Node *deletion(struct Node *ptr, int position)
{
    int i = 1;
    Node *lol, *joke;
    if (i != position && ptr->next != NULL)
    {
        joke = ptr;
        while (i != position)
        {
            if (i == position - 1)
            {
                lol = ptr;
            }
            ptr = ptr->next;
            i++;
        }
        lol->next = ptr->next;
        cout << ptr->data << "  is delete \n";
        return joke;
    }
    else
    {
        if (ptr->next == NULL)
        {
            cout << "deletion is not possible \n";
            joke = ptr;
            return 0;
        }
        ptr = ptr->next;
        return ptr;
    }
}
int searching(struct Node *ptr, int ele)
{
    int node = 1;
    while (ptr != NULL)
    {
        if (ptr->data == ele)
        {
            //  cout<<ptr->data<<" ";
            return node;
        }
        ptr = ptr->next;
        node++;
    }
    cout << "No element is found \n";
    exit(0);
}

int main()
{
    int element, value, search;
    cout << "Enter How many element insert in Linked list \n";
    cin >> element;
    Node *head = (Node *)malloc(sizeof(Node));
    insertion(head, element);
    if (element != 0)
    {
        traversel(head);
        cout << endl;
        cout << "Enter the position which you want to delete in linked list\n";
        cin >> value;
        head = deletion(head, value);

        traversel(head);
        cout << "\n Enter the element which you find in linked list \n";
        cin >> search;
        int k = searching(head, search);
        cout << "Element is present in Node : " << k;
    }
    else
    {
        cout << "You can't perform any operation \n ";
    }
    return 0;
}