#include<iostream>
using namespace std;

class Human{
    public:
    int age;
    int height;
    

};

class male : public Human{
  public :
   int weight;
   int color;
};
int main(){

male a;
cout << a.height ;
}