#include<iostream>
#include<string>
#include<math.h>


//HashTable implementation 
using namespace std;

class HashS {
    
    private : 
        
        struct HashNode {
            string key;
            string val;
            HashNode *next;
        
            HashNode () :
                 key("")
                ,val("")
                ,next(NULL)
            {
            };
        
            HashNode (string key,string v) : 
                key(key),val(v),next(NULL)
            {
        
            };
        
        };

        static const int numberOfChains = 97;
        HashNode hs [numberOfChains];
        int hashKey (string key) {
           
            int hashCode = 0; 
            for (int i=0;i<key.length();i++) {
                hashCode += key[i] * pow( 31, key.length() - (i+1) );
            }
            return (hashCode & 0x7fffffff % this->numberOfChains);
        }

    //interfaces
    public :

        HashS () {

        }

        ~HashS () {

        }

        void put(string key,string value) {
           
            int idx = hashKey (key);
            cout << "key = " << key << ",idx = " << idx << endl;
            if (hs[idx].key.length() == 0 ) {
                hs[idx].key = key;
                hs[idx].val = value;
            } else {
                HashNode *tmpNode = new HashNode(key,value);
                if (hs[idx].next == NULL) {
                    hs[idx].next = tmpNode;
                } else {
                    HashNode* oldHead = hs[idx].next;
                    hs[idx].next = tmpNode;
                    tmpNode->next = oldHead ;
                }
            }

        }

        string get (string key) {
            cout << "getting the value " << endl;
            string result = "";
            int idx = hashKey (key);
            cout << "key = " << key << ",idx = " << idx << endl;
            if (hs[idx].key == key) {
                return hs[idx].val;
            }
            HashNode* tmp = hs[idx].next;

            while (tmp) {
                if (tmp->key == key) {
                    result = tmp->val;
                    return result ;
                }
                tmp = tmp->next;
            }
            return result;
        }


};


int main () {

    HashS hashs;
    hashs.put("hi","hello");
    hashs.put("httt","hello1");
    hashs.put("hee","hello2");
    hashs.put("htttt","hello0");
    hashs.put("httttt","hello1");
    hashs.put("4hee","hello2");
    hashs.put("hi","hello");
    cout << hashs.get("htttt") << endl;
    cout << hashs.get("httttt") << endl;
    cout << hashs.get("4hee") << endl;
}
