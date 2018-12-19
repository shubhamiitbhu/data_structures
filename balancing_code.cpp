#include<iostream>
#include <stack>
using namespace std;


int balance(string p, int n)
{
    stack<char> S;
    char temp;
    for(int i=0; i<n ; i++)
    {
        if (p[i] == '(' || p[i] == '{' || p[i] == '[')
        { S.push(p[i]) ; }

        else
        {   if ( S.empty() )
            { return 0; }

            temp = S.top();

            if ( (temp=='(' && p[i] == ')') || (temp=='{' && p[i] == '}') || (temp=='[' && p[i] == ']'))

            { continue; }

            else {return 0;}
        }
    }
    return 1;
}

int length (string p)
{
    int i=0;
    while (p[i] != '\0') {i++ ; }
    return i;
}
int main()
{

    string p;
    cin >> p;
    int size = length(p);
    int res;
    res = balance(p, size);

    if (res) {cout << "True"; } else {cout << "False";}

    return 0;

}
