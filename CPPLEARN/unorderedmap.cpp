#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
// unordered_map
//  map���� �� ���� Ž���� �ϱ����� �ڷᱸ��
//  �ؽ����̺��� ������ �ڷᱸ���� Ž�� �ð� ���⵵�� 0(1)
//  map�� Binary Search Tree�� Ž�� �ð� ���⵵�� O(logN) �Դϴ�
//  �ߺ��� �����͸� �����ϰ�, map�� ���� �����Ͱ� ���� �� ���� ������ ����
//  ������ key�� ������ �����Ͱ� ���� �� �ؽ� �浹�� ���� ���� ���� ����
int main()
{
    unordered_map<string, int> unmap;

    if (unmap.empty())
        cout << "unordered_map is empty" << endl;

    unmap.insert(make_pair("key", 1));
    unmap["banana"] = 2;
    unmap.insert({"melon", 3});

    cout << "unordered_map�� ũ���" << unmap.size() << "�Դϴ�" << endl;

    for (pair<string, int> elem : unmap)
    {
        cout << "key : " << elem.first << "value : " << elem.second << endl;
    }

    // find ��� count�� Ȯ�� ����
    if (unmap.find("banana") != unmap.end())
    {
        unmap.erase("banana");
    }

    cout << "unordered_map�� ũ��� " << unmap.size() << " �Դϴ�" << endl;

    for (auto elem : unmap)
    {
        cout << "key : " << elem.first << " value : " << elem.second << endl;
    }
    return 0;
}
