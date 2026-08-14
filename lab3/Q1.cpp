#include<iostream>
using namespace std;
int main(){
    int c,d;
    cout<<"Enter the 1st element:"<<endl;
    cin>>c;
    cout<<"Enter the 2nd element:"<<endl;
    cin>>d;
    int *a=new int(c);
    int *b=new int(d);

    cout<<"A= "<<*a<<endl<<"B= "<<*b<<endl<<"sum= "<<*a+*b<<endl<<" multiplication = "<<*a* *b<<endl<<"substration= "<<*a-*b<<endl;
    return 0;
}