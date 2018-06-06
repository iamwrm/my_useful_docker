#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
  public:
	vector<int> twoSum(vector<int> &nums, int target) 
/**
 * ... comment just after the function signature ...
 */
	{
		vector<int> answer;
		for (auto i = 0; i < nums.size(); i++)
		{
			for (int j = 0; j < nums.size() - 1; j++)
			{

				if ((nums[i] + nums[j] == target) && (i != j))
				{
					answer.push_back(i);
					answer.push_back(j);
					sort(answer.begin(), answer.end());
					return answer;
				}
			}
		}
	}
};

int main()
{

	Solution mySolution;

	vector<int> v1 = {3, 2, 1, 4};

	vector<int> v2 = mySolution.twoSum(v1, 6);
	cout << v2[0] << v2[1];
}