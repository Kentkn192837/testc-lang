#include <iostream>
#include <vector>

int main()
{
    /*
     要素数が10で各要素を-1で初期化
    */
    std::vector<int> vec(10, -1);
    for (int i = 0; i < 10; i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
