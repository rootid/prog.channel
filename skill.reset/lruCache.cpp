#include<iostream>
#include<unordered_map>
using namespace std;

class LRUCache {

    struct Page {
        int key;
        int value;
        Page *next;
        Page *prev;
        Page (int key,int value) :  
            key (key),value(value),next(NULL),prev(NULL)
        {

        };
    };

    public :
        LRUCache(int capacity);
        int get(int key);
        void set(int key, int value);
        Page *head;
        Page *tail;
        unordered_map<int,Page*> pageMap;
    private :
        void moveNodeToFront (Page *pNode);
        void insertNode(Page *pNode);
        //Underlying data structure and variables
        int currentCapacity;
        int idx;

};


LRUCache :: LRUCache (int capacity) :
    currentCapacity (capacity)
    ,idx (0)
    ,head(NULL)
    ,tail(NULL)
{
    pageMap.clear();

}

int LRUCache :: get (int key) {
    if (pageMap.find (key) != pageMap.end() ) {
        Page *pNode = pageMap[key];
        int val = pNode->value;
        return val; 
    } else {
        return -1;
    }
}

void LRUCache::insertNode(Page *pNode) {
    if (head == NULL) {
        head = pNode;
        tail = head;
    } else {
        pNode->next = head;
        head = pNode;
        if (idx >= currentCapacity) {
            pageMap.erase(tail->key);
            //remove the last node
            tail = tail->prev;
            tail->next = NULL;
            idx--;
        } 
    }
    pageMap[pNode->key] = pNode;
    idx++;
}

//1->2->3->4
void LRUCache::moveNodeToFront (Page *pNode) {
    if (head == pNode) {
        return;
    }
    if (pNode == tail) {
       Page *tmpNode = pNode; 
       pNode->prev->next = NULL;
       tmpNode->prev = NULL;
       tmpNode->next = head;
       head = tmpNode;
    } else {
        //update next and prev pointers
        pNode->prev->next = pNode->next;
        pNode->next->prev = pNode->prev;
        head->next = pNode;
        pNode = head;
    }
}

void LRUCache :: set (int key,int value) {
    Page *pNode = new Page(key,value);

    //first check wheather exists in PageMap
    if (pageMap.find (key) != pageMap.end() ) {
        Page *tmpNode = pageMap[key];
        moveNodeToFront(tmpNode);
    } else {
        insertNode(pNode);
    }
}

int main () {

}
