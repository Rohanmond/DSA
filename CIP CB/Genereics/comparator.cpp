#include<bits/stdc++.h>
using namespace std;
template<class Iterator,class T,class compare>
Iterator search(Iterator start,Iterator end,T key,compare cmp){
    while(start!=end){
        if(cmp(*start,key)) return start;
        start++;
    }
    return end;
}
class Book{
    public:
    string s;
    int price;
    Book(){
    }
    Book(string s,int price){
        this->s=s;
        this->price=price;
    }
};
class Compare{
    public:
    bool operator()(Book a,Book b){
        return a.s==b.s;
    }
};

int main(){
    Book b1("C++",100);
    Book b2("Java",130);
    Book b3("Python",140);
    Book b4(b1);
    list<Book> l;
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    l.push_back(b4);
    Book bookToFind("C++",110);
    Compare cmp;
    list<Book>::iterator it=search(l.begin(),l.end(),bookToFind,cmp);
    if(it==l.end()){
        cout<<"Book not available"<<endl;
    }else{
        cout<<"Book is available and the price is:"<<(*it).price<<endl;
    }
    return 0;
}