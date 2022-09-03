#include <iostream>
#include <string>
#include "address.h"
#include "contact.h"

using namespace std;

class Person {
  protected:
    int id;
    string surname, firstname;
    Address userAddress;
    Contact userContact;

  public:
    Person(string fname, string lname, Address address, Contact contact){
      surname = lname;
      firstname = fname;
      userContact = contact;
      userAddress = address;
    }

    string getName() {
      return firstname + " " + surname;
    }

    void setAddress(Address newAddress) {
      userAddress = newAddress;
    }
};