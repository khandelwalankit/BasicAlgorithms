#include<iostream>
#include<cstdlib>

using namespace std;

typedef struct node{
    int data;
    node *next;
}listnode;

//Recursive Reverse - Bad Method
listnode* reverse_list(listnode* src, listnode* dest){
    if(src!=NULL){
        listnode* tmpdest;
        tmpdest = src;
        src = src->next;
        tmpdest->next = dest;
        dest = tmpdest;
        reverse_list(src,dest);
    }
    else{
        return dest;
    }
}

void recursive_reverse(listnode **head){
    
    //start boundary check
    if(*head == NULL)
        return;
    
    listnode* first = *head;
    listnode* rest = first->next;
    
    //element left check
    if(rest == NULL)
        return;

    recursive_reverse(&rest);
    
    //consider rest of the list is reversed
    //1->2<-3<-4 : change the pointer of first
    first->next->next = first; //1-> <-2<-3<-4
    first->next = NULL;  //NULL<-1<-2<-3<-4
    
    //where is head?
    //Check what last should return in rest;
    //when recursive_check reaches null the rest is null and first is 4. 
    //We need to reverse list so head would be assigned rest
    *head = rest;
}


listnode* iterative_reverse(listnode *head){
    if(head == NULL || head->next == NULL)
        return head;
    listnode *current = head;
    listnode *prev=NULL;
    listnode *next=NULL;
    while(current!=NULL){
        next = current->next; //next = 2->3->4
        current->next= prev;  //current = 1->NULL
        prev = current;       //prev = 1->NULL  
        current = next;       //current = 2->3->4  
    }
    head = prev;
    return head;
}

int main(){
    listnode *src = new listnode();
    listnode *current = src;
    current->data = 1;
    current->next = new listnode();
    current = current->next;
    current->data = 2;
    current->next = new listnode();
    current = current->next;
    current->data = 3;
    current->next = new listnode();
    current = current->next;
    current->data = 4;
    current->next = NULL;    
    
    listnode *dest = new listnode();
    dest = NULL;
    //src = reverse_list(src,dest);
    //recursive_reverse(&src);
    src = iterative_reverse(src);
    while(src!=NULL){
        std::cout<<src->data<<std::endl;
        src = src->next;
    }
    return 1;
}   
