#include <iostream>

class Product
{
    int id;
public:
    int get_id();       // ��const�����o�[�֐�
    int get_id() const; // const�����o�[�֐�
};

int Product::get_id()
{
    std::cout << "��const�����o�[�֐���get_id()���Ă΂�܂����B" << std::endl;
    return id;
}

int Product::get_id() const
{
    std::cout << "const�����o�[�֐���get_id()���Ă΂�܂����B" << std::endl;
    return id;
}

int main()
{
    Product p;
    p.get_id();     // ��const�����o�[�֐����Ă΂��

    const Product cp{};
    cp.get_id();    // const�����o�[�֐����Ă΂��
}
