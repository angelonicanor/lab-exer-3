#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a;
	char b;
	cout << "Enter Starting Character: ";
	cin >> a;
	cout << "Enter Last Character: ";
	cin >> b;
	
	int s = int(a);
	int l = int(b);
	
	if (s > l)
	{
		int temp = l;
		l = s;
		s = temp;
		for(int i = s; i <= l; i++){
			char hi = i;
			cout << hi;
		}
		
	} else {
		for (int i = s; i <= l; i++){
			char hi = i;
			cout << hi;
		}
	}
	return 0;
}

