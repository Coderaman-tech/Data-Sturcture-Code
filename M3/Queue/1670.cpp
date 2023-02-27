class FrontMiddleBackQueue {
public:
deque<int>dq;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        
        dq.push_front(val);
    }
    
    void pushMiddle(int val) {
        int n=dq.size();
       n/=2;
       dq.insert(dq.begin()+n,val);
    }
    
    void pushBack(int val) {
        dq.push_back(val);
    }
    
    int popFront() {
        if(dq.empty())
        return -1;
        int temp=dq.front();
        dq.pop_front();
         return temp;
    }
    
    int popMiddle() {
        int temp=-1;
        if(dq.empty())
        return -1;
        int n=dq.size();
        if(n%2==0){
            n/=2;
            deque<int>::iterator it;
              it=dq.begin()+n-1;
            temp=*it;
            dq.erase(dq.begin()+n-1);
        }
        else{
            n/=2;
            deque<int>::iterator it;
              it=dq.begin()+n;
              temp=*it;
            dq.erase(dq.begin()+n);
        }
        return temp;
    }
    
    int popBack() {
        if(dq.empty())
        return -1;
        int temp=dq.back();
        dq.pop_back();
         return temp;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */
