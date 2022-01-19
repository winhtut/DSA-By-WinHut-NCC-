// Creating our own data structure

#include "iostream"

class Node{
public:
    int data;
    int data2;
    Node* next;
};

void print(Node* node){
    while ( node !=NULL){
        std::cout<< node->data <<" ";
        std::cout<< node->data2 <<" "<<std::endl;
        node = node->next;
    }

}


int main(){

    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head = new Node();
    second=new Node();
    third = new Node();

    head->data=1;
    head->data2= 101;
    head->next = second;

    second->data = 10;
    second -> data2= 102;
    second->next = third;


    third -> data = 20;
    third -> data2 = 103;
    third ->next = head;

    std::cout<<" Our data structure successfully created!"<<std::endl;

    std::cout<<"Our data : "<<std::endl;
    print(head);

    return 0;
}
