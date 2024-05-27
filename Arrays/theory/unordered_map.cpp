#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int> table; // key--> roll_no.,  value--> desk no.

    // insertion
    table[1]=50; // table map ki roll   1 par, 50 desk no. assign kr diya

    table[2]=51;
    table[3]=52;
    
    table[2]=53; // reassign 
    

    // we have to iterate over the map
   
    unordered_map<int,int>::iterator it;
    // for(it=table.begin();it!=table.end();it++){
    //     int key=it->first;
    //     int value=it->second;
    //     cout<<key<<" "<<value<<endl;
    // }
    // cout<<endl;
    // cout<<"anotherway to iterate --> for each loo"<<endl;
    for(auto it:table){
        cout<<it.first<<" "<<it.second<<endl; 
    }    

    //find  table mei find bht jaldi hota hai

    if(table.find(2)!=table.end()){ // find return iterator if found else return table.end terator
        cout<<"found"<<endl;
        cout<<table[2]<<endl;

    }else{
        cout<<"not found"<<endl;
    }

    // deletion using key itself 
    table.erase(2);
    for(auto it:table){
        cout<<it.first<<" "<<it.second<<endl; 
    }   
    return 0;
}