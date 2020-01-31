#ifndef PET_H
#define PET_H
#include <string>
#include <iostream>

using namespace std;
//setting up class Pet
class Pet{
  public:
    //default constructor
    Pet();
    //constructior
    Pet(string name, int age, string type, double weight);

    //getters methods
    string getName();
    int getAge();
    string getType();
    double getWeight();
    //setters methods
    void setName(string name);
    void setAge(int age);
    void setType(string type);
    void setWeight(double weight);
    //print method to output a message to the user about the
    //created pet
    void print();

  private:
    //variables of a pet
    string name;
    int age;
    string type;
    double weight;
};
#endif
