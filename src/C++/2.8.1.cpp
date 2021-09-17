#include <iostream>

int main()
{
    // ƒ‰ƒ€ƒ_Ž®‚ÌéŒ¾
    auto show = [](int i) -> void
    {
        std::cout << "i‚Ì’l‚Í" << i << "‚Å‚·B" << std::endl;
    };
    
    show(42);
}
