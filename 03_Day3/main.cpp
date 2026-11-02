#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int change_val(int* p)
{
    *p = 3;

    return 0;
}

int change_val2(int& p)
{
    p = 3;

    return 0;
}

int& function(int& a)
{
    a = 2;
    return a;
}

int main(int, char**)
{
    int b = 2;
    int c = function(b);

    cout << b << c << endl;

    return 0;

    // int b = function();
    // b = 3;
    // return 0;

    // int number = 5;

    // cout << number << endl;
    // change_val2(number);
    // cout << number << endl;

    // int a = 3;
    // int& another_a = a;

    // another_a = 5;
    // cout << "a: " << a << endl;
    // cout << "another_a: " << another_a << endl;

    // return 0;

    // int number = 0;

    // cout << number << endl;
    // change_val(&number);
    // cout << number << endl;

    // int user_input;
    // cout << "저의 정보를 표시해줍니다" << endl;
    // cout << "1. 이름" << endl;
    // cout << "2. 나이" << endl;
    // cout << "3. 성별" << endl;
    // cin >> user_input;

    // switch (user_input)
    // {
    // case 1:
    //     cout << "muchan" << endl;
    //     break;
    // case 2:
    //     cout << "1223" << endl;
    //     break;
    // case 3:
    //     cout << "남자" << endl;

    // default:
    //     cout << "궁금한게 없군" << endl;
    //     break;
    // }

    // return 0;
}
