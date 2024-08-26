#include <iostream>
using namespace std;
class Car {

public: string brand; string model; int year; };

int main() {

// Create an object of Car

Car carObj1;

carObj1.brand = "Toyota";

carObj1.model = "Fortunar";

carObj1.year = 2009;

Car carObj2;

carObj2.brand = "Mahindra";

carObj2.model = "Thar";

carObj2.year = 2010;

Car carObj3;

carObj3.brand = "rolls royces";

carObj3.model = "ghost";

carObj3.year = 1967;

Car carObj4;

carObj4.brand = "mahindra";

carObj4.model = "scorpio";

carObj4.year = 1989;

Car carObj5;

carObj5.brand = "Ford";

carObj5.model = "Mustang GT";

carObj5.year = 1964;

Car carObj6;

carObj6.brand = "Mercedes";

carObj6.model = "AMG";

carObj6.year = 1991;

cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";

cout << carObj4.brand << " " << carObj4.model << " " << carObj4.year << "\n";

cout << carObj5.brand << " " << carObj5.model << " " << carObj5.year << "\n";

cout << carObj6.brand << " " << carObj6.model << " " << carObj6.year << "\n";

return 0;

}