//Write a program that determines whether a meeting room is in violation of fire law regula- tions regarding
//the maximum room capacity. The program will read in the maximum room capacity and the number of
//people to attend the meeting. If the number of people is less than or equal to the maximum room capacity,
//the program announces that it is legal to hold the meeting and tells how many additional people may
//legally attend. If the number of people exceeds the maximum room capacity, the program announces that
//the meeting cannot be held as planned due to fire regulations and tells how many people must be excluded
//in order to meet the fire regulations.
#include <iostream>

using namespace std;

int main(int argc, char ** argv){
  //initianlizing
  int roomCapacity;
  int numPeopleAttending;

  //user input
  cout << "What is the maximum room capacity for this room?: ";
  cin >> roomCapacity;

  cout << "How many people are attending?: ";
  cin >> numPeopleAttending;

  //checking roomcapacity
  //if capacity is exceended
  if(roomCapacity < numPeopleAttending){
    cout << "The meeting cannot be held as planned due to fire regulations." <<
    endl;
    cout << "You must exclude " << numPeopleAttending - roomCapacity <<
    " people to meet fire regulations" << endl;
    return 0;
  }
  //if capacity is met or under
  else{
    cout << "It is legal to hold the meeting." << endl;
    cout << "You may invite " << roomCapacity - numPeopleAttending <<
    " more people." << endl;
    return 0;
  }
}
