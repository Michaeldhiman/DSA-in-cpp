#include<bits/stdc++.h>
using namespace std;
class abc{
    public:
    int x;
    int* y;
    abc(int x,int y){
        this->x=x;
        this->y=new int(y);
    }
    void print() const{
        printf("X:%d\n ptr Y:%p\n content of(*y):%d \n",x,y,*y);
    }
    abc(const abc &obj){
         x=obj.x;
         y=new int(*obj.y);
    }
    ~abc(){
        delete y;
    }
};
int main(){
    // abc a(1,2);
    // a.print();
    // abc b=a; // call copy constructor it creates shallow copy
    // b.print();
    // *b.y=20;
    // b.print();
    // a.print();
    abc *a=new abc(1,2);
    abc b=*a;           // normal copy constructor will give value of y -> 0
    delete a;
    b.print();
}