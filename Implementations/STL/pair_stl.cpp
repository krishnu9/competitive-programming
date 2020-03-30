//CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;
/*
https://www.geeksforgeeks.org/pair-in-cpp-stl/

Different ways to initialize pair:

pair  g1;         //default
pair  g2(1, 'a');  //initialized,  different data type
pair  g3(1, 10);   //initialized,  same data type
pair  g4(g3);    //copy of g3

Another way to initialize a pair is by using the make_pair() function.

g2 = make_pair(1, 'a');

swapping:
pair1.swap(pair2);
*/
int main()
{
    pair<int, char> PAIR1;
    pair<string, double> PAIR2("GeeksForGeeks", 1.23);
    pair<string, double> PAIR3;

    PAIR1.first = 100;
    PAIR1.second = 'G';

    PAIR3 = make_pair("GeeksForGeeks is Best", 4.56);

    cout << PAIR1.first << " ";
    cout << PAIR1.second << endl;

    cout << PAIR2.first << " ";
    cout << PAIR2.second << endl;

    cout << PAIR3.first << " ";
    cout << PAIR3.second << endl;

    return 0;
}
