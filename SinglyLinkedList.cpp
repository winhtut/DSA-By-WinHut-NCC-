#include "iostream"

// printing
// push
// append
// insert after
// search
// delete


// 111  1  00  2     3  222


class Node{
public:
    int data;
    Node* next;
};

void print(Node* node){//head   singly linked list
    while ( node !=NULL){
        std::cout<< node->data <<" ";

        node = node->next;
    }
}

void push(Node** head_ref , int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void append(Node** head_ref , int new_data){

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    Node* last = *head_ref;

    if(*head_ref == NULL){
                *head_ref = new_node;

    }
    // (1-Next) (2 - Next )  (3 - Next ) (4 - Next) (222 - NULL )
    while (last->next != NULL){
        last = last->next;
    }
    last->next = new_node;

}                         //prev-next    new_node
// (1-Next) (2 - Next )  (3 -  ) (9595 - p-Next) (4 - Next) (222 - NULL )

void insertAfter(Node* prev_node , int new_data){

    if(prev_node == NULL){
        std::cout<<"we cannot insert"<<std::endl;
        return;
    }
    Node* new_node = new Node();
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next  = new_node;
}

int main(){
    Node* head=NULL;
    Node* second=NULL;
    Node* third=NULL;

    head = new Node();
    second=new Node();
    third = new Node();

    head->data=1;

    head->next = second;

    second->data = 10;

    second->next = third;


    third -> data = 20;

    third ->next = NULL;

    std::cout<<" Our data structure successfully created!"<<std::endl;

    std::cout<<"Our data : "<<std::endl;
    print(head);


    push(&head ,101);

    std::cout<<"Our data : "<<std::endl;
    print(head);

    append(&head, 222);

    std::cout<<"Our data after append : "<<std::endl;
    print(head);

    append(&head, 22202);

    std::cout<<"Our data after append : "<<std::endl;
    print(head);

    std::cout<<"Insert after  **************"<<std::endl;
    insertAfter(second->next , 9595);

    std::cout<<"Our data after append : "<<std::endl;
    print(head);

    return 0;
}
