// Define a function named, nsum, to find the sum of n natural numbers. 
// Scan n from the user inside the function, calculate the sum of first n natural numbers, and return sum.
// Do not print anything inside the function, you should only return the value of sum.
// It will be automatically printed by the caller function (in this case, main function (defined by us)).

int nsum(){
 int n;
 scanf("%d",&n);
 int res=n*(n+1)/2;
 return res;
}