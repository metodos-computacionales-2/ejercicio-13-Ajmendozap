#include <iostream>

int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}
int addition(int &a, int b)
{
    int r;
    r=a+b;
    a=r;
    return r;
}
int fiboFor(int n)
{
    int a=0;
    int lista[n];
    for(int i= 0; i<n;i++)
    {
        lista[0]=0;
        lista[1]=1;
        lista[2]=1;
        if(i==0)
        {
            std::cout<<'['<<lista[0]<<',';
        }
        if(i==1)
        {
            std::cout<<' '<<lista[1];
        }
        if(i==2)
        {
            std::cout<<", "<<lista[2];
        }
        if(i>2 && i<n)
        {
            lista[i]= lista[i-1]+lista[i-2];
            std::cout<<", "<<lista[i];
        }
        if(i==n-1)
        {
            std::cout<<']';
        }
    }
    std::cout<<std::endl;
}
int fiborecur(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 1;
    }
    if (n>2)
    {
        return (fiborecur(n-1)+fiborecur(n-2));
    }

}
int getMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }


}
double getMax(double a, double b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(void)
{
   std::cout<< "Ejercicio 1 de las diapositivas:"<< std::endl;
   int x=5,y=3,z;
   z=subtraction(7,2);
   std::cout<< "La dirección de memoria de x es : "<< &x << std::endl;
   std::cout<< "La dirección de memoria de z es : "<< &z << std::endl;
   std::cout<< "La dirección de memoria de y es : "<< &y << std::endl;
   std::cout<< "Y como se puede observar tienen diferentes direcciones de memoria, debido a que z es pasada por valor."<<std::endl;
   std::cout<< "---------------------------------------------------------------------------------------------------------------------"<<std::endl;
   std::cout<< "Ejercicio 2 de las diapositivas:"<< std::endl;
   x=5;
   y=3;
   z=addition(x,y);
   std::cout<< "The result is " <<z<<"\n";
   std::cout<< "The value of x is " <<x<<"\n";
   std::cout<< "Ver ReadMe"<<std::endl;
   std::cout<< "---------------------------------------------------------------------------------------------------------------------"<<std::endl;
   int n=30;
   std::cout<< "Ejercicio 3 de las diapositivas:"<< std::endl;
   std::cout<< "Secuencia fibonacci para n=30 con un loop:"<<std::endl;
   fiboFor(n);
   std::cout<< "Secuencia fibonacci para n=30 con una función recursiva:"<<std::endl;
   for(int i=0;i<n;i++)
   {
       if(i==0)
       {
           std::cout<<'['<<fiborecur(i)<<',';
       }
       if(i>0 && i<n-1)
       {
           std::cout<<' '<<fiborecur(i)<<',';
       }
       if(i==n-1)
       {
           std::cout<<' '<<fiborecur(i);
           std::cout<<']';
       }
   }
   std::cout<<std::endl;
   std::cout<< "---------------------------------------------------------------------------------------------------------------------"<<std::endl;
   std::cout<< "Ejercicio 4 de las diapositivas:"<< std::endl;
   std::cout<< "Entre los naturales 1 y 4 el mayor es: "<< getMax(1,4)<<std::endl;
   std::cout<< "Entre los enteros 3.0 y 7.0 el mayor es: "<< getMax(3.0,7.0)<<".0"<<std::endl;
   std::cout<< "Ver ReadMe"<<std::endl;
   return 0;
   
}