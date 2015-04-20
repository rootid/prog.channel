

struct GraphNode {

    int label;
    vector<GraphNode *> gList;
}

bool isBipartite (GraphNode *g) {

    unordred_map <GraphNode *,int> colors;
    GraphNode *current = g;
    
    queue <GraphNode *> gQ;
    gQ.push(current);
    colors[current] = 1;
    
    while (!gq.empty()) {
      GraphNode *gNode = gq.front();
      gq.pop();
      int cColor = colors[current]; 
      for (auto &g : gNode->gList ) {
          
          if (colors.find(g) == colors.end() ) {
              colors[g] = cColor - 1;
              gQ.push(g);
          } else  {
             int nbrColor = colors[g];
             if (nbrColor == cColor) {
                 return false;
             }
          }
      }
      
    }
    return true;
} 
