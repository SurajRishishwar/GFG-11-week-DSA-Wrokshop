//This is only Function

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    int i=0,j=0;
    bool fl=false;
    std::vector<int> s;
    while(i<N&&j<M)
    {
        if(i>0&&arr1[i-1]==arr1[i])
        {
            i++;
            continue;
        }
        if(arr1[i]<arr2[j])
            i++;
        else if(arr2[j]<arr1[i])
             j++;
        else
        {
            s.push_back(arr2[j]);
            fl=true;
            i++;
            j++;
        }
    }
    if(fl==false)
    {
        s.push_back(-1);
    }
    return s;
}
