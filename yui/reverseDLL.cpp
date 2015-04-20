
 //NULL<-a-><-b-><-c->
 //(<-b-><-c->)<-a->NULL

//1.Do The sWAP
//2.Store the current NODe/lst node
//3.Move to next node
Node* reverseDLL (Node *head) {

    if(!head) {
        return head;
    }
    
    Node* current = head;
    while (current != NULL) {
        swap (current->prev,current->next);
        head = current;
        current = current->prev;
    }
    return head;
}  
