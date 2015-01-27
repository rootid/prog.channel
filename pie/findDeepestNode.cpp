


//find most deepest leaf
//BFS 

BTNode* findMostDeepleaf (BTNode *root) { 

    if (!root) {
        return NULL;
    }
    
    queue<BTNode *> bQ;
    bQ.push (root);
    int cV = 1;
    int nV = 0;
    int level = 0;
    int maxLevel = 0;
    BTNode *maxNode = NULL;
    while (!bQ.empty()) {
        BTNode *tmpNode = bQ.front();
       
        if (tmpNode->left) {
            bQ.push(tmpNode->left);
            nV++;
        }
        if (tmpNode->right) {
            bQ.push(tmpNode->right);
            nV++;
        }
        bQ.pop();
        cV--; 
        if (cV == 0) {
            level++;
            maxNode = tmpNode;
            cV = nV;
            nV = 0;
        } 
    }
    return (maxNode);
}
