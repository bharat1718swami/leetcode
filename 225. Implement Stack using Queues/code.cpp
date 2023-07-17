class MyStack {
public:

    int arr[101];
    int size;
    int index;    
 

    MyStack() {
        size=0;
        index=0;   
    }
    
    void push(int x) {
        arr[index++]=x;
        size++;  
    }
    
    int pop() {
        size--;
        index--;
        return arr[index];
        
    }
    
    int top() {
        return arr[index-1];
        
    }
    
    bool empty() {

        return size==0; 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
