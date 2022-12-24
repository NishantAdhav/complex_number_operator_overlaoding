#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    char name[40];
    cout<<"Enter the name of file:"<<endl;  //naming output file.
    cin>>name;

    ofstream fout;                      //creating output file.     program to file.
    fout.open(name);

    if(!fout)
    {
        cout<<"Error occur";
        exit(1);
    }
    
    cout<<"Writing to the file"<<endl;
    cout<<"Enter content for file end with ctrl+D"<<endl;

    string data;
    while(getline(cin,data))            //writing information to output file.
    {
    if (data=="^D")
    break;
    fout<<data<<endl;
    }
    fout.close();                       //closing the file.

    ifstream fin;                       
    fin.open(name);                     //again opening the file as input file.     file to program.
    if(!fin)
    {
        cout<<"error opening file."<<endl;
        exit(1);
    }

    cout<<"reading from file."<<endl;
    while(fin)
    {
        getline(fin,data);
        cout<<data<<endl;
    }

    fin.close();
    return 0;
}