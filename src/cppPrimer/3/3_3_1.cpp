#include <iostream>
#include <vector>
#include <string>

int main()
{
    /*
     要素数が10で各要素を-1で初期化
    */
    std::vector<int> vec(10, -1);
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
