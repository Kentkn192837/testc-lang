#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5 };
    iv.resize(4);
    std::cout << "size() = " << iv.size() << std::endl;
    iv.resize(6, -1); // vector viのサイズを6に伸ばし、増えた部分を-1で初期化する
    std::cout << "size() = " << iv.size() << std::endl;
    for (int i : iv)
    {
        std::cout << i << std::endl;
    }
}
