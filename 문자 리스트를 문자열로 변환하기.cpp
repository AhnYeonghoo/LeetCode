#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution1(vector<string> arr)
{
	string answer = "";
	for (int i = 0; i < arr.size(); i++)
	{
		answer += arr.at(i);
	}
	return answer;
}

int mainSolution1()
{
	cout << solution1(vector<string>{"a", "b", "c"}) << endl;
	return 0;
}