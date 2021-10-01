
#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
map<char,pair<char,char> >tree;
void preorder(char node) {//전위순회
	cout << node << " "; //현재 노드의 데이터 출력
	if (tree[node].first != NULL) { //왼쪽 자식이 있다면
		preorder(tree[node].first);
	}
	if (tree[node].second != NULL) { //오른쪽 자식이 있다면
		preorder(tree[node].second);
	}
}
void inorder(char node) {//중위순회
	if (tree[node].first != NULL) { //왼쪽 자식이 있다면
		inorder(tree[node].first);
	}
	cout << node << " "; //현재 노드의 데이터 출력
	if (tree[node].second != NULL) { //오른쪽 자식이 있다면
		inorder(tree[node].second);
	}
}
void postorder(char node) { //후위순회
	if (tree[node].first != NULL) { //왼쪽 자식이 있다면
		postorder(tree[node].first);
	}
	if (tree[node].second != NULL) { //오른쪽 자식이 있다면
		postorder(tree[node].second);
	}
	cout << node << " "; //현재 노드의 데이터 출력
}


int main()
{
    tree['A'] =make_pair('B','C');
    tree['B'] =make_pair('D',NULL);
    tree['D'] = make_pair(NULL, NULL);
    tree['C'] = make_pair('E', 'F');
    tree['E'] = make_pair(NULL, NULL);
    tree['F'] = make_pair(NULL, 'G');
    tree['G'] = make_pair(NULL, NULL);

    //cout << tree['A'].first <<endl;
    //cout << tree['B'].first <<endl;

    cout<<"preorder : "<<endl;
    preorder('A');
    cout <<endl;
    cout<<"inorder : "<<endl;
    inorder('A');
    cout <<endl;
    cout<<"postorder : "<<endl;
    postorder('A');
    cout <<endl;

    return 0;
}
