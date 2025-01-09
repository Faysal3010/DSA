//Singly Linked List-এ প্রতিটি নোডের মধ্যে একটি ডাটা এবং পরবর্তী নোডের রেফারেন্স থাকে। এটি একমুখী।
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void print(Node *head)
{
    while (head != NULL)
    {
        cout<<head->data<<" ->";
        head=head->next;
    }
    cout<<"NULL\n";
}

int main()
{
  //new memory dynamic kore memory address return kore
  // -> access korar jonne use kora hoi
    Node *head = new Node{1, NULL};
    head->next = new Node{5, NULL};
    head->next->next = new Node{9, NULL};

    print(head);

    return 0;
}
