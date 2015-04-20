
List* flattenToLL(Node* root) {
    List *list1 = (root->left) ? flattenToLL(root->left) : NULL;
    List *list2 = (root->right) ? flattenToLL(root->right) : NULL;
    List *list3 = newNode(root->key);
    // The "middle" list3 cannot be NULL; append list2 to list3
    list3->next = list2; // If list2 is NULL, it's OK
    if (!list1) return list3; // Nothing to prepend
    List *last = list1;
    while (last->next) last=last->next; // Go to the end of list1
    last->next = list3; // Append list3+list2 to the end of list1
    return list1;
}
