#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <iostream>

class Solution
{
public:
	std::vector<int> twoSum(std::vector<int> &nums, int target)
	{
		std::unordered_map<int, int> hash_map;

		for (int i = 0; i < nums.size(); i++)
		{

			if (hash_map.find(target - nums[i]) != hash_map.end())
			{
				printf("target %i\n", target);
				printf("nums[i] %i\n", hash_map.find(nums[i]));
				printf("hash_map find it %i\n", hash_map.find(target - nums[i]));
				printf("hash_map end %i\n", hash_map.end());
				return std::vector<int>(i, hash_map[target - nums[i]]);
			}
			else
			{
				hash_map[nums[i]] = i;
			}
		}
		return std::vector<int>(-1, -1);
	}
};

int main(int argc, char **argv)
{
	// Command line arguments are passed in by argc and argv in the same way
	// they are in C.
	// argc indicates the number of arguments,
	// and argv is an array of C-style strings (char*)
	// representing the arguments.
	// The first argument is the name by which the program was called.
	// argc and argv can be omitted if you do not care about arguments,
	// giving the function signature of int main()

	printf("Hello, world!\n");

	printf("argc %i\n", argc);

	for (size_t i = 0; i < argc; i++)
	{
		/* code */
		printf("%s\n", argv[i]);
	}

	Solution *sol = new Solution();
	std::vector<int> test = {3, 4, 2, 4, 5, 3, 6};
	std::vector<int> res = sol->twoSum(test, atoi(argv[1]));

	//     int *a = 1;
	//     int *b = 2;
	//     printf("a = %i\n", a);
	//     printf("b = %i\n", b);

	std::cout << "res length = " << res.size() << std::endl;

	for (size_t i = 0; i < res.size(); i++)
	{
		/* code */
		std::cout << i << " , " << res[i] << std::endl;
	}

	// An exit status of 0 indicates success.
	return 0;
}