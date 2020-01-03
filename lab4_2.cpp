#include<iostream>

using namespace std;

//Write function findDistance() here
double findDistance(double u,double a,double t)
{
  double s=(u*t)+(0.5*a*t*t);
  return s;
}

int main()
{
  //Calling findDistance() using test cases
  double u=1.5,a=-1,t=2;
  cout << "s = " << findDistance(u,a,t);
  return 0;
}
