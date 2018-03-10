#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float x,z,b,a ,betta,sum;
   
    fprintf(stdout,"Write number of X: ");
    fscanf(stdin,"%d",&n);
     float y[n];
     sum = 0;
    for (int i = 1;i <=n;i++ )
    {
        fprintf(stdout,"Write Z,A,B,betta for our equation:\n");
        fprintf(stdout,"Write Z:");
        scanf("%f",&z);
        fprintf(stdout,"Write A:");
        scanf("%f",&a);
        fprintf(stdout,"Write B:");
        scanf("%f",&b);
        fprintf(stdout,"Write betta:");
        scanf("%f",&betta);
        fprintf(stdout,"Our Z[%d] = %.2f,A[%d] = %.2f,B[%d] = %.2f,betta[%d] = %.2f\n",i,z,i,a,i,b,i,betta);
        x = pow(z,3) - b + (pow(a,2)) / (pow(tan(betta),2));
        fprintf(stdout,"X[%d] = %.3f\n",i,x);
        y[i]=x;
        fprintf(stdout,"Y[%d] = %.3f\n",i,y[i]);
        
        /*y[n]={x};
        for (int j = 0,i<=n;i++)
        {
            y[n]={x[i]}
        }
        y[n]={x};
        fprintf(stdout,"Y = %f",y);*/
        sum =sum + y[i];
      

    }
   
    fprintf(stdout,"Y = %.3f\n",sum);
}