//Display the number in reverse order
//fix and complete the program below.
#include <iostream>
using namespace std;
int main ()
{
	
	int n,t=0,r;
	
	cout << "Enter A Accending Number" << endl;
	cin >> n;
	
	for (;n!=0;)
	{
		r=n%10;
		t=t*10+r;
		n/=10;
	}
	
	cout << "Reversed Number is " << endl;
	cout << t;
	
	return 0;





}
