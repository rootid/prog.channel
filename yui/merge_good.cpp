
Node*  mergeLL (Node *l1,Node *l2) {
    
    Node *tmp = NULL;
    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    
    if (l1->val < l2->val) {
        tmp = l1;
        tmp->next = mergeLL (l1->next,l2);
    } else {
        tmp = l2;
        tmp->next = mergeLL (l1,l2->next);
    }
    
    return tmp;
    
}
