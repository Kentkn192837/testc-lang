#include <iostream>
#include <vector>

int main()
{
    /*
     �v�f����10�Ŋe�v�f��-1�ŏ�����
    */
    std::vector<int> vec(10, -1);
    for (int i = 0; i < 10; i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
