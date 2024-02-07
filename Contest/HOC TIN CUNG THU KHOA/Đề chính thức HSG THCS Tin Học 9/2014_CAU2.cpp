#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    ifstream inFile("CAU2.INP");
    ofstream outFile("CAU2.OUT");
//    ifstream inFile("input.txt");
//    ofstream outFile("output.txt");
    float n, d, temp, passCount{};
    inFile >> n >> d;
    vector<float> arr;
    arr.reserve(n);
    for (auto i = 0; inFile >> temp; ++i)
        arr.push_back(d / temp + i);
    for (auto i = 0; i < arr.size(); ++i)
    {
        for (auto j = 0; j < i; ++j)
        {
            if(arr[i]< arr[j]) passCount++;
        }
    }
    outFile << passCount;
    return 0;
}
