#include <iostream>

int main()
{
    // -> voidと同じ意味になる
    auto return_void = []()
    {
        std::cout << "何も返さないラムダ式" << std::endl;
    };

    // -> intと同じ
    auto return_int = []()
    {
        return 42;
    };
}
