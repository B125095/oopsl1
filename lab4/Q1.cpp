#include<iostream>
using namespace std;
class Weather{
    private:
     string city;
     float temp;
     string condition;
    public:
     Weather(string c,float t,string con){
        city=c;
        temp=t;
        condition=con;
     }
     friend void report(Weather w);

};
void report(Weather w){
    cout<<"City:"<<w.city<<endl;
    cout<<"Temperature:"<<w.temp<<"c"<<endl;
    cout<<"Condition:"<<w.condition<<endl;
    if(w.temp>35)
    cout<<"Category : Very Hot"<<endl;
    else if(w.temp>=20)
    cout<<"Category : Pleasant"<<endl;
    else cout<<"Category: cool"<<endl;

}
int main (){
    Weather w("Bhubaneswar",32,"Sunny");
    report(w);
    return 0;
}