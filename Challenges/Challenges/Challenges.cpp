#include <iostream>
#include <string>
#include <map>
#include <array>

template<typename T>
T Add(T num1, T num2)
{
    return num1 + num2;
}

template<typename T, typename T2>
class AtomicWrapper
{
public:
    T value;
    T2 value2;

    AtomicWrapper(T _value, T2 _value2) : value(_value), value2(_value2)
    {
    }

    void Display()
    {
        std::cout << "The values inside wrapper are value : " << value
            << " and value2 : " << value2 << std::endl;;
    }
};

int main()
{
    std::array<int, 6> numbers;
    numbers[0] = 9;

    std::array<char, 8> alphabets;
    alphabets[0] = 'a';

    AtomicWrapper<int, char> cardWrapper(3, 'e');
    cardWrapper.Display();

    AtomicWrapper<char, double> cardWrapper2('c', 7.2);
    cardWrapper2.Display();
}