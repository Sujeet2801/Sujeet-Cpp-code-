#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
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

bool uniqueOccurrenceOptimized(ivector<int>& arr) {
    
    unordered_map<int, int> freq;

    for (int i = 0; i < arr.size(); i++) {
        freq[arr[i]]++;
    }

    unordered_set<int> seenFrequencies;

    for (auto it : freq) {
        if (seenFrequencies.count(it.second)) {
            return false;
        }
        seenFrequencies.insert(it.second);
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
