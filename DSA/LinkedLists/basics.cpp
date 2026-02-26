/*struct node{
    int data;
    node*next;
};
void appendNode(node*&head, int data){
    node*nn=new node();
    nn->data=data;
    nn->next=nullptr;
    
    if(head==nullptr){
        head=nn;
    }else{
        node*temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=nn;
    }
}
void appendAtBegin(node*&head, int data){
    node*nn=new node();
    nn->data=data;
    nn->next=head;
    head=nn;
}
void insertAtChoice(node*&head, int data, int pos){
    node*nn=new node();
    nn->data= data;
    nn->next=nullptr;
    if(pos==1){
        nn->next=head;
        head=nn;
        return;
    }
    node*temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    nn->next=temp->next;
    temp->next=nn;
}void printList(node*head){ 
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deleteAtEnd(node*&head){
    if(head==nullptr){
        cout<<"Empty list";
        return;
    }
    if(head->next==nullptr){
        delete head;
        head=nullptr; 
        return;
    }
    node*temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void deleteAtBegin(node*&head){
    if(head==nullptr){
        cout<<"Empty list";
        return;
    }
    node*temp=head;
    head=head->next;
    delete temp;
}
void deleteAtChoice(node*&head, int pos){
    if(head == nullptr){
        cout << "Empty list";
        return;
    }
    if(pos==1){
        node*temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node*temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    node*a=temp->next;
    temp->next=a->next;
    delete a;
}*/
