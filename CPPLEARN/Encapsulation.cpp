#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel{
private :
    string Name;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
protected:
    string OwnerName;
    int ContentQuality;

public :
    YouTubeChannel(string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
        SubscriberCount = 0;
        ContentQuality = 0;
    }
    
    void GetInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscriberCount << endl;
        cout << "Videos: ";
        for(string vidoeTitle : PublishedVideoTitles){
            cout << vidoeTitle << endl;
        }
    }
    void Subscribe(){
        SubscriberCount++;
    }
    void Unsubscribe(){
        if(SubscriberCount>0)
            SubscriberCount--;
    }
    void PubishVideo(string title){
        PublishedVideoTitles.push_back(title);
    }
    void CheckAnalytics(){
        if(ContentQuality<5)
            cout<< Name << "has bad quality content."<<endl;
        else
            cout<< Name << "has great content."<<endl;
    }
};
class CookingYouTubeChannel:public YouTubeChannel{
public:
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){


    }
    void Practice(){
        cout <<OwnerName<< " is practicing cooking, learning new recipes, experimenting with spices..."<<endl;
        ContentQuality++;
    }

};
class SingersYouTubeChannel:public YouTubeChannel{
public:
    SingersYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){


    }
    void Practice(){
        cout <<OwnerName<< " is taking singing classes, learning new songs, learning how to dance..."<<endl;
        ContentQuality++;
    }

};
int main()
{
    CookingYouTubeChannel cookingYtChannel("Amy's Kitchen","Amy");
    SingersYouTubeChannel singersYtChannel("JohnSings","John");
    // cookingYtChannel.PubishVideo("Apple Pie");
    // cookingYtChannel.PubishVideo("Chocolate Cake");
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.Subscribe();
    // cookingYtChannel.GetInfo();
    cookingYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    singersYtChannel.Practice();
    
    YouTubeChannel * yt1 = &cookingYtChannel;
    YouTubeChannel * yt2 = &singersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();

    //ytChannel.GetInfo();
 
    
    
    return 0;
    

}

