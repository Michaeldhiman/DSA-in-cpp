#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="Maharana Pratap";
    cout<<name[0]<<endl;
    cout<<name.at(1)<<endl;
    cout<<name.front()<<endl;
    cout<<name.back()<<endl;
    cout<<name.length()<<endl;
    auto it =name.begin();
    while(it!=name.end()){
        cout<<*(it)<<"";
        it++;
    }
    cout<<endl;
    // name.clear();
    if(name.empty()){
        cout<<"String is empty"<<endl;
    }else{
        cout<<"string is not empty"<<endl;
    }
    string fname="raj";
    string lname="kumar";
    string fullname=fname+lname;
    cout<<fullname<<endl;
    cout<<name.substr(0,5); // start from 0th index and print 5 characters
    cout<<name.substr(6); // start form 6th index to end

    string word="rratap";
    int ans=name.find(word); // return the first index of the word else return -1  string::npos
    cout<<ans<<endl;

    string s1="love";
    string s2="aove";
    // cout<<s1.compare(s2)<<endl; // return 0 if equal 
    cout<<s1.compare(s2)<<endl;  // return difference of ascii value of first different character
    return 0;
}