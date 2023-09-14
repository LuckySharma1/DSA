#include<iostream>
using namespace std;
bool isCircularList(Node *head){
    // empty list
    if(head == NULl) {
        return true;
    }

    Node *temp = head -> next;
    while(temp != NULL && temp != head) {
        temp = temp -> next;
    }

    if(temp == head) {
        return true;
    }
    return false;
}
int main(){

    Node *head= NULL;

    insertNode(head, 5, 3);
    print(head);

    insertNode(head, 3, 5);
    print(head);


    if(isCircularList(head)){

        cout<<"linked list is Circular in nature"<<endl;
    }
    else{
        cout<<"linked list is not Circular in nature"<<endl;

    }

    return 0;
}