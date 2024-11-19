#include<iostream>
using namespace std;

class MHP{
 protected:
 string title;
 float rate;
 public:

 MHP(string title , float rate){
    this -> title = title;
    this -> rate = rate;
 }
    void display(){
    cout << "inside base class" << endl;
 }
};

class wholesale : public MHP{
    protected:
    int unit ;
    public:
wholesale(string title , float rate , int unit) : MHP( title ,rate){
    this -> unit = unit;
}

void display (){
    cout << "title of item " << title << endl;
    cout << "rate of item  " << rate << endl;
    cout << " unit of item  " << unit << endl;
}

};

class retail : public MHP{
    protected:
    string name;
    public:
    retail(string title , float rate , string name): MHP(title,rate){
        this -> name = name;
    }

    void display(){
    cout << "title of item  " << title << endl;
    cout << "rate of item  " << rate << endl;
    cout << "customer name  " << name << endl;
}
    
};
int main(){

    retail r1( "pencil", 5 , "ujjwal");
    wholesale w1("notebook" , 50.86 , 60);

    // r1.display();
    // w1.display();

    MHP*  p[2];
    p[0] =  &r1;
    p[1] = &w1;
 cout << endl << endl;
    p[0] -> display();
    p[1] -> display() ;
    




}






