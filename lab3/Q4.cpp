#include<iostream>
using namespace std;
int main(){
     int n,k;
     int flag=0;
    
    cout<<"Enter how many element you want to enter:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elments:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the number which you want:"<<endl;
    cin>>k;
    for(int j=0;j<n;j++){
        if(k==arr[j]){
            cout<<"The element present at position "<<j<<endl;
            flag=1;
        }
    }
    if(flag==0){
        cout<<"the element is not found"<<endl;
    }
    return 0;
}