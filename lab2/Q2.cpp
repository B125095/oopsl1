#include<iostream>
using namespace std;

class Square {
private:
    float l;
public:
    void input(){
        cout<<"Enter the length of the square:"<<endl;
        cin>>l;
    }
    void display(){
       
          cout<<"The area of the square:"<<l*l<<endl;
          cout<<"The perimeter of the square:"<<l*4<<endl;
          
    }
    
    };
    int main(){
        Square s;
        s.input();
        s.display();
        return 0;
    }
