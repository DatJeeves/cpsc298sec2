//A metric ton is 35,273.92 ounces. Write a program that will read the weight (console input) of a package
//of breakfast cereal in ounces and output the weight in metric tons as well as the number of boxes needed
//to yield one metric ton of cereal.

#include <iostream>

using namespace std;

int main(int argc, char ** argv){
  //initianlizing
  double ozWeight = 0;
  double metricTonsWeight = 0;
  double numOfBoxes = 0;

  //userinput
  cout << "What is the weight of your package in ounces?: ";
  cin >> ozWeight;
  
  //conversions
  metricTonsWeight = ozWeight / 35,273.92;
  numOfBoxes = static_cast<int>((35,273.92 / ozWeight));

  //output
  cout << "The weight of your package is: " << metricTonsWeight <<
  " Metric tons." << endl;
  cout << "The number of boxes needed to yeild one metric ton of cereal is: " <<
  numOfBoxes << " Boxes." << endl;

  return 0;
}
