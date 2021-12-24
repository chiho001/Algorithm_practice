#include <iostream>
#include <algorithm>
using namespace std;

long long output[91];
void fibonacci(int temp)
{
	output[0] = 0;
	output[1] = 1;
	if(temp == 0)
	{
		return;
	}
	else if (temp ==1)
	{
		return;
	}
	else
	{
		for(int i=2;i<=temp;i++)
		{
			output[i] = output[i-1]+ output[i-2];
		}
		return;
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int input;
	
	cin >> input;
	fibonacci(input);
	cout << output[input];
	
}