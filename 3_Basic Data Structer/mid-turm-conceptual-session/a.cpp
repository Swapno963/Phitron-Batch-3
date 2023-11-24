#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int val;
 Node* next;
 Node(int val){
    this->val=val;
    this->next=NULL;
 }   
};
void insert_tail(Node *&head,Node *&tail,int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}


// reverse
void reverse_elemtn(Node *&head, Node *cur)
{
    if(cur->next ==NULL)
    {
        head = cur; return;  
    }
    reverse_elemtn(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;

}
void print_linked_list(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
cout<<tmp->val<<" ";
tmp = tmp->next;
    }
    cout<<endl;
}

void isPalindrome(Node* head){
    Node* newHead = NULL;
    Node* newTail = NULL;
    Node* tmp = head;
    // if(head == NULL){
    //     return;
    // }
       while(tmp != NULL)
    {
        insert_tail(newHead,newTail, tmp->val);
        tmp = tmp->next;
    }


reverse_elemtn(newHead,newHead);


    //reverse(newHead,newTail);
    //print_linked_list(newHead);
     tmp = head;
    Node* tmp2 = newHead;
 
print_linked_list(tmp2);


    while(tmp != NULL){
        if(tmp->val != tmp2->val){
cout<<"NO"<<endl;
return;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    cout<<"YES"<<endl;
}

int main(){

Node *head = NULL;
Node *tail = NULL;

int val;
while(true){
    cin>> val;
    if(val == -1)
    break;
    insert_tail(head,tail,val);
}
//reverse(head,head);
isPalindrome(head);
//print_linked_list(head);
return 0;
}