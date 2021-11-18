bool isPowerOfFour(long long a)
{
    if(a%4!=0)
    {
        return false;
    }
    while(a>0)
    {
        if(a%4!=0)
        {
            return false;
        }
        a/=4;
        if(a==1)
        {
            return true;
        }
    }
}
