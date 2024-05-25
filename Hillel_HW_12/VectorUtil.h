#pragma once
#include <vector>


namespace vectorUtil
{
	template<typename T>
	bool hasNotDublicate(const std::vector<T>& chekedVector)
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
	template<typename T>
	bool hasNotValue(const std::vector<T>& chekedVector, const T& value)
	{
		for (const auto& element : chekedVector)
		{
			if (element == value)
			{
				return false;
			}
		}
		return true;
	}
}

