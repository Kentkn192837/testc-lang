#include <iostream>
#include <string>

int main()
{
    // •¶š—ñ‚ÌŒ‹‡
    std::string strA = "Hello, ";
    std::string strB = "world.";
    std::string strC = strA + strB; // Œ‹‡
    std::cout << strC << std::endl;

    if (strC == "Hello, world.") { //•¶š—ñ‚Ì”äŠr
        std::cout << "ok." << std::endl;
    }
}
