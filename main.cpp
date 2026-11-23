#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
   float a,r1,r2,b,c,r;
   float d,re,im;
   char t;
   do{

   cout<<"enter value of a : ";
   cin>> a;
   cout<<"enter value of b : ";
   cin>>b;
   cout<<"enter value of c : ";
   cin>>c;


   if (a==0)
   {
       r=-c/b;
    cout<<"this equation is not quadratic "<<endl<<" r " <<r<<endl;}
   else
   {
    d=b*b-4*a*c;
    if(d>=0)
    {
       r1=(-b+sqrt(d))/(2*a);
       r2=(-b-sqrt(d))/(2*a);

    cout<<"the roots are real and distinct (unequal) "<<endl;
    cout<<"r1 "<<r1<<endl;
    cout<<"r2 "<<r2<<endl;
   }
   else {
    re=-b/(2*a);
    im=sqrt(-d)/(2*a);
      cout<<"the roots are real and imaginary"<<endl;
      cout<<"r1 "<<re<<"+"<<im<<"i"<<endl;
      cout<<"r2 "<<re<<"-"<<im<<"i"<<endl;}
   }
   cout<<"coutnue enter y else press any key";
   cin>> t;
   }while(t=='y');
   cout<<"exite";
   return 0;
}




