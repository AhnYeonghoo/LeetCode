#include <iostream>
#include <string>

using namespace std;

class RansomNoteSolution
{
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		int counter[26] = { 0 };
		for (char ch : magazine)
		{
			counter[ch - 'a']++;
		}
		for (char ch : ransomNote)
		{
			if (counter[ch - 'a']-- <= 0)
				return false;
		}
		return true;
	}
};

int mainRansomNote()
{

	return 0;
}