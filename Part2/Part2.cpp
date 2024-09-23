#include <iostream>
using namespace std;

int x, y;
int* px = &x;
int* py = &y;

int main()
{
    cout << "Enter value for x : ";
    cin >> x;
    cout << "Enter value for y : ";
    cin >> y;
    cout << "\n The sum of the two numbers is : " << *px + *py << "\n\n";
}