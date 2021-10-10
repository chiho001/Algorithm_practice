#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

int arrdx[4] = {0,0,1,-1}; // 동서남북
int arrdy[4] = {1,-1,0,0}; //
vector<vector<int> > v2;
enum Move
{
    R,
    W,
    S,
    N
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int NN;
    int dx = 1;
    int dy = 1;
    cin >> NN;// 1<=N<=100
    vector<int> vx;
    vector<int> vy;
    char* temp;
    int Moving;
    for(int i=0;i<NN; i++)
    {    
        cin >> temp;
        if(!strcmp(temp,"R"))
        {
            Moving = R;
        }
        else if(!strcmp(temp,"W"))
        {
            Moving = W;
        }
        else if(!strcmp(temp,"S"))
        {
            Moving = S;
        }
        else if(!strcmp(temp,"N"))
        {
            Moving = N;
        }
        else
        {

        }

        switch(Moving)
        {
            case R :
                vx.push_back(arrdx[0]);
                vy.push_back(arrdy[0]);
                break;
            case W :
                vx.push_back(arrdx[1]);
                vy.push_back(arrdy[1]);
                break;
            case S :
                vx.push_back(arrdx[2]);
                vy.push_back(arrdy[2]);
                break;
            case N :
                vx.push_back(arrdx[3]);
                vy.push_back(arrdy[3]);
                break;
        }
    }
    for(int i=0;i<NN; i++)
    {    
        if((1<=dx+vx[i]) && (dx+vx[i]<=N) && (1<=dy+vy[i]) && (dy+vy[i]<=N))
        {
            dy+=vx[i];
            dy+=vx[i];
        }
        else
        {
            continue;
        }

    }

    cout << dx << " " << dy;

    return 0;
}