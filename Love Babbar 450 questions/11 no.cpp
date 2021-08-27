#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    int i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
    //Size of union of two sorted/unsorted array
    set<int> s;
    for (i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    cout << "Union element is:"
         << "\n";
    for (auto element : s)
        cout << element << " ";
    cout << "\n";
    //Size of intersection of two sorted/unsorted array
    cout<<"Intersection element is:"<<"\n";
    sort(&a[0], &a[n]);
    sort(&b[0], &b[m]);
    i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            i++;
        else if (a[i] > b[j])
            j++;
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}
