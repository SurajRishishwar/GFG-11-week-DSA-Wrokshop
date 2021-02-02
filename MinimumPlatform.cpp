//this is only Function

bool customsort(const pair<int,char>&a,const pair<int,char> &b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}
int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	vector<pair<int,char>>order;
	for(int i=0;i<n;i++)
	{
	    order.push_back(make_pair(arr[i],'a'));
	    order.push_back(make_pair(dep[i],'d'));
	}
	sort(order.begin(),order.end(),customsort);
	int res=1;
	int platf=0;
	vector<pair<int,char>>::iterator it=order.begin();
	for(;it!=order.end();it++)
	{
	    if((*it).second=='a')
	        platf++;
	    else
	        platf--;
	   if(platf>res)
	      res=platf;
	}
	return res;
}
