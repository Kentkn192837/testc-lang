#include <iostream>

int main()
{
    // �����_���̐錾
    auto show = [](int i) -> void
    {
        std::cout << "i�̒l��" << i << "�ł��B" << std::endl;
    };
    
    show(42);
}
