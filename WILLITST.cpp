#include <iostream>
using namespace std;

int isPowerOfTwo (long long int x)
{
  return ((x != 0) && !(x & (x - 1)));
}

int main()
{
	long long int n;
	cin>>n;
	if(isPowerOfTwo(n))
		cout<<"TAK\n";
	else
		cout<<"NIE\n";

}