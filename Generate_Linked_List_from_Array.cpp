#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createLinkedList(int arr[], int Sz)
{
    if(Sz==0)return NULL;
    Node*head=new Node{arr[0],NULL};
    Node*current=head;
    for(int i=1;i<Sz;i++){
        current->next=new Node{arr[i],NULL};
        current=current->next;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ->";
        head = head->next;
    }
    cout<<"NULL\n";
}

int main()
{
    int arr[] = {1, 7, 3, 4, 9, 2, 6, 8, 0, 2, 5};
    int Sz = sizeof(arr) / sizeof(arr[0]);
    Node *head = createLinkedList(arr, Sz);
    print(head);
    return 0;
}
