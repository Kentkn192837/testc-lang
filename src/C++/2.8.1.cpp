#include <iostream>

int main()
{
    // ラムダ式の宣言
    auto show = [](int i) -> void
    {
        std::cout << "iの値は" << i << "です。" << std::endl;
    };
    
    show(42);
}
