#include<bits/stdc++.h>
using namespace std;
class abc{
    // mutable int x;
    int x;
    int *y;
    public:
    abc(){
        x=0;
        y=new int(0);
    }
    // old style ctor
    // abc(int x,int y){
    //     this->x=x;
    //     this->y=new int(y);
    // }

    // initialization list
    abc(int _x, int _y):x(_x),y(new int(_y)){}

    void print(const abc&a){
        cout<<a.getx()<<endl;
        cout<<a.gety()<<endl;
    }
    int getx()const{
        // x=10; // mutable keyword allows to change the value of x
        // x=10; // error
        return x;
    }
    void setx(int x){
        this->x=x;
    }
    int gety() const {
        return *y;
    }
    void sety(int y){
        *this->y=y;
    }
};

int main(){
    abc a(3,4);
    a.print(a);
    // abc a;
    // cout<<a.getx()<<endl;
    // cout<<a.gety()<<endl;
    // a.setx(10);
    // a.sety(20);

    // cout<<a.getx()<<endl;
    // cout<<a.gety()<<endl;
}
int main2(){
    // const int x=10;
    // cout<<x<<endl;

    const int *a=new int(2); // data constant but pointer is not constant
    // int const*a=new int(2); // data constant but pointer is not constant
    
    // *a=10;
    // cout<<*a<<endl;
    // int b=5;
    // a=&b;
    // cout<<*a<<endl;

// data is not constant but pointer is constant
int *const arr=new int(2);
*arr=20;
cout<<*arr<<endl;
int b=50;
// arr=&b; // error
cout<<*arr<<endl;

// both data and pointer are constant

const int *const arr1=new int(2);
// *arr1=20; // error
// arr1=&b; // error
cout<<*arr1<<endl;



    return 0;
}