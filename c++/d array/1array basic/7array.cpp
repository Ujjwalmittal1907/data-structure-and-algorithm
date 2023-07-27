// just simple finding the two element having a specific sum


#include<iostream>
using namespace std;
int main (){

int firstarr[5]={2,5,10,-3,9};
for(int i=0 ;i<5 ;i++){
    for (int j=0;j<5;j++){                                    
        if (firstarr[i]+firstarr[j]==7){                       // condition when we fullfilled our condiition
        cout << firstarr[i] << " " << firstarr[j] << endl ;
        }
    }
}

cout<< "all is set";
return 0;
}