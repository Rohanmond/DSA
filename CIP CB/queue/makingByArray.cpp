#include<bits/stdc++.h>
using namespace std;
class Queue{
    int cs,f,rear,ms;
    int* arr;
    public:
    
    Queue(int d=5){
        arr=new int[d];
        ms=d;
        cs=0;
        f=0;
        rear=ms-1;
    }
    int maxSize(){
        return ms;
    }
    bool isFull(){
        return cs==ms;
    }
    void push(int d){
        if(!isFull()){
            rear=(rear+1)%ms;
            arr[rear]=d;
            cs++;
        }
    }
    bool isEmpty(){
        return cs==0;
    }
    void pop(){
        if(isEmpty()) return;
        f=(f+1)%ms;
        cs--;
    }
    int front(){
        return arr[f];
    }
    ~Queue(){
        if(arr!=nullptr){
            delete [] arr;
            arr=nullptr;
        }
    }
};
int main(){
    Queue q;
    q.push(9);
    q.push(8);
    q.push(6);
    q.push(4);
    q.push(3);
    q.push(2);
    q.pop();
    q.pop();
    q.push(1);
    while (!q.isEmpty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    
    return 0;
}