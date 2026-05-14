#include<iostream>
using namespace std;

class Node{
 
    public:
    int data;
    Node * next;
    public:
    Node(int data , Node * next1){
        data = data;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* Convertarr2li(vector<int>&arr){
 
    Node * head = new Node(arr[0]);
    Node * mover = head;
    for( int i =1;i<arr.size();i++){
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
 
    vector<int>arr = {2,5,1,7,9};
    Node* head = Convertarr2li(arr);
    cout<<head->data;
}
