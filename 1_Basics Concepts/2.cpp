/*Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.

*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    if(a>b){
		cout<< "greater";
	}
	else if(a<b)
		cout<<"smaller";
	else{
		cout<<"equal";
	}

    return 0;
}