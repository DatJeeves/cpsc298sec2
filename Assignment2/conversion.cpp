#include <iostream>

using namespace std;

//initialization
float numOfFeet = 0;
float numOfInches = 0;
float meters = 0;
float centimeters = 0;

//input function
void inputFunction(){
  //user numberOfInputs
  cout << "Inut the number of feet you want to convert: ";
  cin >> numOfFeet;
  //assignment
  //this -> numOfFeet = numOfFeet;
  //user input
  cout << "Inut the number of inches you want to convert: ";
  cin >> numOfInches;
  //assignment
  //this -> numOfInches = numOfInches;
}

//calculation
void calculation(float& feet, float& inches){
  //calculation conversion
  feet *= 12;
  inches += feet;
  //assignment
  //this -> centimeters = inches * 2.54;
  //this -> meters = centimeters * .01;

  centimeters = inches * 2.54;
  meters = centimeters * .01;

}

//output function
void output(){
  //output the concerted values
  cout<< "The conversion to centemeters is: " << centimeters << endl;
  cout << "The conversion to meters is: " << meters << endl;
}

int main(int argc, char ** argv){
  //function calls in order
  inputFunction();
  calculation(numOfFeet, numOfInches);
  output();

  return 0;
}
