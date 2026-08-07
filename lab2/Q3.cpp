#include<iostream>
using namespace std;

class Temperature {
private:
    float c,f;
public:
    void input(){
        f=(9/5)*c+32;
    }
    void display(){
        cout<<"Enter the temp. in celsius"<<endl;
        cin>>c;
       
          cout<<"the given celsius temp. is:"<<c<<endl;
          cout<<"In fahrenheit:"<<f<<endl;
          
    }
    
    };
    int main(){
        float c;
        Temperature t;
        t.input();
        t.display();
        return 0;
    }