#include <iostream>
// constメンバー関数にすることで、constで宣言されたインスタンスでもメンバー関数が呼び出せる
class Product
{
    int id;
public:
    int get_id() const;
    void set_id(int new_id);
};

int Product::get_id() const
{
    return id;
}

void Product::set_id(int new_id)
{
    id = new_id;
}

int main()
{
    const Product cp{};

    std::cout << cp.get_id() << std::endl;
}
