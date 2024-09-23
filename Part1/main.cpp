#include <iostream>
using namespace std;

extern int cost;
extern int penny;
extern int nickel;
extern int dime;
extern int quarter;
extern int dollar;
extern int rem;

int main() {
	cout << "Enter the cost: ";
	cin >> cost;
	rem = dollar - cost;
	int quarter2 = rem / quarter;
	int dime2 = (rem % quarter) / dime;
	int nickel2 = ((rem % quarter) % dime) / nickel;
	int penny2 = (((rem % quarter) % dime) % nickel) / penny;
	cout << "\n\n The change is " << quarter2 << " quarters, " << dime2 << " dimes, " << nickel2 << " nickels and " << penny2 << " pennies. \n\n";
}