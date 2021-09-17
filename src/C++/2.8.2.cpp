#include <iostream>

int main()
{
    // -> void‚Æ“¯‚¶ˆÓ–¡‚É‚È‚é
    auto return_void = []()
    {
        std::cout << "‰½‚à•Ô‚³‚È‚¢ƒ‰ƒ€ƒ_Ž®" << std::endl;
    };

    // -> int‚Æ“¯‚¶
    auto return_int = []()
    {
        return 42;
    };
}
