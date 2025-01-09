#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *createLinkedList(int arr[], int Sz)
{
    if (Sz == 0)
        return NULL;
    Node *head = new Node{arr[0], NULL};
    Node *current = head;
    for (int i = 1; i < Sz; i++)
    {
        current->next = new Node{arr[i], NULL};
        current = current->next;
    }
    return head;
}
Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void printLinkList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()
{
    int arr[] = {5, 9, 6, 3, 4, 8, 5, 6, 7, 1220, 2, 30, 3, 89};
    int Sz = sizeof(arr) / sizeof(arr[0]);
    Node *head = createLinkedList(arr, Sz);
    printLinkList(head);
    head = reverseLinkedList(head);
    printLinkList(head);
    return 0;
}
