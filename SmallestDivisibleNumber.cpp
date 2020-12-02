//This is Only Function 

long long getSmallestDivNum(long long n)
{
      long long ans=1;
      for(long long i=1;i<=n;i++)
      {
         ans=(ans*i)/(__gcd(ans,i));
      }
      
      return ans;
    
}
