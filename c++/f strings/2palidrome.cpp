//question is to check wether the string is a palidrome or not
//palidrome means a string which either read from start or from end it has  same in perensiastion 
// as well as same in look...

// we also add a function to convert all upper to lower char so that it treat upper as well as lower
// character as same...


#include <iostream>
using namespace std;

int get_length(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){             // function to get the length 
     count++;
    }
    return count;
}

void uppertolower (char name[],int len){
  int i=0;                                   // function to convert the whole string into lower case
    while(i<len) {
    if (name[i] >='a' && name[i] <='z'){
      i++;
    }

    else { name[i]= name[i]-'A'+'a';
            i++;
}
}}


bool check_palidrome(char name[],int len){

    int s=0;
    int e=len-1;
    while (s<e){                       // boolen function to check string palidrome or not...
    if (name[s]!=name[e]){
        return 0;
        break;
    }
    else{
        s++;
        e--;
    }
    }
    return 1 ;
}


int main()
{
    char my_string[20];
    cout << "enter your string " << endl;        // #1 taking input of string 
    cin >> my_string ;
    int len=get_length(my_string);          // finding total length of string 

    uppertolower(my_string,len);          // convert whole string into lower case
    cout << check_palidrome(my_string,len) << endl;   // find palidrome or not...
    
  
    return 0;
}