//This is only Function

void reverseInGroups(vector<long long>& arr, int n, int k)
    {
        for(long long i=0;i<n;)
        {
            if(i+k<n)
            {
                reverse(arr.begin()+i,arr.begin()+(i+k));
                i=i+k;
            }
            else
            {
                reverse(arr.begin()+i,arr.end());
                i=i+k;
            }
        }
    }
