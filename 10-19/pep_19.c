#include<stdio.h>

static int days(int y, int n);

int main(void){
	
		
	int year; 
	int wday = 0; 
	int sun = 0;
	int mon;
	
	for (year = 1901; year <= 2000; year++){
		for (mon = 1; mon <= 12; mon++){
			if (wday == 5){
					sun++;
				}
			wday = (wday + days(year, mon)) % 7;
			}
		}

	printf("%d \b", sun);
	return 0;
}
int days(int y, int m){

	switch (m) {
		case 2:
			if (( y % 4 == 0 && y % 100 != 0 ) || y % 400 == 0){
			
				return 29;
			} 
			else {
			
				return 28;

			}
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		default:

			return 31;
	
	}

}
