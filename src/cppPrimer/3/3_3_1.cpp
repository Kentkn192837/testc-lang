#include <iostream>
#include <vector>
#include <string>

int main()
{
    /*
     �v�f����10�Ŋe�v�f��-1�ŏ�����
    */
    std::vector<int> vec(10, -1);
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
