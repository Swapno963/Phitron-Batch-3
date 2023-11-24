#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    
    Node(int val){
    this->val = val;
    this->next = NULL;
    this->prev = NULL;
    }
 void insert_tail(Node *&tail,int val){
    Node* newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
 }   

};
void insert_head(Node*&head,Node*&tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;

}
void print(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int size(Node *head){
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
void reverse(Node *head){
    if(head == NULL){
        return;
    }
    reverse(head->next);
    cout<<head->val<<" ";
}
void insert_pos(Node *&head,int pos,int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1;i<pos-1;i++){
        tmp = tmp->next;
    }
    if(tmp->next == NULL){
newNode->next = tmp->next;
tmp->next = newNode;
newNode->prev = tmp;
    }else{
        newNode->next = tmp->next;
        tmp->next = newNode;
        newNode->next->prev = newNode;
        newNode->prev = tmp;
    }

}

int main(){
    Node *head =NULL;
    Node *tail = NULL;
    int t;
cin>>t;
while(t--){
   int pos,val;
    cin>>pos>>val;
    int s = size(head);
   // if(pos>s){
      //  cout<<"Invaild"<<endl;
     if(s>=pos){
        insert_head(head,tail,val);
        cout<<"L"<<" "<<"->"<<" ";
        print(head);
       // cout<<endl;
        cout<<"R"<<""<<"->"<<" ";
        reverse(head);

    }else{
        cout<<"Invaild"<<endl;
     //   insert_pos(head,pos,val); cout<<"Invaild"<<endl;
    }
   // cout<<"L"<<" "<<"->"<<" ";
    //rint(head);
    //cout<<"R"<<" "<<"->"<<" ";
    //reverse(head);
    //cout<<endl;
}
    return 0;
}