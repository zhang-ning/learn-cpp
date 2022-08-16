#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <iostream>


#include <iterator> // for std::ostream_iterator
#include <algorithm>  // for std::copy

template <typename T>
std::ostream& operator<< (std::ostream& out, const std::vector<T>& v) {
    if (!v.empty()) {
        out << '[';
        std::copy(v.begin(), v.end(), std::ostream_iterator<T>(out, ", "));
        out << "\b\b]";
    }
    return out;
}

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
				// printf("find first index %i\n", hash_map[target - nums[i]]);
				// printf("find first number %i\n", nums[hash_map[target - nums[i]]]);
				// printf("find senond index %i\n", i);
				// printf("find second number %i\n", nums[i]);
				return std::vector<int>{hash_map[target - nums[i]], i};
			}
			hash_map[nums[i]] = i;
		}
		return std::vector<int>{-1, -1};
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
	// printf("Hello, world!\n");
	// printf("argc %i\n", argc);

	// for (size_t i = 0; i < argc; i++)
	// {
	// 	/* code */
	// 	printf("%s\n", argv[i]);
	// }

	Solution *sol = new Solution();
	std::vector<int> test = {3, 4, 2, 4, 5, 3, 6};
	std::cout << "input: " << test << std::endl;
	std::cout << "sum: " << argv[1] << std::endl;
	std::vector<int> res = sol->twoSum(test, atoi(argv[1]));
	std::cout << "result: " << res << std::endl;
	//     int *a = 1;
	//     int *b = 2;
	//     printf("a = %i\n", a);
	//     printf("b = %i\n", b);

	// for (size_t i = 0; i < res.size(); i++)
	// {
	// 	/* code */
	// 	std::cout << "index: " << res[i] << std::endl;
	// }

	// An exit status of 0 indicates success.
	return 0;
}