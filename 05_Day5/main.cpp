#include <iostream>

class Date
{
    int year_;
    int month_;
    int day_;

public:
    void ShowDate();

    Date()
    {
        year_ = 2012;
        month_ = 7;
        day_ = 12;
    }

    Date(int year, int month, int day)
    {
        std::cout << "인자 3 개인 생성자 호출" << std::endl;
        year_ = year;
        month_ = month;
        day_ = day;
    }
};

void Date::ShowDate()
{
    std::cout << "오늘은 " << year_ << "년 " << month_ << "월 " << day_ << "일" << std::endl;
}

int main(int, char**)
{
    Date day = Date(2013, 2, 1);
    Date day2;

    day.ShowDate();
    day2.ShowDate();
}
