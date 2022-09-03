#include <iostream>
#include "person.h"

using namespace std;

class Doctor : public Person {
  private:
    string qualification, speciality;
  public:
    Doctor(string fname,
      string lname,
      Contact contact,
      Address address,
      string study = "",
      string field = "") : Person(fname, lname, address, contact) {

        speciality = field;
        qualification = study; 
    }

    void displayDoctorInfo() {
      cout << "Doctor: " << getName() << endl;
      cout << "Qualification: " << qualification << endl;
      cout << "Specialization: " << speciality << endl;
    }
};