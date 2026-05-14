#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  public:
  Node(int data1,Node* next1){
    data = data1;
    next = next1;
  }
  Node(int data2){
    data = data2;
    next = nullptr;
  }
};

Node * Convert(vector<int>&arr){
    Node * head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1; i<arr.size(); i++){
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int>arr = {5,8,1,4,7};
    Node * head = Convert(arr);
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    return 0;
}