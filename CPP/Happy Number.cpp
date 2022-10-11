#include <bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
    set<int> myset;
    int val,index;
    while(1)
    {
        int val=0;
        while(n)
        {
            index=n%10;
            val+=index*index;
            n/=10;
        }
        if(val==1) return true;
        else if(myset.find(val)!=myset.end()) return false;
            myset.insert(val);
            n=val;
        }
        return false;
}
int main()
{
     int n;
     cin>>n;
     cout<<isHappy(n);
    return 0;
}
