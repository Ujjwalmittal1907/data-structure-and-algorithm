// this program to find the maximum occurance of a character in a string 

#include <iostream>
using namespace std;	

char maxoccofchar(string s){

    int arr[26]={0};
    
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        if (ch>='a' && ch<='z'){
            number= ch-'a';}

        else {
            number= ch-'A';
        }
        arr[number]++;
    }
      int ans=0;
      int temp=-1;
    for (int i=0;i<26;i++){
      if (temp < arr[i]){
        ans=i;
        temp=arr[i];
      }
}
char finalans= 'a'+ ans;
return finalans;

}
int main()
{
     string str1;
    cout << "enter your string" << endl;
    cin >> str1;
    cout << "your string is" << str1 << endl;

    cout << "the maximun occuraing character in string is  ";
   cout <<  maxoccofchar(str1);

    return 0;
}