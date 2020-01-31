#include "Pet.h"

int main(int argc, char **argv){
  //pointers create new pets
  Pet* p1 = new Pet;
  Pet* p2 = new Pet("Sheppard", 5, "dog", 5);
  //calls print function
  p1->print();
  p2->print();
  //deletes pointers
  delete p1;
  delete p2;

  return 0;
}
