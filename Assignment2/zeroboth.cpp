#include <iostream>

using namespace std;

//void function that sets two vars to 0
void zeroBoth(int& firstInt, int& secondInt){
  firstInt = 0;
  secondInt = 0;
}

int main(int argc, char ** argv){
  //initializes vars
  int firstNum = 0;
  int secondNum = 0;

  //user input for the first and second variables
  cout << "Input your first number value : ";
  cin >>  firstNum;

  cout << "Input your second number value : ";
  cin >>  secondNum;

  //method call
  zeroBoth(firstNum, secondNum);

  //coutput message to the user to show that the method has succesfully been
  //implemented.
  cout << "Your first number's value has been changed to: " << firstNum
  << endl;
  cout << "Your second number's value has been changed to: " << secondNum
  << endl;

  return 0;
}
