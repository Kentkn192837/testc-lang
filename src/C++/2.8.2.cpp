#include <iostream>

int main()
{
    // -> void�Ɠ����Ӗ��ɂȂ�
    auto return_void = []()
    {
        std::cout << "�����Ԃ��Ȃ������_��" << std::endl;
    };

    // -> int�Ɠ���
    auto return_int = []()
    {
        return 42;
    };
}
