#include <iostream>

using namespace std;

//main method
int main(int argc, char ** argv){
  //initializes the array
  int a[4][5];
  //iterates trhoughout the array via each line and ases for input
  for(int i = 0; i < 4; ++i){
    for(int j = 0; j<5; ++j){
      //user i/o
      cout<<"Enter an integer for slot a["<<i<<"]["<<j<<"]";
      cin>>a[i][j];
    }
  }
  //iterates therough the array line by line to output the array
  for(int i = 0; i < 4; ++i){
    cout<<endl;
    for(int j = 0; j<5; ++j){
      cout<<a[i][j];
    }
  }
  cout<<endl;

  return 0;
}
