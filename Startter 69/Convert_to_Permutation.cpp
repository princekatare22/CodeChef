/*
Problem
You are given an array AA of size NN. In one operation, you can:

Choose an index ii (1\le i \le N)(1≤i≤N) and increase A_iA 
i
​
  by 11.
Find the minimum number of operations required to convert the array AA into a permutation of size NN. If it is impossible to do so, print -1−1.

Note that a permutation of size NN contains each element from 11 to NN exactly once.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains the integer NN — the size of the array.
The next line contains NN space-separated integers, the elements of the array AA.
Output Format
For each test case, output on a new line, the minimum number of operations required to convert the array AA into a permutation of size NN.
If it is impossible to do so, print -1−1.

Input : 

4
4
3 1 1 2
3
0 3 3
3
3 2 1
3
2 0 1

Output :

3
-1
0
3

*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	int n;
	vector <int> arr;
	int temp;
	int sum , ans;
	bool isValid;
	while(t--)
	{
	    isValid = true;
	    sum = 0;
	    cin >> n;
	    for(int i=0 ; i<n ; i++)
	    {
	        cin >> temp;
	        arr.push_back(temp);
	        sum = sum + temp;
	    }
	    ans = ((n*(n+1))/2) - sum;
	    temp = n;
	    sort(arr.begin(),arr.end());
	    reverse(arr.begin(),arr.end());
	    for(int i=0 ; i<n ; i++)
	    {
	        if(arr[i] > temp)
	        {
	            isValid = false;
	            break;
	        }
	        temp--;
	    }
	    if(isValid == true)
	    {
	        cout << ans << endl;
	    }
	    else
	    {
	        cout << "-1" << endl;
	    }
	    arr.clear();    
	}
	return 0;
}
