#include<iostream>
using namespace std;
int main(){
    int n,o,e;
    o=0;e=0;
    cout<<"Enter how many element you want to enter:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elments:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
           e++;
        }
        else o++;
    }
    cout<<"Out of "<<n<<" number "<<e<<" even and "<<o<<" odd"<<endl;
    delete[]arr;
    arr=nullptr;
    return 0;
}