#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node * prev;
    public:
    Node(int data1,Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    public:
    Node(int data2){
        data = data2;
        next = nullptr;
        prev = nullptr;
    }
};

Node * convertarray(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node * prev = nullptr;
    for( int i =0; i<arr.size(); i++){
        Node * temp = new Node(arr[0]);
    }
}
Node * print(vector<int>&arr){
    int n = arr.size();
   Node * head = new Node(arr[0]);
   while(head!=NULL){
        cout<<head->data;
        head = head->next;
   }
}

int main(){
    vector<int>arr={12,5,2,7};
    Node * head = convertarray(arr);
    
    
}
