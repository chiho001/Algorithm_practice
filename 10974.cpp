// ConsoleApplication3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

//#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;

	vector<int> v(N);
	for (int i = 1; i <= N; i++) {
		v[i - 1] = i;
	}
	do {
		for (int i = 0; i < N; i++) 
			cout << v[i] << " ";
			
		cout << "\n";

	} while (next_permutation(v.begin(), v.end()));

	return 0;
	
}
