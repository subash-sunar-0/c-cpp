#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if((a==0||b==0||c==0)||(a+b+c !=180))
  {
    cout<<"NO";
  }
  else
  {
    cout<<"YES";
  }
  return 0;
}
