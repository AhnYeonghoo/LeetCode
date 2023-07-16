#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class MaximumWealthSolution
{
public:
	int maximumWealth(vector<vector<int>>& accounts)
	{
		int maxi = 0;
		
		for (int i = 0; i < accounts.size(); i++)
		{
			int sum = 0;
			for (int j = 0; j < accounts[i].size(); j++)
			{
				sum = sum + accounts[i][j];
			}
			maxi = max(maxi, sum);
		}
		return maxi;
	}
};

int main()
{
	MaximumWealthSolution s;
	vector<vector<int>> a = { {1, 2, 3}, {3, 2, 1} };
	int result = s.maximumWealth(a);
	cout << result << endl;

	return 0;
}