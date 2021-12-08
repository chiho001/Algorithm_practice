#include<iostream>
#include<bits/stdc++.h>
// 정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.
// 1. X가 3으로 나누어 떨어지면, 3으로 나눈다.
// 2. X가 2로 나누어 떨어지면, 2로 나눈다.
// 3. 1을 뺀다.
// 정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.
//input
//첫째 줄에 1보다 크거나 같고, 10^6보다 작거나 같은 자연수 N이 주어진다.
//output
//첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.
//둘째 줄에는 N을 1로 만드는 방법에 포함되어 있는 수를 공백으로 구분해서 순서대로 출력한다. 정답이 여러 가지인 경우에는 아무거나 출력한다.
//input 
// 1
// output 
// 1
// 2 1
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int x=0;
int D[1000002];
int inf[1000002];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> x;

	D[1] = 0;
	inf[1] = 0;

	for (int i = 2; i <= x; i++) 
	{
		D[i] = D[i - 1] + 1;
		inf[i] = i - 1; // 어떤 연산을 했는지 쌓는 곳
		if (i % 2 == 0 && D[i] > D[i / 2] + 1) // i 값이 2로 나누어떨어지고, 횟수가 2나눠서 끝내는 거 보다 크다면
		{
			D[i] = D[i / 2] + 1;  // 2나누는 연산으로 횟수 증가
			inf[i] = i / 2; // 어떤 연산을 했는지 쌓는 곳
		}
		if (i % 3 == 0 && D[i] > D[i / 3] + 1) // i 값이 2로 나누어떨어지고, 횟수가 3나눠서 끝내는 거 보다 크다면
		{
			D[i] = D[i / 3] + 1; // 3나누는 연산으로 횟수 증가
			inf[i] = i / 3; // 어떤 연산을 했는지 쌓는 곳
		}
	}

	cout << D[x] << "\n";

	int cur = x;
	while (true) 
	{
		cout << cur << " ";
		if (cur == 1) break;
		cur = inf[cur];
	}

	return 0;
}