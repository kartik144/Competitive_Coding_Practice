#include<bits/stdc++.h>
using namespace std;
bool sorter(const pair<int,int> &a,
              const pair<int,int> &b)
{
	if (a.first == b.first)
		return (a.second < b.second);
	else 
		return (a.first < b.first);
}	
int main()
{
	int i,n,m,ul=0;
	cin>>n>>m;
	
	int arr[n][2];
	
	for(i=0;i<n;i++)
	scanf("%d %d",&arr[i][0],&arr[i][1]);
	
	vector<pair <int,int> > vect;
	
	for(i=0;i<n;i++)
	vect.push_back(make_pair(arr[i][0],arr[i][1]));
	
	sort(vect.begin(),vect.end(),sorter);
	
	ul=vect[0].second;
	
	for(i=1;i<n;i++)
	{
		if(ul<vect[i].first)
		break;

		ul=ul<vect[i].second?vect[i].second:ul;
	}
		
	if(vect[0].first==0 && ul>=m)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
