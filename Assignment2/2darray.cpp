#include <iostream>

using namespace std;

int main(int argc, char ** argv){
  int a[4][5];

  for(int i = 0; i < 4; ++i){
    for(int j = 0; j<5; ++j){
      cout<<"Enter an integer for slot a["<<i<<"]["<<j<<"]";
      cin>>a[i][j];
    }
  }

  for(int i = 0; i < 4; ++i){
    cout<<endl;
    for(int j = 0; j<5; ++j){
      cout<<a[i][j];
    }
  }
  cout<<endl;

  return 0;
}
