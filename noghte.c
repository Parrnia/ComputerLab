#include <stdio.h>
#include <math.h>


int main() {

float x1,y1,a2,b2,c3,d3,n4,m4;

scanf("%f%f",&x1,&y1);
scanf("%f%f",&a2,&b2);
scanf("%f%f",&c3,&d3);
scanf("%f%f",&n4,&m4);



float f1=sqrt((x1-n4)*(x1-n4)+(y1-m4)*(y1-m4));
float f2=sqrt((a2-n4)*(a2-n4)+(b2-m4)*(b2-m4));
float f3=sqrt((c3-n4)*(c3-n4)+(d3-m4)*(d3-m4));

float a=sqrt((x1-a2)*(x1-a2)+(y1-b2)*(y1-b2));
float b=sqrt((x1-c3)*(x1-c3)+(y1-d3)*(y1-d3));
float c=sqrt((a2-c3)*(a2-c3)+(b2-d3)*(b2-d3));


float s=(a+b+c)/2;
float s1=(a+f1+f2)/2;
float s2=(f1+b+f3)/2;
float s3=(f2+f3+c)/2;



float masahat=sqrt(s*(s-a)*(s-b)*(s-c));
float masahat1=sqrt(s1*(s1-a)*(s1-f1)*(s1-f2));
float masahat2=sqrt(s2*(s2-f2)*(s2-f3)*(s2-c));
float masahat3=sqrt(s3*(s3-f1)*(s3-b)*(s3-f3));

float r=abs(masahat-(masahat1+masahat2+masahat3));


   if ((f1+f2==a) ||(f2+f3==c) || (f1+f3==b) )	 {
	
		printf ("on");
	
	
	
	
}


 
else {
	
     if (r==0 || r<0.001) {
	
	printf ("in");
	
	
}




	
	else {
		
		printf ("out");
		
	} 
	
	
	
	
}






	
return 0;
}