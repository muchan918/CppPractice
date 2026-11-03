#include <iostream>

class Animal
{
private:
    int food;
    int weight;

public:
    void set_animal(int _food, int _weight)
    {
        food = _food;
        weight = _weight;
    }

    void increase_food(int inc)
    {
        food += inc;
        weight += (inc / 3);
    }

    void view_stat()
    {
        std::cout << "이 동물의 food: " << food << std::endl;
        std::cout << "이 동물의 weight: " << weight << std::endl;
    }
};

int main(int, char**)
{
    Animal animal;
    animal.set_animal(100, 50);
    animal.increase_food(30);
    animal.view_stat();

    return 0;
    // int arr_size;
    // std::cout << "arr_size = ";
    // std::cin >> arr_size;
    // int* list = new int[arr_size];
    // for (int i = 0; i < arr_size; i++)
    // {
    //     std::cin >> list[i];
    // }
    // for (int i = 0; i < arr_size; i++)
    // {
    //     std::cout << i << "th element of list : " << list[i] << std::endl;
    // }
    // delete[] list;
    // return 0;

    // int* p = new int;
    // *p = 10;

    // std::cout << *p << std::endl;

    // delete p;
    // return 0;
}
