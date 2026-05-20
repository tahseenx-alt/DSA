#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    public:
    Node (int data1,Node * next1){
        data = data1;
        next = next1;
    }
    Node(int data2){
        data = data2;
        next = nullptr;
    }
};

Node * convert(vector<int>&arr){
    Node * head = new Node(arr[0]);
    Node * mover = head;
    for(int i=1; i<arr.size(); i++){
        Node * temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    } 
    return head;
}
void printarr(Node * head){
    while(head!=NULL){
        cout<<head->data<< " ";
        head = head->next;
    }
}
Node * InsertLast(Node * head , int value){
    if(head == NULL){
        return new Node(value);
    }
    Node * temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node * newNode = new Node(value);
    temp->next = newNode;
    return head;

}

int main(){
   vector<int>arr = {5,2,1,4};
   Node * head = convert(arr);
   int k;
   cin>>k;
   head = InsertLast(head,k);
   printarr(head);
   return 0;
}