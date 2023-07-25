#include <iostream>
#include <vector>

using namespace std;

class ConcatenationOfArraySolution
{
public:
	vector<int> getConcatenation(vector<int>& nums)
	{
		vector<int> result;
		result.reserve(nums.size() * 2);
		for (const auto& v : nums)
		{
			result.push_back(v);
		}
		for (const auto& v : nums)
		{
			result.push_back(v);
		}
		return result;
	}
};


int main()
{
	ConcatenationOfArraySolution a;
	vector<int> result = { 1, 2, 1 };
	vector<int> resultresult = a.getConcatenation(result);
	for (const auto& a : resultresult)
	{
		cout << a << endl;
	}
}