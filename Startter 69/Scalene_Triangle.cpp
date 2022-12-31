/*
Problem
Given A, B,A,B, and CC as the sides of a triangle, find whether the triangle is scalene.

Note:

A triangle is said to be scalene if all three sides of the triangle are distinct.
It is guaranteed that the sides represent a valid triangle.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three space-separated integers A, B,A,B, and CC — the length of the three sides of the triangle.
Output Format
For each test case, output on a new line, YES, if the triangle is scalene, and NO otherwise.

You may print each character of the string in uppercase or lowercase. For example, YES, yes, Yes, and yEs are all considered identical.

Constraints
1 ≤ T ≤ 100
1 ≤ A ≤ B ≤ C ≤ 10
C < (A+B)

Input :

4
2 3 4
1 2 2
2 2 2
3 5 6

Output :

YES
NO
NO
YES

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x,y,z;
	while(t--)
	{
	    cin >> x >> y >> z;
	    if(x != y && y != z && x != z)
	    {
	        cout << "YES" << endl;
	    }
	    else
	    {
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
