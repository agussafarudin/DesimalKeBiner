#include <iostream>
#include <cmath>

using namespace std;

int mengubahDesimalKeBiner (long long);

int main()
{
    long long n ;
    cout << "______Pengkonversi Basis Bilangan 10 Ke Biner_____ \n \n";
    cout << "Masukkan Sebuah Bilangan Desimal :  ";
    cin >> n ;
    cout << "\n \n";
    cout << n << " Dalam Desimal = " << mengubahDesimalKeBiner (n) << " Dalam Biner \n \n" ;
    return 0;
}
int mengubahDesimalKeBiner(long long n)
{
    int nomorBiner = 0 , i = 0 , remainder ;
    while ( n!=0)
    {
        remainder = n%2 ;
        n /= 2 ;
        nomorBiner += remainder*pow(10, i);
        ++i;
    }
    return nomorBiner;

}
