#include <iostream>

class Heavy_class
{
    int m_value;
    mutable int m_cache;
    mutable bool m_cache_valid;
public:
    int generate() const;
    void set(int value);
    int get() const;
};

int Heavy_class::generate() const
{
    std::cout << "とても重いデータ生成関数" << std::endl;
    return m_value;
}

void Heavy_class::set(int value)
{
    m_cache_valid = false;
    m_value = value;
}

int Heavy_class::get() const
{
    if (m_cache_valid) { return m_cache; }
    m_cache = generate();
    m_cache_valid = true;
    return m_cache;
}

int main()
{
    Heavy_class heavy_object;
    heavy_object.set(100);
    std::cout << heavy_object.get() << std::endl;
    // データ生成関数は呼ばれず、キャッシュが返される
    std::cout << heavy_object.get() << std::endl;

    heavy_object.set(200);
    std::cout << heavy_object.get() << std::endl;
    // データ生成関数は呼ばれず、キャッシュが返される
    std::cout << heavy_object.get() << std::endl;
}
