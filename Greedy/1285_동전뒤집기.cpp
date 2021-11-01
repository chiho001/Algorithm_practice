#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int allmask;
	int n;
	int ans(0);
	vector<int> bitTable;
	string row;
	//H->1, 0 -> T
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	cin>>n;
	allmask=(1<<n)-1;
	for(int i=0;i<n;++i)
	{
		int r(0);
		cin>>row;
		for(int j=0;j<n;++j)
		{
			r|=(row[j]=='H')?(1<<j):0;
		}
		bitTable.push_back(r);
	}
	for(int flipBit=0;flipBit<=allmask;++flipBit)
	{
		int sum(0);
		for(int r=0;r<n;++r)
		{
			int H_cnt(0);
			for(int c=0;c<n;++c)
			{
				bool isH=bitTable[r]&(1<<c);
				if((1<<c)&flipBit)
				{
					isH=!isH;
				}
				H_cnt+=isH;
			}
			sum+=max(H_cnt,n-H_cnt);
		}
		ans=max(ans,sum);
	}
	cout<<(n*n)-ans;
   	return 0;
}