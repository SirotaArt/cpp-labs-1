#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <deque>
#include <string>
using namespace std;

void print(vector<int> B)
{
    vector<int>::iterator iter = B.begin();
    vector<int>::iterator iter_2 = B.end();

    while (iter != iter_2)
    {
        cout << *iter << " ";
        ++iter;
    }
}

void print(deque<int> B)
{
    deque<int>::iterator iter = B.begin();
    deque<int>::iterator iter_2 = B.end();

    while (iter != iter_2)
    {
        cout << *iter << " ";
        ++iter;
    }
}

int main()
{

    cout << endl
         << "Task 1" << endl;
    cout << "Enter the values. To end the set, enter stop" << endl;

    vector<int> A;
    int n = 0;

    while (n == 0)
    {
        string a;
        cin >> a;

        if (a == "stop")
        {
            n = 1;
            break;
        }

        else
        {
            int b = stoi(a);
            A.push_back(b);
        }
    }

    cout << "Vector: ";
    print(A);
    cout << endl;

    vector<int>::iterator iter_1 = A.begin();
    vector<int>::iterator iter_2 = A.end();

    sort(iter_1, iter_2);
    cout << "Sorted vector: ";
    print(A);
    cout << endl;

    reverse(iter_1, iter_2);
    cout << "Reversed vector: ";
    print(A);
    cout << endl;

    int sum = 0;
    int lenght = 0;
    int e = 0;

    while (e == 0)
    {
        sum += *iter_1;
        lenght++;
        ++iter_1;

        if (iter_1 == iter_2)
        {
            break;
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Lenght: " << lenght << endl;

    // 2
    cout << endl
         << "Task 2" << endl;

    vector<int> B = {1, 3, 4};

    back_insert_iterator<vector<int>> back_inserter(B);
    *back_inserter = 5;
    print(B);
    cout << endl;

    insert_iterator<vector<int>> inserter(B, B.begin() + 1);
    *inserter = 2;
    print(B);
    cout << endl;

    B.erase(B.begin());
    print(B);
    cout << endl;

    deque<int> H = {99, 100};

    back_insert_iterator<deque<int>> front_inserter(H);
    *front_inserter = 101;
    print(H);
    cout << endl;

    // 3
    cout << endl
         << "Task 3" << endl;
    vector<int> C = {10, 11, 12};

    ofstream txt_2("file2.txt", ios_base::out);

    if (txt_2.is_open())
    {
        vector<int>::iterator iter_1 = C.begin();
        vector<int>::iterator iter_2 = C.end();

        while (iter_1 != iter_2)
        {
            txt_2 << *iter_1 << " ";
            ++iter_1;
        }

        txt_2.close();
    }

    else
    {
        cout << "Error";
    }

    vector<int> D;
    ifstream txt_1("file2.txt");
    int y;

    while (txt_1 >> y)
    {
        D.push_back(y);
    }

    txt_1.close();
    print(D);

    // 4
    cout << endl
         << "Task 4" << endl;
    deque<int> deque;
    vector<int> vector = {7, 8, 9};

    std::vector<int>::iterator vector_iter = vector.begin();

    while (vector_iter != vector.end())
    {
        deque.push_back(*vector_iter);
        ++vector_iter;
    }

    print(deque);

    // 5
    cout << endl
         << "Task 5" << endl;

    std::vector<int> E;
    cout << "Enter the values. To end the set, enter stop" << endl;
    int g = 0;

    while (g == 0)
    {
        string a;
        cin >> a;

        if (a == "stop")
        {
            g = 1;
            break;
        }

        else
        {
            int b = stoi(a);
            E.push_back(b);
        }
    }

    reverse_iterator<std::vector<int>::iterator> iterE = E.rbegin();
    while (iterE != E.rend())
    {
        cout << *iterE << " ";
        ++iterE;
    }

    return 0;
}