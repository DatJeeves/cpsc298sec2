#include <iostream>

using namespace std;

int main(int argc, char ** argv){
  //initianilzing vars
  int index = 0;
  int input = 0;
  int numberArray[10];

  //Takes user inputs until the array is filled
  while(index < 9){
    //input = 0;
    //Stores user input to the array
    cout << "Enter a non-negative number for slot " << index + 1 <<
     " :";
     cin >> input;

     //Checks to see if the inout is non-negative
     if(input > 0){
       numberArray[index] = input;
       ++index;
     }
     //outputs an error message
     else{
       cout << "Your input was not recorded as it was not non-negative." <<
       endl;
     }
  }
  cout << "The array is as such: " << endl;
  //iterates throught the array
  for(int i = 0; i < 9; ++i){
    cout << "The value at index: " << i << " is: " << numberArray[i] << endl;
  }
  cout<< "Done" << endl;
  return 0;
}
