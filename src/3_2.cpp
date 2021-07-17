#include <iostream>
#include <string>

int main()
{
    std::string word("Hello World");
    std::string comment = "Commment";

    std::string::size_type size = word.size();
    std::cout << "size: " << size << std::endl;

    std::cout << "comment: " << comment << std::endl;

    
    return 0;
}
