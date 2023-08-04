#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long double lat1 = 53.32055555555556;
    long double lat2 =  53.31861111111111;
    long double long1 = -1.7297222222222221;
    long double long2 = -1.6997222222222223;
    lat1 = lat1 * (M_PI / 180);
    lat2 = lat2 * (M_PI / 180);
    long1 = long1 * (M_PI / 180);
    long2 = long2 * (M_PI / 180);
long double d = 3963.0 * double (acos((sin(lat1) * sin(lat2)) +
     cos(lat1) * cos(lat2) * cos(long2-long1)));
     cout<<(d*1.609344);
}
