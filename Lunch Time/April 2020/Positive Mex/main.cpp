#include <bits/stdc++.h>
using namespace std;
int res=1;
void printArray(vector<int> arr, int n,set<int>s)
{
    int m=INT_MIN;
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
		s.erase(s.find(arr[i]));
    }
    cout<<endl;
    cout<<"Set has -> ";
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

}

void printSubsequences(vector<int> arr, int index,vector<int> subarr,set<int >s)
{
	if (index == arr.size())
	{
		int l = subarr.size();

		if (l != 0)
			printArray(subarr, l,s);
	}
	else
	{
		printSubsequences(arr, index + 1, subarr,s);
		subarr.push_back(arr[index]);
		printSubsequences(arr, index + 1, subarr,s);
	}
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            arr.push_back(k);
        }
        set<int>s;
        for(int i =0;i<n;i++){
            s.insert(arr[i]);
        }
	    vector<int> b;
	    printSubsequences(arr, 0, b,s);
	    cout<<"Result is : "<<res<<endl;
	}
	return 0;
}
