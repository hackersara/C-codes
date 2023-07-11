// insert at end 
#include <iostream>
using namespace std;
class node{
   public: 
    node*next;
    int data;
    node(int d)
    {   data=d;
        next=NULL;
    }
};
    
 void insertatend(node*&head,node*&tail,int data){
       //ll is empty
       if(head==NULL)
       {
         node*p= new node(data); 
          head=p;
          tail=p;
       }
       // ll is not empty
       else{
        node*p= new node(data);
        tail->next=p;
        tail=p;
       }
   } 
   
void   printll(node*head){
       while(head!=NULL){
           cout<<head->data<<" ";
           head=head->next;
       }
   } 

int main(){
    
    node*head=NULL;
    node*tail=NULL;
    
    insertatend(head,tail,6);
    insertatend(head,tail,45);
    insertatend(head,tail,21);
    insertatend(head,tail,91);
    
    printll(head);
    cout<<" ";

    return 0;
}
