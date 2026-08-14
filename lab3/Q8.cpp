#include<iostream>
using namespace std;
int main(){
    int n,sum,m,n;
    sum=0;
    cout<<"Enter how many element you want to enter:"<<endl;
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter the elments:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    m=arr[0];
    n=arr[0];
    for(int j=0;j<n;j++){
        cout<<","<<arr[j];
    sum+=arr[j];
    if(m<arr[j]){
        m=arr[j];
    }
    if(n>arr[j]){
        n=arr[j];
    }
    }
    cout<<"The sum of all elements is:"<<sum<<endl;
    cout<<"The largest element betwen the element is:"<<m<<endl;
    cout<<"The smalest element betwen the element is :"<<n<<endl;
    delete[]arr;
    arr=nullptr;
    return 0;
}