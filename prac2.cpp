#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter Two numbers" << endl;
    cin >> a >> b;
    try
    {
        float ans;
        if (b == 0)
        {
            throw ans;
        }
        else
        {
            ans = a / b;
            cout << ans << endl;
        }
    }
    catch (float ans)
    {
        cout << "div 0 error" << endl;
    }
    return 0;
}