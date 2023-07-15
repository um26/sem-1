// Define a recursive function, fact, which takes an integer n and returns its factorial.
// Do not print anything inside the function, just return the value of the factorial. 

int fact(int u)
{
 int v=1;
 if (u-1>=0)
    {
        v=u*fact(u-1);
    }
  return v;
}