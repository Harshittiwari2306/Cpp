#include<iostream>
using namespace std;
int main()
{
 int ans = 0 , pow =1;
 int decnum;
 cin>>decnum>>endl;
 while(decnum>0)
 {
  rem = decnum%2;
  decnum = decnum/2;
  ans += (rem*pow);
  pow=pow*10;
 }

 cout<<ans;
}