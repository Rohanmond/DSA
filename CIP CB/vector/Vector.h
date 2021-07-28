template<typename T>
class Vector{
    private:
    int cs=0;
    int ms=1;
    T* arr=new T[ms];
    public:
    void pushback(T item){
        if(cs==ms){
            T *oldArr=arr;
            arr=new T[ms*2];
            ms=ms*2;
            for(int i=0;i<cs;i++){
                arr[i]=oldArr[i];
            }
            delete [] oldArr;
        }
        arr[cs]=item;
        cs++;
    }
    void popBack(){
        if(cs>0) cs--;
        
    }
    int capacity(){
        return ms;
    }
    T operator[](int index){
        return arr[index];
    }
    int size(){
        return cs;
    }
};