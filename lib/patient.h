#include <iostream>
#include "person.h"

using namespace std;

class Patient : public Person {
  public:
    Patient(string fname,
      string lname,
      Contact contact,
      Address address) : Person(fname, lname, address, contact) {

    }
};