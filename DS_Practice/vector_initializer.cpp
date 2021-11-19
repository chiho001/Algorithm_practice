#include<iostream>
#include<vector>


using namespace std;
int main()
{
    vector<int> vec_test(3);

    vec_test.push_back(1);
    vec_test.push_back(2);

    for(vector<int>::iterator it=vec_test.begin();it!=vec_test.end() ;++it)
    {
        cout << *it << endl;

    }    


    

    cout << "잘돼었나"<<endl;


    return 0;
}