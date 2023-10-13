#include<iostream>
using namespace std ;
void odd(int x , int y){
    for (int i = min(x,y)+1;i<max(x,y);i++)
    {
        if(i%2!=0) cout << i << endl ;
    }
}

int main ()
{
    int a ;
    cout << "enter the first number ";
    cin >> a ;
    int b ;
    cout << "entert  the second number ";
    cin >> b ;
    odd(a,b);
    return 0 ;

}