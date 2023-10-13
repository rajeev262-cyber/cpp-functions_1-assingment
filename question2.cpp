#include<iostream>
using namespace std ;
float area(float r){
    float  pi = 3.14;
    float area = pi * r * r ;
    return area ;
}
int main ()
{
    float r ;
    cout << " enter the radius of the circle ";
    cin >> r ;
    cout << area(r);
}