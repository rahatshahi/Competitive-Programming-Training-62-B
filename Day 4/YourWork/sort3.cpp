#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "programming";
    cout<< "Without Sorting: " << s << endl;
    sort(s.begin(),s.end());
    cout<< "SOrted string: "<< s << endl;
    return 0 ;
}