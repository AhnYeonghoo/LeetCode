#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution2(string number)
{
	int answer = 0;
	for (auto i : number)
	{
		answer += i - '0';
	}
	cout << answer << endl;
	return answer % 9;
}

int mainSolution2()
{

	cout << solution2("1234") << endl;

	return 0;
}