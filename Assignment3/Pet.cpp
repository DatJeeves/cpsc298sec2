#include "Pet.h"

//default constructor
Pet::Pet(){
  name = "Doggo";
  age = 1;
  type = "dog";
  weight = 1.0;
}

//constructor
Pet::Pet(string name, int age, string type, double weight){
  this -> name = name;
  this -> age = age;
  this -> type = type;
  this -> weight = weight;
}

//getters
string Pet::getName(){
  return name;
}
int Pet::getAge(){
  return age;
}
string Pet::getType(){
  return type;
}
double Pet::getWeight(){
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
  if(type == "dog" || type == "cat"||type =="Dog"||type == "Cat"){
    this->type = type;
  }
  else{
    cout << "Pets can only be either dogs or cats."<<
    " Did not assign."<<endl;
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
