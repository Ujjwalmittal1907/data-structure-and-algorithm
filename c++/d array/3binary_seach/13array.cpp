#include<iostream>
using namespace std;
                        // to find the peak point in mountain array problem
int getpeak( int arr[] ,int size){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;                       
while(s<e){                      //  pehle agar arr[mid+1]bada hai matlab pahad per chadana hai start ko 
    if(arr[mid]<arr[mid+1]){     // mid ke aage bhejo
        s=mid+1;
    }
    else                        // agar mid pahad ke niche utarne wali line pe hai to end ko muper bhejo
    {e=mid;}
    
    mid=s+(e-s)/2;
}
cout << s;
}
 
int main()
{
    int aditya[13]={3,5,6,7,8,9,15,18,20,16,15,10,1};
    getpeak(aditya ,13);
    cout << endl;
    cout << "everything is fine";
    return 0;
}