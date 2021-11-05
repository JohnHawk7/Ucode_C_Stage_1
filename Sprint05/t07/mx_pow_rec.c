double mx_pow_rec(double n, unsigned int pow)
{    

    //base condition
    if(pow == 0)
    {
        return 1;
    }

    else
    {
        // recursive call
        return n * mx_pow_rec(n, pow - 1);
    }

}
