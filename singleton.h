#ifndef SINGLETON_H
#define SINGLETON_H


class Singleton
{
private:
    explicit Singleton(int value = 0);
public:
    static Singleton& Instance();
    ~Singleton();


    Singleton(const Singleton& other) = delete;
    Singleton& operator = (const Singleton& other) = delete;


    void setValue(int value);
    int getValue() const;

private:
    int _value;

};

#endif // SINGLETON_H
