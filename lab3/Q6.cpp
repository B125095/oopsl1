#include<iostream>
#include<string>
using namespace std;

class Product {
private:
    int productid;
    string productname;
    int  Quality;
    float price;
public:
     void input(){
       cout<<"Enter the product id:"<<endl;
       cin>>productid;
       cin.ignore();
       cout<<"Enter the product name:"<<endl;
       getline(cin,productname);
       cout<<"Enter the product quality(rate 1 to 5):"<<endl;
       cin>>Quality;
       cout<<"Enter the price of the product:"<<endl;
       cin>>price;
     }
     void display(){
        cout<<"-----PRODUCT DETAILS---------"<<endl;
        cout<<"Product ID:"<<productid<<endl;
        cout<<"Product Name:"<<productname<<endl;
        if(Quality>2){
        cout<<"Quality:Good("<<Quality<<")"<<endl;}
        else cout<<"Quality:Bad("<<Quality<<")"<<endl;
        cout<<"Price:"<<price<<endl;
     }
    
    
    };
    int main(){
        Product *p=new Product;
        p->input();
        p->display();
        delete p;
        p=nullptr;
        return 0;
    }
