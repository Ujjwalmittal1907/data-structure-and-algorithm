#include<iostream>
#include<vector>
using namespace std;

void move(int arr[],int n){
    int s=0;
    int e=n;
    int k=0;
    while (s<=e){
  if (arr[s] != 0){
    arr[s++]=arr[k++]
  }
    }
}
int printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout << arr[i];
    }
}

int main()
{
vector<int> v;
v.push_back(5);
v.push_back(0);
v.push_back(5);
v.push_back(0);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(0);

for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
}

move(v,8);
printarr(v,8);



}
    


