#include <iostream>
#include "Counter.h"

using namespace std;


    Counter::Counter()
    {
        count = 0;
    }

    Counter::Counter(int count)
    {
        this->count = count;
    }

    void Counter::sum()
    {
        count++;
    }

    void Counter::dif()
    {
        count--;
    }

    void Counter::show()
    {
        cout << "Текущее значение: " << count << endl;
    }

void clear()
{
    cin.clear();
    cin.ignore(10000, '\n');
}