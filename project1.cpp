#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n0,n,t,ind;
    cout<<"enter the total population: ";
    cin>>n0;
    cout<<"enter the last day case:";
    cin>>n;
    cout<<"enter the time period:";
    cin>>t;
    cout<<"enter humen awareness index:";
    cin>>ind;
   double l;
   double k;
   double z;
   double a,b,c;
   double x=pow(10,-10);
   if (n>1000 && n<40000 && n0>0 && ind==1)
   {//   for max range
       l=5560*x*ind;
       cout<<"max lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
        k=1.0-z;
         // for min range
       a=3325*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
       
   }
  else if (n>40000 && n<150000 && n0>0 && ind==1)
   {//   for max range
       l=396102*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
        k=1.0-z;
         // for min range
         a=189234*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>150000 && n<350000 && n0>0 && ind==1)
   {//   for max range
       l=1541756*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=1027871*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>350000  && n0>0 && ind==1)
   {//   for max range
       l=2007964*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=1643325*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
   if (n>1000 && n<40000 && n0>0 && ind==2)
   {//   for max range
       l=174659*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl; 
       k=1.0-z;
        // for min range
        a=89340*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>40000 && n<150000 && n0>0 && ind==2)
   {//   for max range
       l=1383740*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=274809*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>150000 && n<350000 && n0>0 && ind==2)
   {//   for max range
       l=1884789*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=824760*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>350000  && n0>0 && ind==2)
   {//   for max range
       l=2643844*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=1264384*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
   if (n>1000 && n<40000 && n0>0 && ind==3)
   {//   for max range
       l=174659*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=82863*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>40000 && n<150000 && n0>0 && ind==3)
   { //   for max range
       l=1583740*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=274809*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>150000 && n<350000 && n0>0 && ind==3)
   {  //   for max range
       l=2084789*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
        // for min range
        a=824760*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
  else if (n>350000  && n0>0 && ind==3)
   { //   for max range
       l=2643844*x*ind;
       cout<<"lembda is:"<<l<<endl;
       z=pow(2.71,-l*t);
       cout<<"z is:"<<z<<endl;
       k=1.0-z;
       // for min range
        a=1264384*x*ind;
       cout<<"min lembda is:"<<a<<endl;
       c=pow(2.71,-a*t);
       cout<<"c is:"<<c<<endl;
       b=1.0-c;
   }
 
   else{
          l=0;
          z=pow(2.71,-l*t);
   }

    
    cout<<"K_max is:"<<k<<endl;
    cout<<"minimum no of infected people in the "<<t<<" days is:"<<n0*b<<endl;
    cout<<"maximum no of infected people in the "<<t<<" days is:"<<n0*k;
  
}
