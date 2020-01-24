/*Name: William Turman, David Ho
/Date: 2020/01/23
/Description: Finding the dirstance using the origin and destination
*/
#include <stdio.h>
#include <math.h>

int main (void) {
double latitude1;
double latitude2;
double longitude1;
double longitude2;
double DiffernceLongitude;
double Long1;
double Long2;
double Lat1;
double Lat2;
double r;
double distance;
printf("please enter the latitude of the first location.\n");
scanf("%lf", &latitude1);
Lat1=(latitude1/180)*M_PI;
printf("please enter the longitude of the  location.\n");
scanf("%lf", &longitude1);
Long1=(longitude1/180)*M_PI;

printf("please enter the latitude of the second location.\n");
scanf("%lf", &latitude2);
Lat2=(latitude2/180)*M_PI;

printf("please enter the longitude of the second location.\n");
scanf("%lf", &longitude2);
Long2=(longitude2/180)*M_PI;

r = 6371;

DiffernceLongitude = Long1 - Long2;

distance = acos(sin(Lat1) *sin(Lat2) + cos(Lat1) *cos(Lat2) *cos(DiffernceLongitude))*r;

printf("location Distance\n");
printf("========================\n");
printf("origin:   (%lf,%lf)\n", latitude1, longitude1);
printf("Destination:  (%lf,%lf)\n", latitude2, longitude2);
printf("Air distance is %f Km", distance);

return 0;
}
