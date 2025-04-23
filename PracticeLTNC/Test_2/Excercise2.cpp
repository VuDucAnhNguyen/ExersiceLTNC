Node* deleteTop (Node* head){
    Node* current = head;
    Node* top = NULL;
    if (current->value>2*current->next->value){
        head=current->next;
        delete current;
        return head;
    }
    while (current->next->next!=NULL&&top==NULL){
        if(current->next->value>2*(current->value+current->next->next->value)){
            top=current->next;
            break;
        }
        current=current->next;
    }
    if (current->next->value>2*current->value &&top==NULL){
        top=current->next;
    }
    current->next=top->next;
    delete top;

    return head;
}
