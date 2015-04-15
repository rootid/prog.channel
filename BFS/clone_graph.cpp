
/**
 * Definition for undirected graph.
 * class UndirectedGraphNode {
 *     int label;
 *     List<UndirectedGraphNode> neighbors;
 *     UndirectedGraphNode(int x) { label = x; neighbors = new ArrayList<UndirectedGraphNode>(); }
 * };
 */

       1
      / \   7
     /   \ / 
    0 --- 2---3
         / \
         \_/



UndirectedGraphNode* cloneGraph (UndirectedGraphNode *root) {

    
    UndirectedGraphNode* dRoot = NULL;
    if (!root) {
        return dRoot;
    }
    unordered_set<UndirectedGraphNode*> visitedSet;
    queue<pair <UndirectedGraphNode* , UndirectedGraphNode*> > vQ;
    
    vQ.push(make_pair(root,dRoot) );
    UndirectedGraphNode* currentNode = dRoot;
    while (! vQ.empty() ) {
        pair<UndirectedGraphNode *,UndirectedGraphNode *> tmp = vQ.front();
            
        if ( visitedSet.find(tmp) != visited.end() ) {
              visitedSet.insert(tmp);
              
              //nbrs
              vector<UndirectedGraphNode *> nbrs = tmp->neighbors;
              currentNode = tmp->second;
              if (currentNode == NULL)  {
                   currentNode = new UndirectedGraphNode(tmp->x);  
                   for (int i=0;i<nbrs.length();i++) {
                       currentNode.push_back(nbrs[i]); 
                     if ( visitedSet.find(nbrs[i]) != visited.end() ) {
                          vQ.push(nbrs[i],currentNode); 
                      }
                   }
                   dRoot = currentNode;              
              } else { 
                    vector <UndirectedGraphNode*> nbrs =  currentNode->neighbors;
                    for (int i=0;i<nbrs.size();i++) {
                         if (tmp->first == nbrs[i]) {
                             currentNode = nbrs[i];
                         }
                     } 
                  
                   for (int i=0;i<tmp->first->neighbors.length();i++) {
                      //self loop gets added
                      currentNode.push_back(nbrs[i]); 
                      if ( visitedSet.find(nbrs[i]) != visited.end() ) {
                          vQ.push(nbrs[i],currentNode); 
                      }
                   }
                  
              }
             
        }
        vQ.pop();
    
    }
    
   
    return dRoot;
    

}
