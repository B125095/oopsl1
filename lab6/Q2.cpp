#include<iostream>
using namespace std;
class duration{
 int hour;
 int minute;
 public:
  duration (int h,int m){
    hour=h;
    minute=m;
  }
    void display(){
     cout<<"Hour="<<hour<<" Minute="<<minute<<endl;
    }
    duration operator +(duration a){
        duration b(0,0);
        b.hour=a.hour+hour;
        b.minute=a.minute+minute;
        b.check();
        return b;
    }
    void check(){
        if(minute>=60){
            hour=hour+minute/60;
            minute=minute%60;
        }
        if(hour>=24){
            hour=hour%24;
        }
    }

};
int main(){
 duration d1(2,40),d2(23,45);
 d1.display();
 d2.display();
 duration d3=d1+d2;
 d3.display();
    return 0;
}