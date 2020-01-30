//It is difficult to make a budget that spans several years, because prices are not stable. If your company
//needs 200 pencils per year, you cannot simply use this year’s price as the cost of pencils two years from
//now. Because of inflation the cost is likely to be higher than it is today. Write a program to gauge the
//expected cost of an item in a specified number of years. The program asks for the cost of the item, the
//number of years from now that the item will be purchased, and the rate of inflation. The program then
//outputs the estimated cost of the item after the specified period. Have the user enter the inflation rate as a
//per- centage, such as 5.6 (percent). Your program should then convert the percentage to a fraction, such
//as 0.056, and should use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char ** argv){
  //initializing variables
  float currentCost = 0;
  float numYears = 0;
  float rateOFInflation = 0;
  //user io
  cout << "What is the current cost of a pencil?: ";
  cin >> currentCost;
  cout << "How many years from now will the item be purchased?: ";
  cin >> numYears;
  cout << "What is the rate of inflation in percents (Do not include the '%' sign)?: ";
  cin >> rateOFInflation;
  //calculation
  rateOFInflation *= .01;
  //calculates the inflation for every year
  for(int i=1; i < numYears; ++i){
    //calculation
    currentCost *= (1+rateOFInflation);
    //rounds the number to two places (got off of https://stackoverflow.com/questions/1343890/rounding-number-to-2-decimal-places-in-c)
    currentCost = ceilf(currentCost * 100) / 100;
  }
  //ouput to the user
  cout << "The cost of the item after " << numYears << " is estimmated to be: $"
  << currentCost << endl;

  return 0;
}
