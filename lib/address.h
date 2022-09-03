#include <iostream>

using namespace std;

class Address {
  private:
    string city;
    string country;
    string postal_code;
    string post_office;

  public:
    Address(string city, string nation, string box_no, string code) {
      city = city;
      country = nation;
      postal_code = code;
      post_office = box_no;
    }

    string getAddress() {
      return post_office + " " + city + ", " + country;
    }
};