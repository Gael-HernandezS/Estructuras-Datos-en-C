#include<stdio.h>
#include"D:\Documentos\IPN\2 Semestre\Arreglos\Arreglos.h"

/*

void Burbuja(Elem a[], int n){
     int i,j;
     for(j=0;j<n-1;j++)
        for(i=n-1;i>j;i--)
           if(EsMenor(a[i],a[i-1]))
               Intercambia(a[i],a[i-1]);
};

*/

void Shell4(int a[], int n){
    int i,j,k,t;

    for(i=n/2;i>0;i=i/2)
        for(j=0;j+i<n;j++)
          if(a[j]>a[j+i]){
              t=a[j];
              a[j]=a[j+i];
              a[j+i]=t;
              for(k=j;k-i>=0;k=k-i)
                   if(a[k-i]>a[k]){
                       t=a[k];a[k]=a[k-i];a[k-i]=t;
                   }
          }
}


void Shell3(int a[], int n){
    int i,j,k,t;

    for(i=n/2;i>0;i=i/2)
        for(j=0;j+i<n;j++)
          if(a[j]>a[j+i]){
              printf("\nA-I d=%d\t%d\t%d\n",i,j,j+i);
              ImpArreglo(a,n);
              t=a[j];
              a[j]=a[j+i];
              a[j+i]=t;
              printf("\nD-I d=%d\t%d\t%d\n",i,j,j+i);
              ImpArreglo(a,n);
              fflush(stdin);
              getchar();
              for(k=j;k-i>=0;k=k-i)
                   if(a[k-i]>a[k]){
                       t=a[k];a[k]=a[k-i];a[k-i]=t;
                   }
          }
}

void Shell2(int a[], int n){
    int i,j;

    for(i=n/2;i>0;i=i/2){
        for(j=0;j+i<n;j++)
          printf("%d\t%d\n",j,j+i);
        fflush(stdin);
        getchar();
    }
}


void Shell1(int a[], int n){
    int i;

    for(i=n/2;i>0;i=i/2)
 /*       k=i;
        t=a[i];
        for(j=i-1;j>=0;j--)
            if(a[i]<a[j])
                 k=j;

        for(j=i;j>k;j--)
            a[j]=a[j-1];
        a[k]=t;
    }
*/
     printf("%d\n",i);
}

void Seleccion(int a[], int n){
     int i,j,m,t;
     for(i=0;i<n-1;i++){
        m=i;
        for(j=i+1;j<n;j++)
           if(a[m]>a[j])
              m=j;
        t=a[i];
        a[i]=a[m];
        a[m]=t;
      }
}

void Insercion(int a[], int n){
    int i, j, k, t, f=0;

    for(i=1;i<n;i++){
        k=i;
        t=a[i];
        for(j=i-1;j>=0;j--)
            if(a[i]<a[j])
                 k=j;

        for(j=i;j>k;j--)
            a[j]=a[j-1];
        a[k]=t;
    }
}


void Burbuja(int a[], int n){
     int i,j,t;
     for(j=0;j<n-1;j++)
        for(i=n-1;i>j;i--)
           if(a[i]<a[i-1]){
               t=a[i];
               a[i]=a[i-1];
               a[i-1]=t;
           }
};

int Particion(int a[], int n){
	int p=0, q=1, k=0, m=0;

	while((p<(n-1))&&(q<n)){
        while((q<n)&&(a[p]<a[q]))
            q++;
        if(q<n){
            m=a[q];
            for(k=q;k>p;k--)
                a[k]=a[k-1];
            a[p]=m;
            p++; 
			q=p+1;
        }
	}
	return p;
}

void QuickSort(int a[], int n){
	int p;
	if (n>1){
        p=Particion(a,n);
		QuickSort(a, p);
		QuickSort(a+p+1, n-p-1);
	}
}

/*

void Burbuja(Elem a[], int n){
    int i, j, t;
    for(j=0;j<n;j++)
        for(i=n-1;i>j;i--)
           if(EsMenor(a[i],a[i-1]))
               intercambia(*(a+i),*(a+i-1)); // &a[i] esm equivalente a a+i
}
*/
