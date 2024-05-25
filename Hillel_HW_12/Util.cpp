#include "Util.h"

bool hasNotDublicate(const std::vector<int>& chekedVector)
{
	for (size_t i = 0; i < chekedVector.size(); ++i)
	{
		if (i == chekedVector.size() - 1) return true;
		for (size_t j = i + 1; j < chekedVector.size(); ++j)
		{
			if (chekedVector.at(i) == chekedVector.at(j)) return false;
		}
	}
}

bool hasNotValue(const std::vector<int>& chekedVector, const int& value)
{
	for (const int& element : chekedVector)
	{
		if (element == value)
		{
			return false;
		}
	}
	return true;
}