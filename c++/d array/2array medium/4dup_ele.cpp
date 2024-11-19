// problem statment :- there is a set of natural number from 1 to n where one number is twice
// we have to find that number

/* first ordinary method :-  we put the concept of linear search take one first element and compare
with all the other element as condition got satisfied break the loop*/


/*#include <iostream>
using namespace std;	
int dup_ele(int arr[],int size){
 int ans=0;
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
       
     if (arr[i]==arr[j]){
            ans=arr[i];
            break;
        }

        else{ continue;}
    }
    if(ans!=0){
        return ans;
        break;
    }
}

}
int main()
{
    int arr[6]={1,2,5,4,5,3};  // 5
    cout << dup_ele(arr,6);
    return 0;
}*/

/* alternate method is using XOR first we xor all the elements of array 
now duplicate element hai vo vanish ho jayega and baaki sabhi unique element bachenge 
AAB size-1 natural number tak ka  xor nmultiply karenge   aab hoga kya duplicate element 
ke siwaye sare element vanish ho jayega */

#include <iostream>
using namespace std;

int find_dup(int arr[],int size){
    int ans=0;
    for (int i=0;i<size;i++){
     ans=ans^arr[i];
     cout << ans << "  ";
    }

    for (int j=1;j<size;j++){
        ans=ans^j;
        cout << " stage 2" << ans << "  ";
    }
    return ans;
}
int main()
{
     int first[5]={1,2,3,3,4};
     cout << find_dup(first,5) << endl;  //3

     int second[2]={1,1};       //1
     cout << find_dup(second,2) << endl;
    return 0;
}