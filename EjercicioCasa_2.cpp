#include <iostream>

int main(int argc, char **argv)
{
    int N= atoi(argv[1]);
    std::cout<< "---------------------------------------------------------------------------------------------------------------------"<<std::endl;
    std::cout<< "Parte 2 - producto matricial de matrices nilponentes"<<std::endl;
    int a[N][N];
    for(int i=0; i<N;i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i==0)
            {
                if(j<N-1)
                {
                    a[i][j]=2;
                }
                if(j== N-1)
                {
                    a[i][j]=1-N;
                }
            }
            else
            {
                if(j==N-1)
                {
                    a[i][j]=-N;
                }
                else
                {
                    a[i][j]=1;
                }
                if(j==i-1)
                {
                    a[i][j]=N+2;
                }
            }
        }
    }
    std::cout<<"El producto de la matriz nilponente:"<<std::endl;
    for(int i= 0; i<N;i++)
        {
        for(int j= 0; j<N;j++)
            {
                if(j==0)
                {
                    std::cout<<'['<<a[i][j]<<" ";
                }
                else
                {
                    std::cout<<a[i][j]<<" ";
                }
            }
        std::cout<<"]"<<std::endl;
    }
    std::cout<<"con sigo misma es:"<<std::endl;
    float cum= 0;
    float m[N][N];
    for(int i=0; i<N;i++)
    {
        for(int k=0;k<N;k++)
        {
            float cum= 0;
            for(int j=0;j<N;j++)
            {
                float d= a[i][j]*a[j][k];
                cum += d;
            }
            m[i][k]= cum;
        }
    }
    for(int i= 0; i<N;i++)
        {
        for(int j= 0; j<N;j++)
            {
                if(j==0)
                {
                    std::cout<<'['<<m[i][j]<<" ";
                }
                else
                {
                    std::cout<<m[i][j]<<" ";
                }
            }
        std::cout<<"]"<<std::endl;
    }
}