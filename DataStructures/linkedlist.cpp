#include<iostream>
#include<cstdlib>
#include<list>

using namespace std;

struct node
{
    int x;
    node *next;
};

void list_traversal(node *list)
{
    if(list!=0)
    {
        node *head = list;
        cout<< head->x <<"\n";
        //head = head->next;
        list_traversal(head->next);
    }
}

void list_revarsal(node *list)
{
    if(list!=0)
    {
        node *head = list;
        //head = head->next;
        list_revarsal(head->next);
        cout<< head->x <<"\n";
    }
}
void insert_node(int data,node **head)
{
    node *temp = new node;
    temp->x = data;
    temp->next = (*head);
    (*head) = temp;
}
int delete_node(int data, node *head)
{
    int flag =0;
    if(head!=0)
    {
        if(head->x == data)
        {
            head = head->next;
            flag = 1;
        }
        else
        {
            while(head->next != 0)
            {
                if((head->next)->x == data)
                {
                    head->next = ((head->next)->next);
                    flag =1;
                }
                head = head->next ;
            }

        }
    }
    if(flag ==0)
        return -1;
    else
        return 0;
}

/* We would use the STL Linked list which is defined in std::list as template 
<class T, class Alloc  = allocator<T>> class list
we will use a class and add few functions to that class to take care of doubl
linked list
*/

class doub_list {
    public:
        doub_list(std::list<int> _first) : first(_first) {};
        doub_list(std::list<int> _first,int _data) : first(_first),data(_data) {};
        void add_node_head()
        {
            
        }
        void add_node_tail(){};
        void delete_node_head(){};
        void delete_node_tail(){};
        void delete_duplicate(){};
        void traverse_list()
        {
            std::list<int*>::const_iterator i;
            for (i=first.begin();i!=first.end();i++)
            {
                cout << (*i).print();
            }
        }

    private:
        int data;
        std::list<int> first;
};

int main(int argc, char **argv)
{
    std::list<int> first;
    first.assign(5, 10);
    doub_list l1 = doub_list(first);
    l1.traverse_list();
    return 0;
}

/*int main(int argc, char **argn)
{
    node *a = new node[10];
    node *head = NULL;
    
    for(int i=0; i<10;i++)
        insert_node((rand()%10),&head);
    
    cout<< "Printout of traversal" <<"\n"; 
    list_traversal(head);
    //Delete a node
    int del=delete_node(100,head);
    if(del == 0)
    {
        cout<<"Node Deleted"<<"\n";
    }
    else
    {
        cout<<"No node with this data found"<<"\n";
    }
    
    cout<< "Printout of revarsal" <<"\n"; 
    list_revarsal(head);
    return 0;
}*/


