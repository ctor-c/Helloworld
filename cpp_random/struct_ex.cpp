

#include <iostream>
#include <string>
using namespace std;

struct Person {
   string name;
   int age;

   // Constructor to initialize the struct

   // default
   Person() : name("Laurie"), age(19) {}
   Person(string n, int a) : name(n), age(a) {}

   // copy ctor
   Person(const Person& p) : name(p.name), age(p.age) {}

   // dtor
   ~Person() {
        cout << "Destructor called for " << name << endl;
   }
};

int main() {
   Person person1("Alice", 30);
   cout << "Name: " << person1.name << ", Age: " << person1.age << endl;
   
   // call dflt ctor
   cout << Person().name << Person().age << endl;
   
   Person person2 = person1;
   cout << "Now copy of Person" << endl;
   cout << "Name: " << person2.name << ", Age: " << person2.age << endl;

   return 0;
}

