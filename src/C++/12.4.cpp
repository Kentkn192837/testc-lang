#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string str = "apple";
    std::vector<char> cv{ str.begin(), str.end() };

    for (char c : cv)
    {
        std::cout << c << std::endl;
    }
}
