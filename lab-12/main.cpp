#include <iostream>
#include "Vector.h"
using namespace std;

int main()
{
    Vector<int> values;
    values.PushBack(1);
    values.PushBack(2);
    values.PushBack(3);
    values.PushBack(4);
    values.PushBack(5);

    Vector<int> vec;
    for (int i = 1; i < 6; ++i)
    {
        vec.PushBack(2 * i);
    }

    cout << "The vector vec reversed is: ( ";
    for (Vector<int>::Iterator rvIter = values.rbegin(); rvIter != values.rend(); rvIter++)
        cout << *rvIter << " ";
    cout << ")." << endl;

    cout << "The vector vec reversed is: ( ";
    for (Vector<int>::Iterator rvIter = vec.rbegin(); rvIter != vec.rend(); rvIter++)
        cout << *rvIter << " ";
    cout << ")." << endl;
}
