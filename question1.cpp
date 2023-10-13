#include<iostream>
using namespace std ;
int sqr(int x){
    int sqr = x * x ;
    return sqr ;
}
int main ()
{
    int n;
    cout << "enter the up to which you square want ";
    cin >> n ;
    for (int i=1 ; i<= n ; i++)
    {
        cout << sqr(i) << endl ;
    }
    return 0 ;
}