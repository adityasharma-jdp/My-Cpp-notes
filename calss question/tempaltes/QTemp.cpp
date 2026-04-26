//write a function template for swapping two values of two varriables whaich are to decided at the time of calling the function.
#include <iostream>
using namespace std;
template <typename T1, typename T2>
void swap(T1 &a, T2 &b)
{
    T1 temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 10, y = 20;
   
    swap<int, int>(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
