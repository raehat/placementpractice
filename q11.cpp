#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar1[] = {2, 3, 5, 7, 8};
    int ar2[] = {3, 6, 9, 12, 15};
    int n1 = sizeof(ar1)/sizeof(int);
    int n2 = sizeof(ar2)/sizeof(int);

    int i = 0;
    int j = 0;

    vector<int> uni;
    vector<int> inter;

    while (i<n1 && j<n2) {

        if (ar1[i]<ar2[j]) 
            uni.push_back(ar1[i++]);
        else if (ar2[j]<ar1[i])
            uni.push_back(ar2[j++]);
        else {
            uni.push_back(ar1[i++]);
            inter.push_back(ar2[j++]);
        }
    }

    while (i<n1)
        uni.push_back(ar1[i++]);

    while (j<n2)
        uni.push_back(ar2[j++]);

    for (auto it: uni)
        cout<<it<<" ";
    cout<<endl;
    for (auto it: inter)
        cout<<it<<" ";

    return 0;
}