#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int row;
                                                      //     x2=i
int x3;                                                 //   x1/d= row
int Number=3;
int Banner=0;
cout<<"Please enter the no of lines ";
cin>> row;
for(int i=1;i<= row; i++)
{
for(int e=1;e<=row;e++)
{
cout<<" ";
}
if(i==1)
{
cout<<"2\n";
}
else
{
for(x3=0; x3!= i;)
{
Banner=0;
for ( int k=2;k<Number;k++)
{
if((Number%k)==0)
Banner=1;
}
if(Banner==0)
{ x3++;
cout<<Number<<" ";
}
Number++;
}
cout<<"\n";
}
i--;
}
getch();
return 0;
}