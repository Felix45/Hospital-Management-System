#include <iostream>
#include <string>

using namespace std;

class Contact {
  private:
    string email, mobileNo;
  public:
    Contact() {}
    Contact(string mail, string phoneno) {
      email = mail;
      mobileNo = phoneno;
    }

    void setEmail(string newEmail) {
      email = newEmail == "" ? email : newEmail;
    }

    void setMobileNo(string newMobileNo) {
      mobileNo = newMobileNo == "" ? mobileNo : newMobileNo;
    }

    string getEmail() { return email; }
    string getMobileNo() { return mobileNo; }
};