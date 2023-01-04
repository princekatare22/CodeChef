/*
Problem
Ashu and Arvind participated in a coding contest, as a result of which they received N chocolates. Now they want to divide the chocolates between them equally.

Can you help them by deciding if it is possible for them to divide all the NN chocolates in such a way that they each get an equal number of chocolates?

You cannot break a chocolate in two or more pieces.

Input :

4
10
4
3
2

Output :

Yes
Yes
No
Yes

*/
#include <iostream>
using namespace std;

int main() {
    int t;
	cin >> t;
	int n;
	while(t--)
	{
	    cin >> n;
	    if(n % 2 != 0)
	        cout << "NO" << endl;
	    else
	        cout << "YES" << endl;
	}
	return 0;
}
