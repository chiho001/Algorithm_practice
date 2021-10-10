#include<iostream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
void print(const std::unordered_set<int>& container)
{
    for(const auto& elem : container)
        std::cout << elem << " ";
    std::cout << std::endl;
}
void print(const std::unordered_map<int>& container)
{
    for(const auto& elem : container)
        std::cout << elem << " ";
    std::cout << std::endl;
}
void find(const unordered_set<int>& container, const int element)
{
    if(container.find(element) == container.end())
        cout << element << " 검색: 실패"<<endl;
    else
        cout << element << " 검색: 성공"<<endl;

}
void find(const unordered_map<int>& container, const int element)
{
    auto it = container.find(element);
    if(container.find(element) == container.end())
        cout << element << " 검색: 실패"<<endl;
    else
        cout << element << " 검색: 성공, 값 = "<<it->second << endl;
}
int main()
{
    cout << "*** unordered_set example ***"<<endl;
    unordered_set<int> set1 = {1,2,3,4,5};

    cout << "set1 초기 값 : ";
    print(set1);

    set1.insert(2);
    cout << "2 삽입 : "; 
    print(set1);

    set1.insert(10);
    set1.insert(300);
    cout << "10,300 삽입 : ";
    print(set1); 

    return 0;
}
