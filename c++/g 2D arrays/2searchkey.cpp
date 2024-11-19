#include <iostream>
using namespace std;	
int main()
{
    int arr1[2][2];
    cout << "enter your matrix" << endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin >> arr1[i][j];
        }
    }

    cout << "enter your key";
    int key;
    cin >> key;
  int ans=-1;
  for(int i=0;i<2;i++){
    
        for(int j=0;j<2;j++){
        if (arr1[i][j]==key){
            ans=1;
            break;
        }
        else{ ans=0;}
        }
    }

    if (ans==1){
        cout << "congrats key found";
    }
  else{
    cout << "key not found";
  }
    
    return 0;
}