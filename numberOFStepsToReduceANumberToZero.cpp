#include <iostream>
#include <vector>

using namespace std;

class NumbersSolution
{
public:
	int numberOfSteps(int num)
	{
		int result = 0;
		while (num > 0)
		{
			if (num % 2 == 0)
			{
				num /= 2;
				result++;
			}
			else
			{
				num -= 1;
				result++;
			}
		}
		return result;
	}

	/*int numberOfSteps(int num)
	{
		int steps = 0;
		while (num > 0)
		{
			num = num % 2 == 0 ? num / 2 : --num;
			steps++;
		}
		return steps;
	}*/
};

int mainNumberOfStepsToZero()
{
	NumbersSolution s;
	int result = s.numberOfSteps(8);
	cout << result << endl;
	return 0;
}