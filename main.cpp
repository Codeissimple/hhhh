#include <iostream>
using namespace std;

int* integer_factory();
int* integer_factory(int);

int* integer_factory(){
   int* factory = new int;
   cout << "Enter any integer " << endl;
   cin >> *factory ;
   return factory;
}

int* integer_factory(int){
  int* myint = new int;
  cout << myint;
  return myint;
}


int main() {
  int *aValue;
  int *bValue;


  *aValue = 0;
  *bValue = 0;

  aValue = integer_factory();
  bValue = integer_factory(55);

  
  
  cout << "The value is " << *aValue << endl;
  cout << "The value is " <<*bValue << endl;
  delete aValue;
  delete bValue;
  return 0; 
}