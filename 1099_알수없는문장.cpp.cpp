// 문제
// 형택이와 그의 친구들은 자꾸 다른 사람들이 대화를 엿듣는 것이 짜증났다. 따라서, 새로운 언어를 만들었다.

// 이 언어에는 단어가 N개 있다. 그리고 이 언어의 문장은 단어를 공백없이 붙여쓴 것이다. 이 문장에서 각 단어는 0번 또는 그 이상 나타날 수 있다. 
//이 언어가 형택스러운 이유는 (특별한 이유는) 단어에 쓰여 있는 문자의 순서를 바꿔도 되기 때문이다. 
//이때, 원래 단어의 위치와 다른 위치에 있는 문자의 개수 만큼이 그 순서를 바꾼 단어를 만드는 비용이다. 
//예를 들어, abc란 단어가 있을 때, abc는 비용 0으로 만들 수 있고, acb, cba, bac는 비용 2로 바꿀 수 있고, bca, cab는 비용 3으로 바꿀 수 있다.

// 따라서, 한 문장을 여러 가지 방법으로 해석할 수 있다. 이때 비용의 최솟값을 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 문장이 주어진다. 문장의 길이는 최대 50이다. 
// 둘째 줄에 단어의 개수 N이 주어지며, N은 50보다 작거나 같은 자연수이다. 
// 셋째 줄부터 N개의 줄에 각 단어가 주어진다. 단어의 길이는 최대 50이다. 문장과 단어는 알파벳 소문자로만 이루어져 있다.

//input
// neotowheret
// 4
// one
// two
// three
// there
//Output
// 8
#pragma warning(disable:4996)

#include<vector>
#include<string>
#include<iostream>
#include<memory.h>
#include <algorithm>
using namespace std;

static unsigned int cost=0;
const int numAlpabet = 26;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    string strInput;
    char arr_strInput[50];
    char arr_SecondInput[50];
    int iNum;

    cin >> strInput;
    strcpy(arr_strInput,strInput.c_str());
    cin >> iNum;
    vector<string> vec_strWord(iNum);

    for(int i=0;i<iNum;i++)
    {
        string strTemp;
        cin >> strTemp;
        vec_strWord[i]=(strTemp);
        strcpy(arr_SecondInput,vec_strWord[i].c_str());
    }
    vector<int> dp(strInput.length()+1, 100000);
    dp[0] = 0;

    for(int i=0;i< strInput.length();i++)
    {
        for(int j=0;j<iNum;j++)
        {
            string strTemp = vec_strWord[j];
            int size_strTemp = strTemp.size();
            
            if (size_strTemp > i + 1)
            {
                continue;
            }
            
            vector<int> cnt(numAlpabet);
            vector<int> cnts(numAlpabet);
            for (char c : strTemp)
            {
                cnt[c - 'a']++;
            }
            for (int k = 0; k < size_strTemp; k++)
            {
                cnts[strInput[i- k] - 'a']++;
            }
            
            int test=1;

            for (int k = 0; k < numAlpabet; k++)
            {
                
                if(cnt[k] == cnts[k])
                {
                    test = 1;
                }
                else
                {
                    test = 0;
                    break;
                }
                
            }
            
            if (test ==0)
            {
                continue;
            }
            
            int val = 0;
            for (int k = 0; k < size_strTemp; k++)
            {   
                if ((strInput[i + 1 - size_strTemp + k] != strTemp[k]))
                {
                    val += 1;
                }
          
            }
            
            dp[i + 1] = min(dp[i + 1], dp[i + 1 - size_strTemp] + val);



        }

    }
    if (dp[strInput.length()] == 100000)
    {
        cout << -1;
    }
    else 
    {
        cout << dp[strInput.length()];
    }


    return 0;
}


