/*
Problem
In Chefland, precipitation is measured using a rain gauge in millimetre per hour.

Chef categorises rainfall as:

LIGHT, if rainfall is less than 33 millimetre per hour.
MODERATE, if rainfall is greater than equal to 33 millimetre per hour and less than 77 millimetre per hour.
HEAVY if rainfall is greater than equal to 77 millimetre per hour.
Given that it rains at XX millimetre per hour on a day, find whether the rain is LIGHT, MODERATE, or HEAVY.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single integer XX — the rate of rainfall in millimetre per hour.
Output Format
For each test case, output on a new line, whether the rain is LIGHT, MODERATE, or HEAVY.

You may print each character in lowercase or uppercase. For example, LIGHT, light, Light, and liGHT, are all identical.

Constraints
1 ≤ T ≤ 20
1 ≤ X ≤ 20

Input :

4
1
20
3
7

Output :

LIGHT
HEAVY
MODERATE
HEAVY

*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x;
	while(t--)
	{
	    cin >> x;
	    if(x >= 7)
	    {
	        cout << "HEAVY" << endl;
	    }
	    else if(x >= 3)
	    {
	        cout << "MODERATE" << endl;
	    }
	    else
	    {
	        cout << "LIGHT" << endl;
	    }
	}
	return 0;
}
