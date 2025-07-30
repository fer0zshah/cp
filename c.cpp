#include<bits/stdc++.h>
using namespace std ;
class node{
    public:
        int data;
        node* next=NULL;
        node(int d){
            data=d;
            next=NULL;
        }
};
void insrt(node* tail,int element,int d){
   
    if(tail==NULL){
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }else{
        node* temp=tail;
        while(temp->data!=element){
            temp=temp->next;
        }
        node* newnode=new node(d);
        temp->next=newnode;
        newnode->next=temp;
    }
}
void print(node* &tail){
    node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp->next!=temp);
    cout<<endl;
}
int main()
{
    node* tail=NULL;
    insrt(tail,5,4);
    print(tail);
  
    return 0;
}