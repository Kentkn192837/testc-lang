#include <iostream>
#include <vector>

int main()
{
    /*
     —v‘f”‚ª10‚ÅŠe—v‘f‚ğ-1‚Å‰Šú‰»
    */
    std::vector<int> vec(10, -1);
    for (int i = 0; i < 10; i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
