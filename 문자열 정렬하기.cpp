#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution3(string my_string)
{
	string answer = "";
	for (int i = 0; i < my_string.length(); i++)
	{
		my_string[i] = tolower(my_string[i]);
	}
	
	sort(my_string.begin(), my_string.end());
	answer = my_string;
	return answer;
}

int mainSolution3()
{
	return 0;
}