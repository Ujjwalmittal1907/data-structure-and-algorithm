#include<iostream>
using namespace std;

class student {
    protected:
    int roll_no;
    public:
    void set_number(int a){
        roll_no = a;
    }

    void print_number(void){
        cout << "your roll no." << roll_no << endl;
    }
};

class test : virtual public student{
    protected:
    float math , physics;
    public:
    void set_marks( float m1 , float m2){
        math = m1;
        physics = m2;
    }

    void print_marks(void){
        cout << "physics marks " << physics << endl;
        cout << "math marks" << math << endl;
    }
};

class sports : virtual public student{
    protected :
    float score;
    public :
    void set_score(float sc){
        score = sc;
    }

    void print_score(void){
        cout << "score" << score;
    }
};

class result : public test , public sports{
 private :
 float result;
 public:
 void display(void){
    result = math + physics +score;
    cout << "total" << result << endl;
    print_number();
     print_score();
     print_marks();

 }
};
int main(){
 result ujjwal;
 ujjwal.set_number(45);
 ujjwal.set_marks(90,95);
 ujjwal.set_score(20);
 ujjwal.display();


}