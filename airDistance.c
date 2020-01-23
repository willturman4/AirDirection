/*Name: William Turman, David Ho
/Date: 2020/01/23
/Description: Finding the dirstance using the origin and destination
*/
#include <stdio.h>

int main (void) {
double latitude1
double latitude2
double longitude1
double longitude2
double DiffernceLongitude
("please enter the latitude of the first location.");
scanf(""%lf", &latitude1);
rLatitude1=(latitude1/180)*M_PI;

("please enter the longitude of the  location.");
scanf(""%lf", &longitude1);
rLongitude1=(longitude1/180)*M_PI;

("please enter the latitude of the second location.");
scanf(""%lf", &latitude2);
rLatitude2=(latitude2/180)*M_PI;

("please enter the longitude of the second location.");
scanf(""%lf", &longitude2);
rLongitude2=(longitude2/180)*M_PI;

R=6371

DiffernceLongitude = rlongitude1 - rlongitude2

d= acos (sin(rlatitude1) *sin(rlatitude2) + cos(rlatitude1) *cos(rlatitude2) *cos(DiffernceLongitude))·R

printf("location Distance\n")
printf("========================\n")
printf("origin:   (%lf,%lf)\n"latitude1, longitude1)
printf("Destination:  (%lf,%lf)\n"latitude2, longitude2")
printf("Air distance is %f Km"d)

return 0;
}


	
	
	
	
	