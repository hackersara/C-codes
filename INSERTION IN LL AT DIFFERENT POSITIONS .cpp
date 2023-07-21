
#include <iostream>
using namespace std;

class node{
   public: 
    node*next;
    int data;
    node(int d)
    {
      data=d;
      next=NULL;
    }
};

   // at front
void insertatfront(node*&head,node*&tail,int data){
        if(head==NULL){
            node*p=new node(data);
            head=p;
            tail=p;
        }
        
        else{
             node*p=new node(data);
          p->next=head;
          head=p;
        }
    }
    
    // at end
 void insertatend(node*&head,node*&tail,int data){
         
        if(head==NULL){
            node*p=new node(data);
            head=p;
            tail=p;
        }
        else{ 
            node*p=new node(data);
            tail->next=p;
            tail=p;
        }
        }
    
  
    // at any position 
    
        int lengthofll(node*head){
            int co=0;
            node*temp=head;
            
            while(temp!=NULL){
                co++;
                temp=temp->next;}
            return co;
            }
        
   void insertatanypos(node*&head,node*&tail,int data,int pos){
    if (pos==0){
        insertatfront(head,tail,data);
    }
    
    else if(pos>=lengthofll(head))
    {
        insertatend(head,tail,data);
    }
    else{
        node*p =new node(data);
        node*temp=head; 
        for(int jump=1;jump<=pos-1;jump++){
            temp=temp->next;
        }
        
        p->next=temp->next;
        temp->next=p;
    }
}


void printll(node*head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head=head->next;
        }
    }

int main() {
    
    node*head=NULL;
    node*tail=NULL;
    
    
    insertatfront(head,tail,10);
    insertatfront(head,tail,11);
    insertatend(head,tail,9);
    insertatend(head,tail,7);
    insertatend(head,tail,4);
    insertatanypos(head,tail,5,3);
    
    printll(head);
    return 0;
}
