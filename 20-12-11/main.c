//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float a,b,c;
//    scanf("%f %f %f",&a,&b,&c);
//    printf("%.2f %.2f",a+b+c,(a+b+c)/3);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int n,h,m;
//    scanf("%d %d %d",&n,&h,&m);
//    if(m%h==0)
//    {
//        printf("%d",n-m/h);
//    }
//    else
//    {
//        printf("%d",n-m/h-1);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("I lost my cellphone!");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("Name    Age    Gender\n
//---------------------\n
//Jack    18     man");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float a,b,c,d,e;
//    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
//    printf("%.1f",(a+b+c+d+e)/5);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a,b;
//    scanf("%x %o",&a,&b);
//    printf("%d",a+b);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float a,sum;
//    int b,c,d;
//    scanf("%f %d %d %d",&a,&b,&c,&d);
//   if(b==11&&c==11)
//   {
//       if(d==1)
//          sum=a*0.7-50;
//       else
//          sum=a*0.7;
//   }
//    else if(b==12&&c==12)
//    {
//       if(d==1)
//           sum=a*0.8-50;
//       else
//           sum=a*0.8;
//    }
//    else
//        sum=a;
//    if(sum>0)
//        printf("%.2f",sum);
//    else
//        printf("%.2f",0);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i,sum,j;
//    for(i=10000;i<100000;i++)
//    {
//        sum=0;
//        for(j=10;j<=100000;j*=10)
//        {
//            sum+=(i/j)*(i%j);
//        }
//        if(sum==i)
//            printf("%d ",i);
//    }
//    return 0;
////}
//double Fac(int x);
//double SumFac(int x);
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printf("%g",SumFac(n));
//    return 0;
//}
//double Fac(int x)
//{
//
//}
#include<stdio.h>
#include<stdlib.h>
int a[3][3]={1,2,3,4,5,6,7,8,9},*p;
void f(int *s,int p[][3])
{
    *s=p[1][1];
}
int main()
{
    p=(int*)malloc(sizeof(int));
    f(p,a);
    printf("%d",*p);
    return 0;
}
