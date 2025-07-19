#include <iostream>
using namespace std;

class Animal
{
public:
 virtual void sound() 
 {
  cout << "Some generic animal sound" << endl;
 }
};

class Dog : public Animal
{
public:
 void sound() override
 {
  cout << "Dog says: Woof!" << endl;
 }
};

class cat : public Animal
{
public:
 void sound() override
 {
  cout << "Cat says : Meow" << endl;
 }
};

int main()
{
 Animal *a; // base class pointer
 Dog d;     // derived class object
 cat c;

 a = &d;     // point to Dog object
 a->sound(); // Output: Dog says: Woof!

a = &c;
a->sound();

 return 0;
}
