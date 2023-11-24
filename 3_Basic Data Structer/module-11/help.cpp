#include <bits/stdc++.h>
using namespace std;

 
class Node 
{

public:
int value;
  
Node * next;
  
 
Node (int value) 
  {
    
this->value = value;
    
this->next = NULL;

} 
};


 
void
print_list (Node * head) 
{
  
Node * temp = head;
  
 
while (temp != NULL)
    
    {
      
cout << temp->value << " ";
      
temp = temp->next;
    
}
  
 
cout << endl;

}


 
void
insert_position (Node * &head, int pos, int v) 
{
    Node * newNode = new Node (v);
    if (pos == 0) 
    {    
        head = newNode;
        return;
    }

    Node * temp = head;
    for (int i = 1; i <= pos - 1; i++)
    
    {
      
temp = temp->next;
    
} 
newNode->next = temp->next;
  
temp->next = newNode;
  
print_list (head);

} 
 
void

insert_tail (Node * &head, int value) 
{
  
Node * newNode = new Node (value);
  
if (head == NULL)
    
    {
      
head = newNode;
      
return;
    
}
  
Node * temp = head;
  
 
while (temp->next != NULL)
    
    {
      
temp = temp->next;
    
}
  
temp->next = newNode;

}


 
int main () 
{
  
Node * head = NULL;
while (true)
    
    {
      
int value;
      
cin >> value;
      
if (value == -1) break;
      
insert_tail (head, value);
    
}
  
 
print_list (head);
  
 
int v;
  
int pos;
  
cin >> v >> pos;
  
 
insert_position (head, pos, v);
  
 
 
return 0;

}

