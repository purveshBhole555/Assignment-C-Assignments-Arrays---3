#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(4);
    v.push_back(4);
    v.push_back(8);
    v.push_back(12);
    v.push_back(2);
    v.push_back(6);
    v.push_back(3);
    v.push_back(13);
    v.push_back(5);
    v.push_back(1);

    int count =0;
    for(int i=0 ; i<v.size();i++)
    {
        for(int j=i ; j<v.size();j++)
        {
            for(int k=j ; k<v.size();k++)
            {
                if(v[i]+v[j]==v[k]) 
                { cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<" "<<endl;
                    count++;
                }
            }
        }
    }

    cout<<count<<endl;
}