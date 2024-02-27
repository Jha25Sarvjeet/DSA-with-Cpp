/* find the number obtained after reversing the bits of a given 32 bits unsigned integer ‘n’.*/
#include <iostream>
#include <cmath>
using namespace std;
long reverseBits(long n)
{
    // Write your code here.
    long ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int t = n & 1;
        ans = ans + t * pow(2, 31 - i);
        n = n >> 1;
    }
    return ans;
}
int main()
{
    long a;
    cout << "enter a number" << endl;
    cin>>a;
    long ans =reverseBits(a);
    cout<<"no after reversing bits is"<<ans;

        return 0;
}