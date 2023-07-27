
//  first we will see our  REFERANCE variable  , a memory box can be called with various name just
/*just same as a child who is called with multiple names at his home and school 
we can use "&" operator for it for example &j=i  now i is pointing towardds that value that is 
in it and j too pointing to the the value that is in the memory box of i, means i and j both are pointing 
towards same memory box.. (😉 simply same value different name 💕)*/

/*   why ?? 😢 we need to call it from different name */


/*  see in previous we have pass the variable by value 
for example 

void update(ans){
  ans++;
}
int main(){
int i=8;
cout << "before printing" << i <<  endl;         // 8
 cout << update(i);                    // 9
 after << "after update " << i << endl;       // 8
}

here value is just copied in our function 
*/

/*
this is a concept of pass by reference as we can see the value is not copy towards 
other but it is pointing hence value is updated  not copied

#include <iostream>
using namespace std;	
int main()
{
    int i=5;
    int &j=i;
    cout << j << endl;            //5
    cout << i << endl;           //5
    j++;
    cout << i << endl;           //6
    i++;
    cout << j << endl;           //7
    return 0;
}*/