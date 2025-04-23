LinkedList* LinkedList::createEvenList() {
    LinkedList* newList = new LinkedList();
    newList->head=NULL;
    newList->tail= newList->head;

    Node* current = head;
    int index = 1;

    while (current!=NULL){
        if(index%2==0){
            Node* newNode = new Node;
            newNode->data=current->data;
            newNode->next=NULL;

            if(newList->head==NULL){
                newList->head=newNode;
                newList->tail=newNode;
            } else {
                newList->tail->next=newNode;
                newList->tail=newNode;
            }
        }
        current=current->next;
        index++;
    }

    return newList;
} ;
