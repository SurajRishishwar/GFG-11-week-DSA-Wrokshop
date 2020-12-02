//This is onLy Function


bool isPrime(int n) 
{
    if(n<=1)
    {
      return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
      if(n%i==0)
      {
         return false;
      }
    }
     return true ;
}

int exactly3Divisors(int N)
{ 
    int counter=0;
    N = sqrt(N);
    for(int i=1;i<=N;i++) 
    { 
        if(isPrime(i))
        {
          counter++; 
        }   
    } 
     return counter; 
        
    
}
