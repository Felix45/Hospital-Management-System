#include <iostream>
#include <string>
#include "address.h"

using namespace std;

class Person {
  private:
    int id;
    string surname, firstname;
    Address userAddress;

  public:
    Person(string fname, string lname, Address address){
      surname = lname;
      firstname = fname;
      userAddress = address;
    }

    string getName() {
      return firstname + " " + surname;
    }

    void setAddress(Address newAddress) {
      userAddress = newAddress;
    }
};