//Templating 1 Lab
#include <iostream>
#include <string>
using namespace std;
//1. Function template that returns to the larger of two values/inputs
template <typename T>
T max_two (T a, T b){
    if (a > b)
    return a;
    else 
    return b;
}
//2. Function that finds the largest value among three inputs
template <typename T>
T max_three (T a, T b, T c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}
//3. Function swap exchanges the values of two parameters
template <typename T>
void my_swap (T& a, T& b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    cout << "Max of two integers: " << max_two(5,9) << endl;
    cout << "Max of three doubles: " << max_three(2.5, 8.1, 6.3) << endl;
    
    int x = 5;
    int y = 10;

    my_swap (x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}