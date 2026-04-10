#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Sanskar";
    m[2] = "Rahul";
    m[3] = "Aman";

    for(auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }

    return 0;
}