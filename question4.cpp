#include<iostream>
using namespace std ;
void digit(int x){
    int a =0;
    while (x>0){
        a += 1;
        x /= 10 ;
    }
    cout << a << endl;
    cout << a*a ;
}

int main ()
{
    int n ;
    cout << "enter the number ";
    cin >> n ;
    digit(n);
    return 0 ;
    
}