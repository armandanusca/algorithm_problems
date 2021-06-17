#include <iostream>
#include <ctime>
#include <assert.h>

using namespace std;

class stack{
    int size;
    struct node{
        node *prev;
        int val;
    }*topnode;
public:
    stack(){
        this->topnode=NULL;
    }
    void push(int x){
        node *temp=new node();
        temp->val=x;
        temp->prev=this->topnode;
        this->topnode=temp;
    }
    void pop(){
        if(this->topnode) {
            node *temp = this->topnode;
            this->topnode = this->topnode->prev;
            delete temp;
        }
    }
    int top(){
        if(this->topnode)
        {
            return topnode->val;
        }
        return 0;
    }
    bool isEmpty(){
        return !(this->topnode);
    }
};

class queue{
    stack ins,outs;

    void reverse(){
        if(this->outs.isEmpty()) {
            while(!this->ins.isEmpty()) {
                this->outs.push(this->ins.top());
                this->ins.pop();
            }
        }

    }

public:
    void push(int x){
        this->ins.push(x);
    }

    int front(){
        this->reverse();
        return this->outs.top();
    }

    void pop(){
        this->reverse();
        this->outs.pop();
    }

    bool isEmpty(){
        return (this->ins.isEmpty() && this->outs.isEmpty());
    }
};

void teststack(){
    stack s;
    int n=100;
    assert(s.isEmpty());
    assert(s.top()==0);
    for(int i=0;i<n;i++)
    {
        s.push(i);
        assert(s.top()==i);
    }
    assert(!s.isEmpty());
    for(int i=n-1;i>=0;i--)
    {
        assert(s.top()==i);
        s.pop();
    }
    assert(s.isEmpty());
}

void testqueue(){
    queue q;
    int n=100;
    assert(q.isEmpty());
    assert(q.front()==0);
    for(int i=0;i<n;i++)
    {
        q.push(i);
        assert(q.front()==0);
    }
    assert(!q.isEmpty());
    for(int i=0;i<n;i++)
    {
        assert(q.front()==i);
        q.pop();
    }
    assert(q.isEmpty());
}

int main() {
    teststack();
    testqueue();
    return 0;
}