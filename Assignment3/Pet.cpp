#include "Pet.h"

Pet::Pet(){
  string name = "Doggo";
  int age = 1;
  string type = "dog";
  int weight = 1.0;
}

Pet::Pet(string name, int age, string type, double weight)
//getters
string Pet::getName() const{
  return name;
}
int Pet::getAge() const{
  return age;
}
string Pet::getType() const{
  return type;
}
double Pet::getWeight() const{
  return weight;
}

//setters
void Pet::setName(string name){
  this->name = name;
}
void Pet::setAge(int age){
  this->age = age;
}
void Pet::setType(string type){
  if(type.toLower() == "dog" || type.toLower() == "cat"){
    this->type = type;
  }
  else{
    cout << "Pets can only be either dogs or cats"<<endl;
  }
}
void Pet::setWeight(double weight){
  this->weight = weight;
}

//print method
void Pet::print(){
  cout<<endl;
  cout<<"This pet's name is: " <<name <<"."<< endl;
  cout<<name<< " is " << age << " years old."<<endl;
  cout<<name<<" is a "<<type<<"."<<endl;
  cout<<name<<" is "<<weight<<" pounds."<<endl;
}
