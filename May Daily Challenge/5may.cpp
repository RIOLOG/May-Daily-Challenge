// Implement Stack using Queues
class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q;
    void push(int x) 
    {
        
        q.push(x);
        int size = q.size();
        while (size--)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() 
    {
        int res = q.front();
        q.pop();
        return res;
        
    }
    
    int top() 
    {
        return q.();
    }
    
    bool empty() 
    {
        return (q.empty());
    }
};
