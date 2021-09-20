#include <iostream>

class Product
{
    int id;
public:
    int get_id();       // 非constメンバー関数
    int get_id() const; // constメンバー関数
};

int Product::get_id()
{
    std::cout << "非constメンバー関数のget_id()が呼ばれました。" << std::endl;
    return id;
}

int Product::get_id() const
{
    std::cout << "constメンバー関数のget_id()が呼ばれました。" << std::endl;
    return id;
}

int main()
{
    Product p;
    p.get_id();     // 非constメンバー関数が呼ばれる

    const Product cp{};
    cp.get_id();    // constメンバー関数が呼ばれる
}
