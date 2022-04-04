#include <iostream>
using namespace std;

int main() {
    int n = 0, a = 1, b = 1,c=0;
    cin >> n;
    if(n>=1)
    {
        cout << a << endl;
        cout << b << endl;
        while(n>=(a+b))
        {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
        }
    }

    return 0;
}

