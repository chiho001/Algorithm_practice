#include <iostream>
#include <algorithm>

using namespace std;

int arr[1005] = {0};
int dp[1005] = {0};
int yui[1005] = {0};

int main(void){
  int n;
  int currentmax = 0;
  int result = 0;
  cin >> n;
  for(int i = 1; i <= n; i++){
    cin >> arr[i];
  }
  
  for(int i = 1; i <= n; i++){
    currentmax = 0;
    for(int j = 0; j <= i-1; j++){
      if(arr[j] < arr[i]){
        currentmax = max(currentmax, dp[j]);
      }
    }
    dp[i] = currentmax+1;
    result = max(result, dp[i]);
  }
  int cnt = result;
  for(int i = n; i>=1; i--){
    if(dp[i] == cnt){
      yui[cnt] = arr[i];
      cnt--;
    }
    if(cnt == 0) break;
  }
  cout << result << '\n';
  for(int i = 1; i <= result; i++){
    cout << yui[i] << ' ';
  }

}