#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {

    vector<int> ans;

    int size = arr.size();
    sort(arr.begin(),arr.end());
    int i = 0;

    while(i<size)
    {
        int count = 1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] = arr[j])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        ans.push_back(count);
        i = i + count;
    }

    size = ans.size()-1;
    sort(ans.begin(),ans.end());

    for(int i=0; i<size-1; i++)
    {
        if(ans[i]==ans[i+1])
        {
            return false;
        }
    }
    return true;
  }

int main()
{

    vector<int> v;
    
    int size = 5;
    v.push_back(1);
    v.push_back(1);
    v.push_back(3);
    v.push_back(3);
    v.push_back(5);
    
    int ans = uniqueOccurrences(v);
    if(ans)
    {
        cout << "Have unique occurances" << endl;
    }
    else
    {
        cout << "Not have unique occurances" << endl;
    }

    return 0;
}