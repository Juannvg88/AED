#include <cassert>

/*AN: RxRxR ->B /AN(a,b,t) = { V  si  b-|t| <= a <= b+|t| , d >= 0
                             { F  e.o.c.
*/

bool areNear (double, double, double=0.01);

int main()
{
    assert(areNear(0.9, 1.0, 0.1));

    assert(areNear(24.0, 23.0, 1.0));
}
bool areNear(double c, double b, double d)
{
    return (c-d)<=b and b<=(c+d);
}