#include <iostream>
#include <vector>

int main()
{
	std::vector<int> iv = { 1, 2, 3, 4, 5 };

	for (int v : iv)
	{
		std::cout << v << std::endl;
	}
}
