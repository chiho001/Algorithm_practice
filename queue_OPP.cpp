#include<iostream>
#include<queue>

using namespace std;

class Job{
public:
    Job(){}
    Job(int workid, string n, int pn)
    {
        WorkID = workid;
        name = n;
        PageNum = pn;
    }
    int WorkID;
    friend ostream& operator<<(ostream& os,const Job&j)
    { 
        os << "id: " <<j.WorkID<<",사용자:"<<j.name<<",페이지 수 : " << j.PageNum << "장";
        return os;
    }
private: 
    string name;
    int PageNum;

};
class Printer : public Job{
public:
    Printer()
    { 
        cout <<"Printer Create"<<endl;
    }
    
    void AddNewPrint(const Job& A)
    {
        WorkID = A.WorkID;
        q.push(WorkID);
    }
    void Printing()
    {   
        cout << q.front() <<endl;
        q.pop();
    }
private : 
    queue<int>q;
};

int main()
{
    Job chiho_work(1,"chiho",1);
    Job inho_work(2,"inho",2);

    Printer p;

    p.AddNewPrint(chiho_work);
    p.AddNewPrint(inho_work);

    p.Printing();
    p.Printing();

    return 0;
}