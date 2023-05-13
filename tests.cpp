#include <iostream>
#include <limits>

void check_type_size()
{
    std::cout << "int: " << sizeof(int) << " min: " << std::numeric_limits<int>::min() << " max: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "float: " << sizeof(float) << " min: " << std::numeric_limits<float>::min() << " max: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "double: " << sizeof(double) << " min: " << std::numeric_limits<double>::min() << " max: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "char: " << sizeof(char) << " min: " << std::numeric_limits<char>::min() << " max: " << std::numeric_limits<char>::max() << std::endl;

    std::cout << "int8_t: " << sizeof(int8_t) << " min: " << std::numeric_limits<int8_t>::min() << " max: " << std::numeric_limits<int8_t>::max() << std::endl;
    std::cout << "int16_t: " << sizeof(int16_t) << " min: " << std::numeric_limits<int16_t>::min() << " max: " << std::numeric_limits<int16_t>::max() << std::endl;
    std::cout << "int32_t: " << sizeof(int32_t) << " min: " << std::numeric_limits<int32_t>::min() << " max: " << std::numeric_limits<int32_t>::max() << std::endl;
    std::cout << "int64_t: " << sizeof(int64_t) << " min: " << std::numeric_limits<int64_t>::min() << " max: " << std::numeric_limits<int64_t>::max() << std::endl;

    std::cout << "uint8_t: " << sizeof(uint8_t) << " min: " << std::numeric_limits<uint8_t>::min() << " max: " << std::numeric_limits<uint8_t>::max() << std::endl;
    std::cout << "uint16_t: " << sizeof(uint16_t) << " min: " << std::numeric_limits<uint16_t>::min() << " max: " << std::numeric_limits<uint16_t>::max() << std::endl;
    std::cout << "uint32_t: " << sizeof(uint32_t) << " min: " << std::numeric_limits<uint32_t>::min() << " max: " << std::numeric_limits<uint32_t>::max() << std::endl;
    std::cout << "uint64_t: " << sizeof(uint64_t) << " min: " << std::numeric_limits<uint64_t>::min() << " max: " << std::numeric_limits<uint64_t>::max() << std::endl;
}

int main()
{
    check_type_size();
    return 0;
}