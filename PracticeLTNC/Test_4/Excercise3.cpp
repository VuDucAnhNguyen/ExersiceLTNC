#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

LinkedList* LinkedList::createOddList(){
    Linkedlist* ans = new Linkedlist;
    ans->head=NULL;
    ans->tail=ans->head;

    int index=1;
    Node* current = head;
    while (current!=NULL){
        if(index%2==1){
            Node* newNode = new Node;
            newNode->data=current->data;
            newNode->next=NULL;
            if(ans->head==NULL){
                ans->head=newNode;
                ans->tail=newNode;
            } else {
                ans->tail->next=newNode;
                ans->tail=newNode;
            }
        }
        current=current->next;
        index++;
    }
    return ans;
}
