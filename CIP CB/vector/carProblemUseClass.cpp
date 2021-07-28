#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    string name;
    int x,y;
    Car(){}
    Car(string s,int x,int y){
        this->name=s;
        this->x=x;
        this->y=y;
    }
    int dist(){
        return x*x+y*y;
    }
};
bool compare(Car c1,Car c2){
    int d1=c1.dist();
    int d2=c2.dist();
    if(d1==d2) return c1.name<c2.name;
    return d1<d2;
}
int main(){
    Car c1("AUdi",3,2);
    Car c2("Safari",0,1);
    Car c3("Suzuki",1,0);
    Car c4("Maruti",5,6);
    vector<Car> v;
    v.push_back(c1);
    v.push_back(c2);
    v.push_back(c3);
    v.push_back(c4);
    sort(v.begin(),v.end(),compare);
    for(auto it:v){
        cout<<"car name:"<<it.name<<",position:"<<it.x<<","<<it.y<<" and located at:"<<it.dist()<<endl;
    }
    return 0;
}


