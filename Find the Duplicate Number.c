int findDuplicate(int* a, int n)
{
    int s = a[0];
    int f = a[0];

    do
    {
        s=a[s];
        f=a[a[f]];
    }while(s!=f);

    f = a[0];

    while(s!=f)
    {
        s=a[s];
        f = a[f];
    }

    return s;
}
