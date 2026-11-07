#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    int target;
    cin >> target;
    // * first method
    int found = 0;
    for (auto x : mp)
    {
        if (target == x.first)
        {
            cout << x.first << " " << x.second << endl;
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "Not found " << endl;
    }

    // * second method using find(`)
    auto it = mp.find(target);

    if (it != mp.end())
    {
        cout << it->first << " " << it->second<<endl;
    }
    else
    {
        cout << "Not found"<<endl;
    }

    // * third method using count()
    if (mp.count(target))
    {
        cout<<mp[target]<< " Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}