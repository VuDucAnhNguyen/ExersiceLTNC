Node* deleteBottom(Node* head){
    Node* current = head;
    Node* bottom = NULL;
    Node* prevbottom = NULL;
    if (current->value*2<(current->next->value)){
        head=current->next;
        delete current;
        return head;
    }

    while (current->next!=NULL&&bottom==NULL){
        if (current->next->next!=NULL){
            int currentvalue=current->value;
            int nextvalue=current->next->value;
            int nextnextvalue=current->next->next->value;
            if (nextvalue*2<min(currentvalue,nextnextvalue)){
                bottom=current->next;
                prevbottom=current;
                break;
            }
        } else if (current->next->value*2<current->value){
            bottom=current->next;
            prevbottom=current;
            break;
        }
        current=current->next;
    }
    if(bottom!=NULL){

        current->next=bottom->next;
        delete prevbottom->next;

    }
    return head;
}
