#include <iostream>
using namespace std;

template <typename T, typename U>
void pattern(T arr[], int a, U b, int x)
{
    int count = 0;

    switch (x)
    {

    case 0:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] > b)
            {
                count += 1;
            }
        }
        break;

    case 1:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] < b)
            {
                count += 1;
            }
        }
        break;

    case 2:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] >= b)
            {
                count += 1;
            }
        }
        break;

    case 3:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] <= b)
            {
                count += 1;
            }
        }
        break;

    case 4:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] == b)
            {
                count += 1;
            }
        }
        break;

    case 5:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] % b == 0)
            {
                count += 1;
            }
        }
        break;

    case 6:
        for (int i = 0; i < a; ++i)
        {
            if (arr[i] % b != 0)
            {
                count += 1;
            }
        }
        break;
    }

    cout << count;
    cout << endl;
}

int main()
{
    int numbers0[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1000};

    pattern(numbers0, 10, 'a', 0);
    pattern(numbers0, 10, 4, 1);
    pattern(numbers0, 10, false, 2);
    pattern(numbers0, 10, 6, 3);
    pattern(numbers0, 10, true, 4);
    pattern(numbers0, 10, 3, 5);
    pattern(numbers0, 10, 2, 6);

    cout << endl;

    bool numbers1[10] = {true, true, true, false, false, true, false, true, false, true};

    pattern(numbers1, 10, 'a', 0);
    pattern(numbers1, 10, 4, 1);
    pattern(numbers1, 10, false, 2);
    pattern(numbers1, 10, 6, 3);
    pattern(numbers1, 10, true, 4);
    pattern(numbers1, 10, 3, 5);
    pattern(numbers1, 10, 2, 6);

    cout << endl;

    char numbers2[11] = {'a', 'b', 'c', 'd', 'i', 'f', 'g', 'h', 'x', 'y', 'z'};

    pattern(numbers2, 11, 'x', 0);
    pattern(numbers2, 11, 4, 1);
    pattern(numbers2, 11, false, 2);
    pattern(numbers2, 11, 6, 3);
    pattern(numbers2, 11, true, 4);
    pattern(numbers2, 11, 3, 5);
    pattern(numbers2, 11, 2, 6);

    cout << endl;
}
