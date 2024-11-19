#include <bits/stdc++.h> 
#include<string>
int gcd(int a,  int b)
{

    if (b==0)
        return a;

        return gcd(b,a%b);
}

int modul(string b, int a){
    
    int x=0;
    for(int i=0; i<b.length();i++)
    {
        x += b[i]-'0' ;
        x= x%a;
        x*=10;
    }
    return x/10;
}
int advancedGcd(int a, string b)
{
	// Write your code here
	int x= modul(b,a);
    return gcd(a,x);
}
