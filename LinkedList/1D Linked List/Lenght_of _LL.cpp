#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
    public:
    Node(int data1, Node * next1){
        data = data1;
        next = next1;
    }
    Node(int data2){
        data = data2;
        next = nullptr;
    }
};

Node* Convert(vector<int>&arr){
   Node * head = new Node(arr[0]);
   Node * mover = head;
 for(int i =1; i<arr.size(); i++){
    Node * temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp; 
   }
 return head;
}
int lenghtofLL(Node * head){
    Node * temp = head;
    int count=0;
    while(temp){
        temp= temp->next;
        count++;
    }
    return count;
}

int main(){
  vector<int>arr ={9,3,7,1};
  Node * head = Convert(arr);
  int length = lenghtofLL(head);
  cout<<length;
}