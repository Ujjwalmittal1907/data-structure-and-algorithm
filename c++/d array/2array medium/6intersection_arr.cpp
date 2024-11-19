/*We have given two array which are alredy sorted in increasing order  and m and n size we 
have to find the intersection
between both the arrays*/


// in method 1 our logic is correct but not optimise so we have to think more optimised solution...
// as here the time complexity of fuction is n^2 

//  #include <iostream>
// using namespace std;
// void find_dup(int arr1[],int s1,int arr2[],int s2){
// for (int i=0;i<s1;i++){
//     for (int j=0;j<s2;j++){
//         if (arr1[i]<arr2[j]){break;}
//        else if (arr1[i]==arr2[j]){
//             cout << arr1[i] << " ";
//             break;
//         }
//     }
// }
// }	
// int main()
// {
//     int arr1[7]={2,5,6,8,9,10,12};
//     int arr2[8]={2,4,6,7,8,9,12,13};

//     find_dup(arr1,7,arr2,8);
// cout << "Next case" << endl;
//     int arr3[3]={1,2,3};
//     int arr4[2]={4,5};

//      find_dup(arr3,3,arr4,2);
//     return 0;
// }

// method 2 is we will solve for time complexity O(n)

#include <iostream>
using namespace std;	


void inter_arr(int arr1[] , int n1 , int arr2[] , int n2){
    int i=0;
    int j=0;

while ( i<n1 && j<n2){
if (arr1[i] == arr2[j]){
cout << arr1[i] << " ";
i++;
j++;
}
else if(arr1[i]<arr2[j]){
    i++;
}

else{
    j++;
}
}
}

int main()
{
    int arr1[8]={2,5,6,8,9,10,11,12};
   int arr2[9]={2,4,6,7,8,9,11,12,13};

   inter_arr(arr1, 8, arr2,9);
    
    return 0;
}

