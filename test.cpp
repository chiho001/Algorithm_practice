/* 포인터를 이용해 실제 사용되는 자료구조 이진트리 동일하게 구현 - 2019/12/24 xtar.tistory */ 
#include <iostream> 
using namespace std; 
template <typename T> 
class Node{
private:
    T value;
    Node* left;
    Node* right;
    Node* root;
public:
    Node() : value(0),left(nullptr),right(nullptr),root(nullptr){};
    Node(T _value) :value(_value), right(nullptr), root(nullptr) {}; 
    Node(T _value,Node* _left,Node* _right) : value(_value), left(_left), right(_right), root(nullptr)
    {
        //만약 왼쪽 오른쪽 노드가 있다면 현재 노드가 부모
        if(nullptr!=_left)
            _left->root = this;
        if(nullptr!=_right)
            _right->root = this;
    }
    ~Node(){};

    void SetLeft(Node* node){this->left = node;}
    void SetRight(Node* node){this->right = node;}
    Node* GetLeft(){return left;}
    Node* GetRight(){return right;}
    T GetValue(){return value;}

};
template <typename T>
void Preorder(Node<T>* node) //전위
{
    if(node == nullptr)
        return;
    cout << node->GetValue()<< " ";
    Preorder(node->GetLeft());
    Preorder(node->GetRight());

}
int main()
{
    Node<int>* node1 = new Node<int>(1);
    Node<int>* node2 = new Node<int>(2);
    Node<int>* node3 = new Node<int>(3);
    Node<int>* node4 = new Node<int>(4,node1,node2);

    Node<int>* node5 = new Node<int>(5);
    Node<int>* node6 = new Node<int>(6);

    node1->SetLeft(node3);
    node1->SetRight(node5);
    node2->SetRight(node6);

    //순회별 출력해주기
    cout << "전위(Preorder)::";
    Preorder(node4);




}