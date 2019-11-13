#include <iostream>

int main(void)
{
    std::cout<<"Ejercicio para la casa"<<std::endl;
    std::cout<< "---------------------------------------------------------------------------------------------------------------------"<<std::endl;
    std::cout<< "Parte 1 - producto matricial de matrices Cauchy"<<std::endl;
    std::cout.precision(17);
    float a[4][3];
    float b[3][4];
    int filasA= sizeof(a)/sizeof(a[0]);
    int columnasA= sizeof(a[0])/sizeof(a[0][0]);
    int filasB= sizeof(b)/sizeof(b[0]);
    int columnasB= sizeof(b[0])/sizeof(b[0][0]);
    for(int i= 0;i<filasA;i++)
    {
        for(int j= 0; j<columnasA;j++)
        {
            a[i][j]= (float) 1/(i+j+1);
        }
    }
    for(int i= 0;i<filasB;i++)
    {
        for(int j= 0; j<columnasB;j++)
        {
            b[i][j]= (float) 1/(i+j+1);
        }
    }
    std::cout<< "El producto entre las matrices cauchy: "<<std::endl;
    std::cout<<std::endl;
    for(int i= 0; i<columnasA;i++)
        {
        for(int j= 0; j<filasA;j++)
            {
                if(j==0)
                {
                    std::cout<<'['<<a[j][i]<<" "<<std::scientific;
                }
                else
                {
                    std::cout<<a[j][i]<<" "<<std::scientific;
                }
            }
        std::cout<<"]"<<std::endl;
    }
    std::cout<< "y "<<std::endl;
    for(int i= 0; i<filasB;i++)
        {
        for(int j= 0; j<columnasB;j++)
            {
                if(j==0)
                {
                    std::cout<<'['<<b[i][j]<<" "<<std::scientific;
                }
                else
                {
                    std::cout<<b[i][j]<<" "<<std::scientific;
                }
            }
        std::cout<<"]"<<std::endl;
    }
    std::cout<<"es:"<<std::endl;
    if(columnasA == filasB)
    {
        float cum= 0;
        float m[filasA][columnasB];
        for(int i=0; i<filasA;i++)
        {
            for(int k=0;k<columnasB;k++)
            {
                float cum= 0;
                for(int j=0;j<filasB;j++)
                {
                    float d= a[i][j]*b[j][k];
                    cum += d;
                }
                m[i][k]= cum;
            }
        }
        int filas= sizeof(m)/sizeof(m[0]);
        int columnas= sizeof(m[0])/sizeof(m[0][0]);
        for(int i= 0; i<filas;i++)
        {
            for(int j= 0; j<columnas;j++)
            {
                if(j==0)
                {
                    std::cout<<'['<<m[i][j]<<" "<<std::scientific;
                }
                else
                {
                    std::cout<<m[i][j]<<" "<<std::scientific;
                }
            }
        std::cout<<"]"<<std::endl;
    }
    }
    else
    {
        std::cout<< " Las matrices no dadas no son de la forma d(a)= NXT, d(b)= TXM."<<std::endl;
    }
    return 0;
}