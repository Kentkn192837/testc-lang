#include <iostream>

int main()
{
    // �ʏ�\�L�ŕ��������_�����o��
    std::cout << 123.456f << std::endl;

    // �ʏ�\�L�Ő������o��
    std::cout << 123456 << std::endl;

    // �Ȋw�Z�p�\�L�ɕύX
    std::cout.setf(std::ios::scientific);

    // �Ȋw�Z�p�\�L�ŏo�͂����
    std::cout << 123.456f << std::endl;
    
    // �����ɂ͉e���Ȃ�
    std::cout << 123456 << std::endl;

    // 16�i���\�L�ɕύX
    std::cout.setf(std::ios::hex);

    // ���������_����16�i���\�L�ɂȂ�Ȃ�
    std::cout << 123.456f << std::endl;

    // ���̎��_�ł͕ω��Ȃ�
    std::cout << 123456 << std::endl;

    // 10�i���\�L���A���Z�b�g
    std::cout.unsetf(std::ios::dec);

    std::cout << "std::cout.unsetf(std::ios::dec);" << std::endl;
    std::cout << 123456 << std::endl;
}
