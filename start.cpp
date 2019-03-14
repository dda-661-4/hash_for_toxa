// working : vassal.cpp calling start.cpp
// some collisons are present

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class hash1
{
public:
  hash1();
  vector <char> mass; // mass for symbols
  vector < long int>  mass2; // mass for digit
  vector <long int> mass3; // for chast sum

  int len;
  long int res;
  long int  h;
  long int work(int a, int b,string s,int l_gr,int r_gr);
};

hash1::hash1()
{
    
}

long int hash1::work(int a, int b, string s,int l_gr,int r_gr)
{
      len=s.length();
      mass.reserve(len);
      mass2.reserve(len);
      mass3.reserve(len);
      for(int i=0;i<len;i++)
      {
       mass[i]=s[i];   
      }
      for(int i=0;i<len;i++)
      {
       res=mass[i]*pow(b,i);  
       mass2[i]=res%a;
      }
      mass3[0]=mass2[0];

      for(int i=1;i<=len;i++)
      {
       mass3[i]=mass3[i-1]+mass2[i];   
       //cout<<mass3[i]<<endl;
      }
      h=(mass3[r_gr]-mass3[l_gr]);
      h=h*pow(b,len-r_gr);
      h=h%a;
      //cout<<h;
      return h;
}
