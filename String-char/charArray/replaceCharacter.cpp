#include<bits/stdc++.h>
using namespace std;
void replaceCharacter(char arr[],char c1,char c2,int size){
  for(int i=0;i<size;i++){
    if(arr[i]==c1){
        arr[i]=c2;
    }
  }
  return ;
}
void uppertoLower(char arr[]){
    int len=strlen(arr);
    for(int i=0;i<len;i++){
       char ch=arr[i];
       if(ch>='A' && ch<='Z'){
            ch=ch-'A'+'a';
       }
         arr[i]=ch;
    }
    return ;
}
int main(){
    char arr[100];
    cin>>arr;
    // replaceCharacter(arr,'@',' ',100);
    uppertoLower(arr);
    cout<<arr<<endl;
    return 0;
}