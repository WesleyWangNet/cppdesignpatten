#include <iostream>

#include "signalpatten.hpp"

Singleton::Singleton():m_value(0) {}
Singleton::~Singleton() = default;

void Singleton::setValue(int value)
{
    m_value = value;
}

int Singleton::getValue() const
{
    return m_value;
}


Singleton& Singleton::instance(void)
{
    static Singleton instance;
    return instance;
}

int main() {
    // 获取单例实例
    Singleton& s1 = Singleton::instance();
    s1.setValue(42);

    // 验证是否是同一个实例
    Singleton& s2 = Singleton::instance();
    std::cout << "s1 value: " << s1.getValue() << std::endl;  // 42
    std::cout << "s2 value: " << s2.getValue() << std::endl;  // 42
    std::cout << "Address comparison: " << &s1 << " == " << &s2 << std::endl;

    return 0;
}

