#include<iostream>
using namespace std;
class Time{
  int m1,m2,h1,h2,k,l;
  public:
      void input(){
        cout<<"Enter the 1st time (hour part):"<<endl;
        cin>>h1;
        cout<<"Enter the 1st time (minute part):"<<endl;
        cin>>m1;
        cout<<"Enter the 2nd time (hour part):"<<endl;
        cin>>h2;
        cout<<"Enter the 2nd time (minute part):"<<endl;
        cin>>m2;
 }

        void display(){
           k=h1+h2;
           l=m1+m2;
           while(l>=60){
            l=l-60;
            k++;
           }     
           cout<<"Adition of two time is "<<k<<"hour"<<l<<"minute"<<endl;
        }
};
int main(){
    Time t2;
    t2.input();
    t2.display();

    return 0;
}