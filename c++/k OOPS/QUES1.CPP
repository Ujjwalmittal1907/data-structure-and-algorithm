#include<iostream>
using namespace std;

class university{
    protected :
    int id;
    int age;
    string name;
};

class faculty : public university{
    protected:
    int salary;
    string teachcourse;

    public:
    void inputinfo();
    void showinfo();
};

class student : public university{
    protected:
    int semester;
    float cgpa;
    string enrollcourse;

    public:
    void inputinfo ();
    void showinfo();
};

void faculty ::  inputinfo(){
        cout << " faculty name\n" ; cin >> this->name; cout << endl;
        cout << " faculty age\n" ; cin >> this ->age; cout << endl;
        cout << " faculty id\n" ; cin >>this -> id; cout << endl;
        cout << " faculty salary\n" ; cin >>this -> salary; cout << endl;
        cout << " faculty teachcourse\n" ; cin >>this -> teachcourse; cout << endl;
    }

void faculty :: showinfo(){
        cout << "name" << this -> name << "\n";
        cout << "age" << this -> age  << "\n";
        cout << "id" << this -> id  << "\n";
        cout << "salary" << this -> salary  << "\n";
        cout << "teachcourse" << this -> teachcourse << "\n";

            }


void student :: inputinfo(){
        cout << " student name\n" ; cin >> this->name; cout << endl;
        cout << " student age\n" ; cin >> this ->age; cout << endl;
        cout << " student id\n" ; cin >>this -> id; cout << endl;
        cout << " student cgpa\n" ; cin >>this -> cgpa; cout << endl;
        cout << " student semester\n" ; cin >>this -> semester; cout << endl;
        cout << " student enrrollcourse\n" ; cin >>this -> enrollcourse; cout << endl;
    }
void student ::showinfo(){
        cout << "name" << student.name << "\n";
        cout << "age" << this -> age  << "\n";
        cout << "id" << this -> id  << "\n";
        cout << "semester" << this -> semester  << "\n";
        cout << "enrollcourse" << this -> enrollcourse<< "\n";}


class teaching_assistant :  public faculty , public student{

    public :
    // constructor
    teaching_assistant(faculty &f , student &s){
        cout << "ok";
    }
void showinfo(){
    faculty::showinfo();
    cout << endl;
    cout << "student enrolled" << endl;
    student::showinfo();
}
};


int main(){
faculty f1;
f1.inputinfo();
f1.showinfo();

student s1;
s1.inputinfo();
s1.showinfo();
teaching_assistant t1(f1,s1);
t1.showinfo();


}