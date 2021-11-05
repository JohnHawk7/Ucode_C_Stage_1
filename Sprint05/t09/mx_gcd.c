int mx_gcd(int a, int b) {
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return mx_gcd(a-b, b);
    return mx_gcd(a, b-a);
}
