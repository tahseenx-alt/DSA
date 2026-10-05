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

Node * insertPosition(Node * head ,int post, int value){
    if(head == NULL){
        if(post==1){
            return new Node(value);
        }
        else{
            return head;
        }
    }
    if(post==1){
        return new Node(value,head);
    }
    int cnt = 0;
    Node * temp = head;
    while(temp!= NULL){
        cnt++;
        if(cnt == (post-1)){
            Node * x = new Node(value,temp->next);
            temp->next=x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main(){

    vector<int>arr = {5,6,1,3,2};
    Node* head = convert(arr);
    int post;
    cin>>post;
    int value;
    cin>>value;
     
    head = insertPosition(head,post,value);
    print(head);
    return 0;
}