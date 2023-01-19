#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int matriz55[4][4], matriz44[3][3], matriz33[2][2];
	int contF5, contC5, contF4, contC4, i1, j1, bandera;
	long int det5=0, det4=0, det3=0;

	printf("La matriz original es: \n");
	srand(getpid());
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{	
			matriz55[i][j] = rand() % 1001;
			if (matriz55[i][j]<100)
			{
				if (matriz55[i][j]<10)
				{
					printf("%d   ", matriz55[i][j]);
				}else{
					printf("%d  ", matriz55[i][j]);
				}
			}else{
				printf("%d ", matriz55[i][j]);
			}
		}
		printf("\n");
	}

	contF5=0;
	contC5=0;
	i1=0;
	j1=-1;
	for (contF5 = 0; contF5 < 5; contF5++)
	{
		contC5=0;
		i1=0;
		j1=-1;
		for (int i = 0; i < 5; i++)
		{
			j1=-1;
		    bandera=0;
		    for (int j = 0; j < 5; j++)
		    {
		    	if ((i==contF5)||(j==contC5))
		    	{
		    		bandera++;
		    	}else{
		    		j1++;
		    		matriz44[i1][j1]=matriz55[i][j];
		    	}
		    }
		    if (bandera==5)
		    {
		    	i1=i1;
		    }else{
		    	i1++;
		    }
		}
		

		contF4=0;
		contC4=0;
		det4=0;
		i1=0;
		j1=-1;
		for (contF4 = 0; contF4 < 4; contF4++)
		{
			contC4=0;
			i1=0;
			j1=-1;
			for (int i = 0; i < 4; i++)
			{
				j1=-1;
				bandera=0;
				for (int j = 0; j < 4; j++)
				{
					if ((i==contF4)||(j==contC4))
					{
						bandera++;
					}else{
						j1++;
						matriz33[i1][j1]=matriz44[i][j];
					}
				}
				if (bandera==4)
				{
					i1=i1;
				}else{
					i1++;
				}
			}
			det3=matriz33[1][1]*matriz33[2][2]*matriz33[3][3]
			+matriz33[2][1]*matriz33[3][2]*matriz33[1][3]
			+matriz33[3][1]*matriz33[1][2]*matriz33[2][3]
			-(matriz33[1][1]*matriz33[3][2]*matriz33[2][3]
				+matriz33[2][1]*matriz33[1][2]*matriz33[3][3]
				+matriz33[3][1]*matriz33[2][2]*matriz33[1][3]);
			det4=det4+((-1)^(contF4+2))*matriz44[contF4][contC4]*(det3);
		}
		det5=det5+((-1)^(contF5+2))*matriz55[contF5][contC5]*(det4);
	}
	printf("El determinante de la matriz es: %ld\n", det5);

	return 0;
}