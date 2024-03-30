#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector <int> g1;
    for(int i=1 ; i<=5; i++)
            g1.push_back(i);
    for(auto i = g1.begin(); i<= g1.end(); i++)
            cout<<*i<<" ";
    cout<<"Size: "<<g1.size();
    cout<<"\nCapacity: "<<g1.capacity();
    cout<<"\nMax_Size: "<<g1.max_size();
    // resizing the size
    g1.resize(4);
    cout<<"\nSize: "<<g1.size();
    cout<<"\nCapacity: "<<g1.capacity();
    cout<<"\nMax_Size: "<<g1.max_size();
    g1.shrink_to_fit();
    for(auto i = g1.begin(); i<= g1.end(); i++)
            cout<<endl<<*i<<" ";
    return 0;
}
