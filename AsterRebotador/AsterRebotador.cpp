// AsterRebotador.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "aster2.h"
#include "VENTANA.h"
#include <stdio.h>
#include ".\\include\\gotoxy.h"
#define NUMASTER	1
#define velocidad 100
int _tmain(int argc, _TCHAR* argv[])
{
	PELOTA miBola[NUMASTER];
	CVENTANA Windocs;
	

	Windocs.Pinta();
	for (int j=0; j<NUMASTER; j++)
	{
		miBola[j].setColumna(j*3);
		miBola[j].Renglon(j);
		miBola[j].Caracter('*');
	}
	
	for (int i=0; i<215; i++)
	{
		for (int k=0; k<NUMASTER; k++)
		{
			gotoxy(miBola[k].getColumna(),miBola[k].Renglon() );
			printf(" ");

			miBola[k].Mueve(Windocs);

			gotoxy(miBola[k].getColumna(),miBola[k].Renglon() );
			printf("%c",miBola[k].Caracter ());
		}
		Sleep(velocidad);
	}
	//miBola.m_iRen=0;

	return 0;
}

