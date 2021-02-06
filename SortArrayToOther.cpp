//This is only function

void sortA1ByA2(int A1[], int N, int A2[], int M) 
{
    map<int,int>m;
    for(int i=0;i<N;i++)
    {
        m[A1[i]]++;
    }
    int j=0;
    for(int i=0;i<M;i++)
    {
        while(m[A2[i]]>0)
        {
            A1[j++]=A2[i];
            m[A2[i]]--;
        }
    }
    
    for(auto it:m)
    {
        if(it.second>0)
        {
            while(it.second>0)
            {
                A1[j++]=it.first;
                it.second--;
            }
        }
    }
} 
