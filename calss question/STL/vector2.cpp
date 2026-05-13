// Wap a c++ program to take a vector input from user and then and then short the vectoer in ascending order also find the index of the element given by user in that vector before sorting.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (const auto &x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    int element;
    cout << "Enter the element to search for: ";
    cin >> element;
    auto it = find(v.begin(), v.end(), element);
    if (it != v.end())
    {
        int index = distance(v.begin(), it);
        cout << "Index of the element: " << index << endl;
    }
    else
    {
        cout << "Element not found in the vector." << endl;
    }
    return 0;
}
