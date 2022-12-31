/*
Problem
Chef is given two integers A and C such that A≤C.

Chef wants to find whether there exists any integer BB such that A, B,and C are in arithmetic progression.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers A and C, the given integers.
Output Format
For each test case, output -1 if there exists no integer B such that A, B, C are in arithmetic progression. Else, output the value of B.

Input :

4
3 5
6 6
2 7
1 9

Output :

4
6
-1
5

*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int a,b;
	while(t--)
	{
	    cin >> a >> b;
	    if((b-a)%2 == 0)
	    {
	        cout << a + (b-a)/2 << endl;
	    }
	    else
	    {
	        cout << "-1" << endl;
	    }
	}
	return 0;
}
