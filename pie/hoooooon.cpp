
<views> : START,views
  S<video> :  START 
   S <vid>123 e</vid> : 
   S <position>350.0e</position>
  e</video>
 
 S <video>
    <vid>456</vid>
    <completed>true</completed>
  </video>
</views>

TokenType:
    START
    TEXT
    END
    
Token:
    TokenType getType();
    string getValue();
    
Tokenizer:
    boolean hasNext();
    Token next();
    
    
struct TreeNode {
    TokenType tokenType; 
    string value;
    TreeNode *next;     
    vector<TreeNode *>child;
    TreeNode (TokenType tokenType,string value) : 
      tokenType(tokenType),value(value),next(NULL),capcity(0)
    {
    
    };
      
};

//(start,views)
//     |_ (start,video) -> (start,video) -> (end,views)
       |_ (start,vid)    |_>(start,vid)    |                
       |_ (text,123)     |_>(text,123) 
       |_ (end,vid)   
       |->(start,pos)    |_>(end,video)
       |->(text,350)
       |->(end,pos) 
       |_>(end,video)


TreeNode* parse(Tokenizer t) {
    
    TreeNode *root = null;
    TreeNode *current = root;
    TreeNode *prev = null;
    bool isText = false;
    int numberOfText = 0;
    while (t.hasNext() == true ) {
         TokenType tokenType  = t.getType ();
         string strVal = t.getValue();
         TreeNode *tmpNode = new TreeNode(tokenType,strVal);
         if (tokenType == TokenType.START || tokenType == TokenType.Text || numberofText > 0) {
               
                if (current == null) {
                    current = tmpNode;
                } else {
                     current.child.push_back(tmpNode);   
                }
                if ( tokenType == tokenType.Text) {
                      numberOfText++;
                }
                if ( numberOfText > 0 && tokenType == tokenType.END) {
                    numberOfText--;
                }
                
         } else if (tokenType == tokenType.END ){
               current.child.push_back(tmpNode);   
               current = current->next;
         }
         t = t.next();    
    } 
    
    return root;
}
