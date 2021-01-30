/*
#include<stdio.h>
void main() {
	int n,year,day=1,out,month,array[12][42];
	int limit[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("input year : ");
	scanf("%d", &year);
	for(int i=2; i<year; i++) {
		if((year%4==0 && year%100!=0) || year%400==0)
			day+=2;
		else
			day++;
	}
	day = day%7;
	for (month=0; month<=11; month++){
		for (n=1 ;n<=42; n++){
		out=n-day;
		array[month][n-1]=out;}
		day= (day+limit[month])%7;
	}
	for (month=0; month<=11; month++){
		printf("\nmonth : %d\n", month+1);
		printf(" SU SO TU WE TH FR SA\n");
		for (n=1; n<=42; n++){
			out=array[month][n-1];
			if (out>0 && out<=limit[month])
				printf("%3d",out);
			else
				printf("   ");
			if (n%7==0) printf("\n");
		}
	}
}
*/