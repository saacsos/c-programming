/*
 * Name mangling (decoration) to enable type-safe linkage.
 * $ g++ fig15_11.cpp -o fig15_11
 * $ nm fig15_11 | grep _Z
*/
// function square for int values
int square(int n)
{
    return n * n;
}

// function square for double values
double square(double n)
{
    return n * n;
}

// function that receives arguments of types
// int, float, char and int &
void nothing(int a, float b, char c, int &d)
{
    // empty function body
}

// function that receives arguments of types
// char, int, float & and double &
int nothing2(char a, int b, float &c, double &d)
{
    return 0;
}

int main()
{
    return 0; // indicates successful termination
}
