#include <iostream>
#include <vector>
#include <string>

int main()
{
    /*
     —v‘f”‚ª10‚ÅŠe—v‘f‚ğ-1‚Å‰Šú‰»
    */
    std::vector<int> vec(10, -1);
    for (size_t i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << std::endl;
    }

    return 0;
}
