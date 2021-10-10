#include<iostream>
#include<map>
#include<string>

using namespace std;
int N,T;
int ans;
string s1,s2;

int main(){
    cin >> T; // test case number

    while(T--)
    {
        map<string,int>m; //Map(의상종류,의상수)

        ans = 1;
        cin >> N; //의 상 수

        for(int i=0;i<N; i++)
        {
            cin >> s1 >> s2;

            if(m.find(s2)==m.end())
            {
                m[s2]=1;
            }
            else
            {
                m[s2]++;
            }
        }
        for(auto iter : m)
            ans *= (iter.second+1);

        cout << ans-1 << endl;
    }
}