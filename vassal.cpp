#include "start.cpp"
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>


using namespace std;

int main()
{
   hash1 h;
   long int hashing;
    string s; // строка
    int a,b; // модуль и множитель
    int c,d; // bounds
    cout<<"stroka=";
    cin>>s;
    cout<<endl<<"mod=";
    cin>>a;
    cout<<endl;
    cin>>b;
    cout<<"left bound=";
    cin>>c;
    cout<<endl<<"right bound=";
    cin>>d;
    
    
    hashing=h.work(a,b,s,c,d);
    cout<<"hash="<<hashing;
 return 0;    
}
