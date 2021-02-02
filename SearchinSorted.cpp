//This is Only function

int Search(vector<int> vec, int K) {
    int n=vec.size();
    int l=0,h=n-1,ans=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(K==vec[mid])
        {
            ans=mid;
            break;
        }
        
        if(vec[l]<=vec[mid])
        {
            if(vec[l]<=K&&K<=vec[mid])
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        else
        {
            if(vec[mid]<vec[h])
            {
                if(vec[mid]<=K&&K<=vec[h])
                {
                    l=mid+1;
                }
                else
                {
                    h=mid-1;
                }
            }
        }
    }
    return ans;
}
