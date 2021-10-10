#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

string inputData;
//나이트가 이동할 수 있는 8 가지 방향의 정의
int dx[] = {-2,-1,1,2,2,1,-1,-2};
int dy[] = {-1,-2,-2,-1,1,2,2,1};

int main()
{
    //현재 나이트의 위치 입력받기
    cin >> inputData;
    int row = inputData[1]-'0';
    int column = inputData[0]-'a'+1;

    //8가지 방향에 대하여 각 위치로 이동이 가능한지 확인
    int result =0;
    for(int i =0;i<8;i++)
    {
        //이동하고자 하는 위치 확인
        int newRow = row + dx[i];
        int newColumn = column + dy[i];
        // 해당 위치로 이동이 가능하다면 카운트 증가
        if(newRow >= 1 && newRow <=8 && nextColumn>=1 && newColumn <=8)
        {
            result+=1;

        }

    }
    cout << result << '\n';
    return 0;
}

// 나의 풀이 
// int cnt;
// void check(int col,char row)
// {
//     // 행 -2 열 +1
//     if(col+1 <=8) 
//     {
//         if('a'<=row-2)
//         {
//             cnt++;
//         }
//     }
//     // 행 -2 열 -1
//     if(1<=col-1) 
//     {
//         if('a'<=row-2)
//         {
//             cnt++;
//         }
//     }
//     // 행 +2 열 +1
//     if(col+1 <=8) 
//     {
//         if(row+2<='h')
//         {
//             cnt++;
//         }
//     }
//     // 행 +2 열 -1
//     if(1<=col-1) 
//     {
//         if(row+2<='h')
//         {
//             cnt++;
//         }
//     }
//     // 행 +1 열 +2 
//     if(col+2 <=8) 
//     {
//         if(row+1<='h')
//         {
//             cnt++;
//         }
//     }
//     // 행 -1 열 +2
//     if(col+2 <=8) 
//     {
//         if('a'<=row-1)
//         {
//             cnt++;
//         }
//     }
//     // 행 +1 열 -2
//     if(1<=col-2) 
//     {
//         if(row+1<='h')
//         {
//             cnt++;
//         }
//     }
//     // 행 -1 열 -2 
//      if(1<=col-2) 
//     {
//         if('a'<=row-1)
//         {
//             cnt++;
//         }
//     }
// }

// int main()
// {

//     char column;
//     int row;

//     cin >> column;
//     cin >> row;

//     check(column,row);

//     cout << cnt;

//     return cnt;
// }