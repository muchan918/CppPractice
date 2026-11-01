#include <iostream>

namespace
{
    void Hello()
    {
        std::cout << "namespace test" << std::endl;
    }
}

int main(int, char **)
{
    std::cout << "Hello, from 02_Day2!\n";

    Hello();
}
