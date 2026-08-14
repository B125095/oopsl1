#include<iostream>
using namespace std;
int main(){
    int *arr=new int[5];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int j=4;j>=0;j--){
        cout<<","<<arr[j];
    }
    delete[]arr;
    arr=nullptr;
    return 0;
}