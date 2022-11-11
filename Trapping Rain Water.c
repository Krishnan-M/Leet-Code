int min(int a,int b)
{
    if (a<b)
        return a;
    else
        return b;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
}
int trap(int* a, int n)
{
    int lm[n],rm[n],water=0;;
    
    
    lm[0]=a[0];
    for(int i=1;i<n;i++)
        lm[i]=max(a[i],lm[i-1]);
    
    
    rm[n-1]=a[n-1];
    for(int j=n-2;j>=0;j--)
        rm[j]=max(a[j],rm[j+1]);
    
    for(int i=0;i<n;i++)
    {
        water=water + min(lm[i],rm[i]) - a[i];
    }
    
    return water;
}
