#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    int bookid;
    string booktitle;
    string author;
    float price;
public:
     void input(){
       cout<<"Enter the book id:"<<endl;
       cin>>bookid;
       cin.ignore();
       cout<<"Enter the book name:"<<endl;
       getline(cin,booktitle);
       cin.ignore();
       cout<<"Enter the author name:"<<endl;
       getline(cin,author);
       cout<<"Enter the price of the book:"<<endl;
       cin>>price;
     }
     void display(){
        cout<<"-----BOOK DETAILS---------"<<endl;
        cout<<"Book ID:"<<bookid<<endl;
        cout<<"Book Name:"<<booktitle<<endl;
        cout<<"Author Name:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
     }
    
    
    };
    int main(){
        Book *b=new Book;
        b->input();
        b->display();
        delete b;
        b=nullptr;
        return 0;
    }
