// for finding the unique element in an array when single one element is
// ones while all other element are repeted twice


// dry run
// isme hamne tin conddition ka dhayan rakha hai pehli jab 
//first loop mai i relative hame uska dusra element mil jaye tab kya kerna
// second jab booth loop ke i and j coincide kare tab kya kerna
// third jab hame ek element ki comparision mai linear search mai dusra element naa mile; 

         // one  normal method
/*#include <iostream>
using namespace std;	

int uni_ele(int arr[],int size){

 int unique;
for(int i=0;i<size;i++){
     int ans=0;
    for(int j=0;j<size;j++){
        if (i==j){continue;}
     else if(arr[i]==arr[j]){
        ans=1;
        break;
     }
    }
     if (ans==0){ 
        unique=arr[i];
     break;}
}
return unique;
}
int main()
{
    int first[7]={2,5,3,10,2,10,5}; 
  cout <<  uni_ele(first,7) << endl;   //3 //

  int second[1]={6};
  cout <<  uni_ele(second,1) << endl;              // 6
  
    int fir[5]={2,5,2,10,5}; 
  cout <<  uni_ele(fir,5) << endl;   // 10

    return 0;
}*/




   // method two 
   // using XOR FUNCTION i.e 7^7=0

#include <iostream>
using namespace std;	
int main()                                // see the simplicity of code 
                                          // just compare method 1 and method2
{
   int arr[7]={1,2,3,4,5,3};
   int ans=3;
   for(int i=0;i<7;i++){
      ans=ans^arr[i];
      cout << ans << " ";
   }
    for(int i = 1; i< 7;i++){
      ans = ans^i;
    }
   cout << "ans " <<  ans;
   return 0;
}