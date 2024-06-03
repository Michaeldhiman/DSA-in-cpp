#include<bits/stdc++.h>

using namespace std;
void reverse(char arr[]){
    int len=strlen(arr);
    int i=0;
    int j=len-1;
    while(i<j){
        char temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return ;
}
void palindrome(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            cout<<"Not a palindrome"<<endl;
            return ;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
}
int main(){
    char arr[100];
    cin>>arr;
    reverse(arr);
    palindrome(arr);
    cout<<arr<<endl;
    return 0;
}