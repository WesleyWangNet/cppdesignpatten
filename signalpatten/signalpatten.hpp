#ifndef ___SIGNALPATTEN_HPP__
#define __SIGNALPATTEN_HPP__


class Singleton {
public:
    // 删除拷贝构造函数和赋值运算符
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // 获取单例实例的静态方法
    static Singleton& instance(void);
   
    // 示例成员函数
    void setValue(int value);
    int getValue() const;

private:
    Singleton();
    ~Singleton();    
    int m_value;
};


#endif
