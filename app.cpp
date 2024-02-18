#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node * next;
    Node (){
        data =0;
        next = nullptr;
    }
    Node(int d){
        data =d;
        next =nullptr;
    }
};
class linked_list
{
public:
    Node * head;
    linked_list(){
        head = nullptr;
    }
    void insert (int d){
        Node*newNode =new Node(d);
        newNode->next = head;
        head = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout <<endl;
    }
};
int main() {
    linked_list myList;
    int n;
    cin>>n;
    myList.insert(n);
    cin>>n;
    myList.insert(n);
    cin>>n;
    myList.insert(n);
    cin>>n;
    myList.insert(n);
    myList.display();

    return 0;
}