#include <iostream>
#include <vector>

using namespace std;

class RunningSumSolution
{
public:
	vector<int> runningSum(vector<int>& nums)
	{
		for (int i = 1; i < nums.size(); i++)
		{
			
			nums[i] = nums.at(i) + nums.at(i - 1);
		}
		return nums;
	}
};

int mainRunningSumSolution()
{
	RunningSumSolution s;
	vector<int> a = { 1, 2, 3, 4 };
	vector<int> result = s.runningSum(a);
	for (auto& r : result)
	{
		cout << r << ", ";
	}

	return 0;
}