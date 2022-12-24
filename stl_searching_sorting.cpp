#include <iostream>
#include<algorithm>
#include<vector>
vector<item>o1;

using namespace std;
class item
{
    public:
    char name[10];
    int quantity;
    int cost;
    int code;
    bool operator==(const item& i1)
    {
    if(code==i1.code)
    return 1;
    return 0;
    }

    bool operator<(const item& i1)
    {
        if(code<i1.code)
        return 1;
        return 0;
    }

    bool compare(const item&i1,const item&i2)
    {
        return i1.cost<i2.cost;
    }

    void insert()
    {

        item i1;
        cout<<"Enter item name:";
        cin>>i1.name;
        cout<<"Enter item quantity";
        cin>>i1.quantity;
        cout<<"\nEnter item cost:";
        cin>>i1.cost;
        cout<<"\nEnter item code:";
        cin>>i1.code;
        o1.push_back(i1);
    }

    void print(item &i1)
    {
        cout<<"\n";
        cout<<"\nItem name:"<<i1.name;
        cout<<"\nItem quantity:"<<i1.quantity;
        cout<<"\nItem cost:"<<i1.cost;
        cout<<"\nItem code:"<<i1.code;

    }

    void display()
    {
        for_each(o1.begin(),o1.end(),print);
    }

    void search()
    {
        vector<item>::iterator p;
        item i1;
        cout<<"\n Enter item code to search:";
        cin>>i1.code;
        p=find(o1.begin(),o1.end(),i1);
        if(p==o1.end())
        {
            cout<<"\nNot found.";
        }
        else
        {
        cout<<"\n Found."<<endl;
        cout<<"Item name:"<<p->name<<endl;
        cout<<"Item quqntity:"<<p->quantity<<endl;
        cout<<"Item quantity:"<<p->cost<<endl;
        cout<<"Item cost:"<<p->cost<<endl;
        cout<<"Item code:"<<p->code<<endl;

        }
    }

    void del()
    {
        vector<item>::iterator p;
        item i1;
        cout<<"\n Enter item code to delete.";
        cin>>i1.code;
        p=find(o1.begin,o1.end(),i1);
        if(p==o1.end())
        {
            cout<<"\nNot found";
        }
        else
        {
        o1.erase(p);
        cout<<"\nDeleted.";
        }
    }
    


};

int main()
{   item obj;
    int ch;
    do
    {
    cout<<"\n***Menu***";
    cout<<"\n1.Insert";
    cout<<"\n2.Display";
    cout<<"\n3.Search";
    cout<<"\n4.Sort";
    cout<<"\n5.Delete";
    cout<<"\n6.Exit";
    cout<<"Enter your choice:";
    cin>>ch;
    switch(ch)
    {

        case 1:
        obj.insert();
        break;

        case 2:
        obj.display();
        break;

        case 3:
        obj.search();
        break;

        case 4:
        sort(o1.begin(),o1.end());
        cout<<"\n Sorted on cost";
        obj.display();
        break;

        case 5:
        obj.del();
        break;

        case 6:
        exit(0);
    }
    } 
    while (ch!=7);
    
return 0;
}




