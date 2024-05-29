#include<bits/stdc++.h>
using namespace std;
int main(){
    // map is a key-value pair
    // creation unordered_map--> o(1) ordered_map--> o(logn)
    unordered_map<string,string> table; 

    // insertion

    table["in"]="India";
    table.insert(make_pair("us","United States"));

    pair<string,string> p;
    p.first="uk";
    p.second="United Kingdom";
    table.insert(p);
    cout<<table.size()<<endl;
    // table.enpty()
    // table.clear()
    cout<<table.at("in")<<endl;
    // update value
    table.at("in")="Bharat";
    cout<<table.at("in")<<endl;
    unordered_map<string,string>::iterator it;
    for(it=table.begin();it!=table.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    if(table.find("im")!=table.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

    // ordered map -- there are 2 diiference 
    //1. it is ordered
    //2. it is implemented  using red black tree
    // 3.time complexity is o(logn)
    // map<string,string> table1;
    // 4 .sorted in increasing order of key alpahbetically

    map<int,string> unique;
    unique.insert(make_pair(1,"love"));
    unique.insert(make_pair(2,"Ankita"));
    unique.insert(make_pair(3,"Babita"));

    map<int,string>::iterator it1;
    for(it1=unique.begin();it1!=unique.end();it1++){
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
    }
    return 0;
}
