 #include<bits/stdc++.h>
 #include <exception>
 using namespace std;
 class exception2{
    protected:
    string msg;
    public:
    exception2(string msg){
        this->msg=msg;
    }
    string what(){
        return msg;
    }

 };
 int main(){
    // int a,b;
    // cin>>a>>b;
    // if(b==0){
    //     cout<<"A is not divisible by B";
    //     return 0;
    // }

    // try{
    //     if(b==0){
    //        throw "A is not divisible by B";
    //     }
    //     int c=a/b;
    //     cout<<c<<endl;
    // }
    // catch(const char *e){
    //     cout<<"Exception :"<<e<<endl;
    // }

    try {
        vector<int> v(1000000000);  // Large vector allocation
        cout << "Memory allocation successful\n";
    }
    // we can use bad_alloc instead of exception
    catch (const exception& e) {  // Catching all exceptions derived from std::exception
        cout << "Exception occurred: " << e.what() << endl;
    }
    return 0;
 }