#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b)  for(int i = a;i<b;i++) 
#define all(x)  	(x).begin(),(x).end()

#define ll long long int
const int N  = 1e5 + 10;


vector<vector<int>> subsets(vector<int> &nums)
{
	int n = nums.size();
	int subset_ct = (1<<n);
	vector<vector<int>> subsets;
	for(int mask =0; mask<subset_ct; mask ++)
	{
		vector<int> subset;
		for(int i=0;i<n;i++)
		{
			if((mask & (1<<i)) !=0)
			{
				subset.push_back(nums[i]);
			}
		}
		subsets.push_back(subset);
	}
	return subsets;
}


int main()
{
	
	// Generate SUBSET using bit manipulation 
	
	int n;
	cin>>n;
	
	vector<int> v(n);
	for(int i =0;i<v.size();i++)
	{
		cin>>v[i];
	}
	
	auto all_subsets = subsets(v);
	
	for(auto subset : all_subsets)
	{
		for(int ele : subset)
		{
			cout<<ele<<" ";
		}cout<<endl;
	}
		
}