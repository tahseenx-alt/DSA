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
Node * DeleteKthEle(Node *head, int k){
    Node * temp = head;
    Node * prev = NULL;
    int cnt;
    if(head == NULL){
        return head;
    }
    if(k==1){
      Node * temp = head;
      head = head->next;
      free(temp);
      return head;
    }
    cnt = 0;
    while(temp!=NULL){
        cnt++;
        if(cnt == k){
          prev->next = prev->next->next;
          free(temp);
          break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;

}

void print(Node * head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
int main(){

    vector<int>arr = {5,6,1,3,2};
    Node* head = convert(arr);
    int k;
    cin>>k;
    head = DeleteKthEle(head,k);
    print(head);
    return 0;
}