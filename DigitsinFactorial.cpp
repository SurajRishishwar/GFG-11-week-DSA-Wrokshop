//This is Only Function

int digitsInFactorial(int N)
{
     if (N < 0)
     { 
        return 0; 
     }
     
     if (N <= 1) 
     {
        return 1; 
     }
     
     double digits = 0; 
     for (int i=2; i<=N; i++)
     {
        digits =digits + log10(i); 
     }
  return floor(digits) + 1; 
}
