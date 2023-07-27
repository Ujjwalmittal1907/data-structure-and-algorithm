/// a function to output number of character as well as reverse string  of your name 

#include <iostream>
using namespace std;

//function to get the length of the string 
int get_length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
     count++;
    }
    return count;
}

// making a function to reverse the string 
void reverse_string(char name[],int length){
   
int s=0;                             // '\0' act as a terminator in strings
int e=length-1;
while(s<e){
    swap(name[s],name[e]);
    s++;                                // the only thing we need in mid that whenever we give space or enter
    e--;                                // in our string it will automatically create null char there and
}                                  // don't read futher character so it is necessary to not use space insteas
                                // use underscore. as for example in "ujjwal mittal" it only read 6 character
}                               // but in "ujjwal_mittal"it read 13 character
// function to print the string 
void print_string(char name[],int length){
    for(int i=0;i<length;i++){
        cout << name[i];
    }
}
int main()
{
    char first_string[30];
    cout << "enter your string" << endl;
    cin >> first_string;
    int a = get_length(first_string);
    cout << "number of character in your name is " << a << endl;

    // for reversing the string 
    reverse_string(first_string,a);
    cout << "reverse of your string is  " ;
    print_string(first_string,a);
    return 0;
}