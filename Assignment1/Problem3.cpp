//An employee is paid at a rate of $16.00 per hour for regular hours worked in a week. Any hours over that
//are paid at the overtime rate of one and one-half times that. From the worker’s gross pay, 6% is withheld
//for Social Security tax, 14% is withheld for federal income tax, 5% is withheld for state income tax, and
//$10 per week is withheld for medical insurance. Write a program that will read in the number of hours
//worked in a week as input and that will then output the worker’s gross pay, each withholding amount, and
//the net take-home pay for the week.

#include <iostream>

using namespace std;

int main(int argc, char ** argv){
    //initializing variables
    int totalHours = 0;
    int regualarHours = 0;
    int regHoursWorked = 0;
    int overtimeHours = 0;
    double negatedIncome = 0;
    double grossIncome = 0;
    //user interaction for variables
    cout << "How many hours did you work this week?: ";
    cin >> totalHours;
    cout << "How many regular hours of work are you supposed to work?: ";
    cin >> regualarHours;
    //calculations
    overtimeHours = totalHours - regualarHours;
    regHoursWorked = totalHours - overtimeHours;
    grossIncome = ((16 * regHoursWorked) + ((16*1.5) * overtimeHours));
    negatedIncome = (grossIncome * .06) + (grossIncome * .14) +
    (grossIncome * .05) + 10;
    //user output
    cout << "Your Gross Pay is: $" << grossIncome << endl;
    cout << "Social Security Takes: $" << grossIncome * .06 << endl;
    cout << "Federal Income Takes: $" << grossIncome * .14 << endl;
    cout << "State Income Tac Takes: $" << grossIncome * .05 << endl;
    cout << "Medical Insurance Takes: $10" << endl;
    cout << "Your Net Income for this week is: $" << negatedIncome << endl;

    return 0;

}
