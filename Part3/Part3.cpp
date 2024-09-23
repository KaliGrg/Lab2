#include <iostream>
using namespace std;

int main()
{
    using VEC = int*;
    using MATRIX = VEC*;

    int a = 5;
    VEC v = &a;
    MATRIX m = &v;

    cout << *v << "\n";
    cout << **m;
}