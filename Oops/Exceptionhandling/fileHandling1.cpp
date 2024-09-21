#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(){
    
    // to create or open
    // ofstream  fout;
    // fout.open("hello.txt"); // if not present it will create the file
    // fout<<"Hello India"; // to write in the file
    // fout.close();// to release the resources


    // // to open the file

    // ifstream fin;
    // fin.open("hello.txt");
    // char c;
    // // fin>>c; // it doesn't consider space,tab as a character
    // c=fin.get();
    // while(!fin.eof()){
    //     cout<<c;
    //     // fin>>c;
    //     c=fin.get();
    // }

    vector<int> arr(5);
    cout<<"Enter the input: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    ofstream out;
    out.open("answer.txt");
    out<<"Original Data\n";
    for(int i=0;i<5;i++){
        out<<arr[i]<<" ";
    }
    sort(arr.begin(),arr.end());
    out<<"\nSorted Data\n";
    for(int i=0;i<5;i++){
        out<<arr[i]<<" ";
    }
    out.close();


    ofstream fout;
    fout.open("hello.txt");
    fout<<"Hello India";
    fout<<"Hello Rohit";
    fout<<"Hello Bhai";
    fout.close();

    ifstream fin;
    fin.open("hello.txt");
    string line;
    while (getline(fin,line))
    {   
        cout<<line<<endl;
    }
    fin.close();
    

    return 0;

    
}