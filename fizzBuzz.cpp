#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FizzBuzzSolution
{
public:
	vector<string> fizzBuzz(int n)
	{
		vector<string> result;
		
		for (int i = 1; i <= n; i++)
		{
			if (i >= 3)
			{
				if ((i % 3 == 0) && (i % 5 == 0)) result.push_back("FizzBuzz");
				else if (i % 3 == 0) result.push_back("Fizz");
				else if (i % 5 == 0) result.push_back("Buzz");
				else result.push_back(to_string(i));
			}
			else
			{
				result.push_back(to_string(i));
			}
		}
		return result;
	}

	/*vector<string> fizzBuzz(int n)
	{
		vector<string> fizzBuzz;
		string temp;
		for (int i = 1; i <= n; i++)
		{
			string temp = "";
			if (i % 3 == 0 || i % 5 == 0)
			{
				if (i % 3 == 0) temp = "Fizz";
				if (i % 5 == 0) temp = temp + "Buzz";
			}
			else
			{
				temp = to_string(i);
			}
			fizzBuzz.push_back(temp);
		}
		return fizzBuzz;
	}*/
};

int mainFizzBuzz()
{
	
	return 0;
}