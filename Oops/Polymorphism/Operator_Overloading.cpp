#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(){

    };
    Complex(int real, int img){
        this->real=real;
        this->img=img;
    }
    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
    Complex operator +(Complex &C){
        Complex ans;
        ans.real=real+C.real;
        ans.img=img+C.img;
        return ans;
    }
};
int main(){
    Complex C1(3,2);
    Complex C2(4,6);
    C2.display();
    Complex C3=C1+C2;
    C3.display();
    return 0;
}