// Define a function, smallest, which takes an integer array and its size as arguments, and returns the smallest element in the array.
// Do not print anything inside the function, just return the value of the smallest element.

int smallest (int u[],int size )
{
int i,v=u[0];
for (i=0;i<=size-1;i++)
{
    if(u[i]<v)
    {
        v=u[i];
    }
    
}
return v;
}