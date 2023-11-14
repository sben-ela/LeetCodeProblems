class Solution {
public:
vector<int> searchRange(vector<int>& nums, int target) {

	vector<int> result;
	int first, last;

	first = 0;
	last = nums.size() - 1;
	int increment = 1;
	int decrement = 0;
	while (first <= last)
	{
		if (increment && nums[first] == target)
		{
			increment = 0;
			decrement = 1;
			result.push_back(first);
		}
		if (decrement && nums[last] == target)
		{
			decrement = 0;
			result.push_back(last);
		}
		if (!increment && !decrement)
			return(result);
		first += increment;
		last  -= decrement;
	}
	if (result.size() == 1)
		result.push_back(result[0]);	
	else if (!result.size())
	{
		result.push_back(-1);
		result.push_back(-1);
	}

	return(result);
}

};
