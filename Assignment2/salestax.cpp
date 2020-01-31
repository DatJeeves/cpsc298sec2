#include <iostream>
#include <math.h>

using namespace std;

float addTax(float& taxRate, float& cost){
  //calculation
  cost *= (1+taxRate);
  //rounds the number to two places (got off of https://stackoverflow.com/questions/1343890/rounding-number-to-2-decimal-places-in-c)
  cost = ceilf(cost * 100) / 100;
  return cost;
}


int main(int argc, char ** argv){
  //initialization
  float cost = 0;
  float tax = 0;
  //User io
  cout << "What is the cost of an item?: $";
  cin >> cost;
  cout << "What is the tax of an item?: ";
  cin >> tax;
  //percent to decimal
  tax *= .01;
  //Output the info to the user
  cout << "The cost of the tiem with tax is: $" <<
  addTax(cost, tax) << endl;

  return 0;
}
