// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>
//https://www.geeksforgeeks.org/vector-in-cpp-stl/
using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";
    cout<<'\n';

    vector<int> g2;
    for (int i = 1; i <= 5; i++)
        g2.push_back(i);

    cout << "Size : " << g2.size();
    cout << "\nCapacity : " << g2.capacity();
    cout << "\nMax_Size : " << g2.max_size();

    // resizes the vector size to 4
    g2.resize(4);

    // prints the vector size after resize()
    cout << "\nSize : " << g2.size();

    // checks if the vector is empty or not
    if (g2.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    g2.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g2.begin(); it != g2.end(); it++)
        cout << *it << " ";

    return 0;
}