/*We have given two array which are alredy sorted in increasing order  and m and n size we 
have to find the intersection
between both the arrays*/


// in method 1 our logic is correct but not optimise so we have to think more optimised solution...

 /*#include <iostream>
using namespace std;
void find_dup(int arr1[],int s1,int arr2[],int s2){
for (int i=0;i<s1;i++){
    for (int j=0;j<s2;j++){
        if (arr1[i]<arr2[j]){break;}
       else if (arr1[i]==arr2[j]){
            cout << arr1[i] << " ";
            break;
        }
    }
}
}	
int main()
{
    int arr1[7]={2,5,6,8,9,10,12};
    int arr2[8]={2,4,6,7,8,9,12,13};

    find_dup(arr1,7,arr2,8);
cout << "Next case" << endl;
    int arr3[3]={1,2,3};
    int arr4[2]={4,5};

     find_dup(arr3,3,arr4,2);
    return 0;
}*/
