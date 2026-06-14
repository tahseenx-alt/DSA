#include<iostream>
#include <vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1 , Node * next1){
        data = data1;
        next = next1;
    }
    Node(int data2 ){
        data = data2;
        next = nullptr;
    }
};
Node * convert(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for( int i =1;i<arr.size(); i++){
        Node * temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}


void print(Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

Node * insertVal(Node * head, int value,int el){
    if(head == NULL){
        return NULL;
    }
    if(head->data == value){
        return new Node(value,head);
    }
    Node * temp = head;
    while(temp->next != NULL){
        if(temp->next->data == value){
            Node * x = new Node(el,temp->next);
            temp->next= x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){

    vector<int>arr = {5,6,1,3,2};
    Node* head = convert(arr);

    int value;
    cin>>value;
    int ele;
    cin>>ele;
    head = insertVal(head,value,ele);
    print(head);
    return 0;
}