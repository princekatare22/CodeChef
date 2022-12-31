/*
Problem
Chef has NN bags and an integer X. The i 
th  bag contains Ai coins such that Ai ≤X.
In one operation, Chef can:

Pick any bag and increase its coins to XX. Formally, if he choses the ith bag, he can set Ai = X 
Given that the cost of performing each operation is CC (C \leq X)(C≤X) coins and Chef can perform the above operation any (possibly zero) number of times, determine the maximum value of:

$\sum_{i=1}^N A_i$ $-$ total cost paid by Chef, if Chef performs the operations optimally.
Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains three space-separated integers NN, XX, and CC — the number of bags, maximum limit of coins on each bag and cost of each operation respectively.
The next line contains NN space-separated integers A1, A2, AN - denoting the number of coins in each bag.

Input :

3
5 5 2
1 2 3 4 5
3 4 4
1 1 1
5 3 2
3 2 3 1 1

Output:

18
3
10

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n,x,c;
	vector <int> arr;
	int temp ,ans;
	while(t--)
	{
	    ans = 0;
	    cin >> n >> x >> c;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin >> temp;
	        arr.push_back(temp);
	    }
	    for(int i=0 ; i<n ; i++)
	    {
	        if((x-arr[i]) > c)
	        {
	            ans = ans + (x-c);
	        }
	        else
	        {
	            ans = ans + arr[i];
	        }
	    }
	    cout << ans << endl;
	    arr.clear();
	}
	return 0;
}
