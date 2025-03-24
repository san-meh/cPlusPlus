class LRUCache : public Cache{
    
    void push_front(int k, int v){
        Node* new_node = new Node(nullptr, head, k, v);
        
        if( new_node != nullptr ){
            if(head == nullptr)
                tail = new_node;
            mp[k] = head = new_node;
        }
    }
    
    void remove(Node* cur){
        Node* prev = cur->prev;
        Node* next = cur->next;
        
        if( prev != nullptr )
            prev->next = next;
        
        if( next != nullptr )
            next->prev = prev;
        
        delete cur;
        cur = nullptr;
    }
public:
    LRUCache(int cap){
        cp = cap;
        head = tail = nullptr;
    }
    
    // when the map is destroied, the pointers are also destroied?
    
    void set(int k, int v){
        std::map<int,Node*>::iterator it;
        it = mp.find(k);
        
        if ( it == mp.end() ) {
            if( mp.size() == cp ){
               int k = tail->key;
               Node* t_prev = tail->prev;
               remove(tail);
               tail = t_prev;
               mp.erase(k);
            }
            
            push_front(k,v);
            mp[k] = head;
        } 
        else {
            Node* n = (*it).second;
            n->value = v;
            return;
        }
    }
    
    int get(int k){
        std::map<int,Node*>::iterator it;
        it = mp.find(k);
        
        if ( it == mp.end() ) {
            return -1;
        } 
        else {
            Node* n = (*it).second;
            int k = n->key;
            int v = n->value;
            remove(n);
            push_front(k, v);
            return v;
        }
    }
};