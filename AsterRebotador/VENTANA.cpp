#include "StdAfx.h"
#include "VENTANA.h"
#include ".\\include\\gotoxy.h"
#define ancho 60
#define alto 20
CVENTANA::CVENTANA(void)
{
	Ancho(ancho);
	Alto(alto);
	this->m_iPosRen=0;
	this->m_iPosCol=0;
}


CVENTANA::~CVENTANA(void)
{
}


int CVENTANA::Ancho(void)
{
	return m_iAncho;
}


void CVENTANA::Ancho(int iAncho)
{
	m_iAncho=iAncho;
}
int CVENTANA::Alto(void)
{
	return m_iAlto;
}


void CVENTANA::Alto(int iAlto)
{
	m_iAlto=iAlto;
}
void CVENTANA::Pinta(void)
{
	
	//Pinta la linea superior
	for (int i=0; i<Ancho(); i++)
	{
		gotoxy(m_iPosCol+i,m_iPosRen);
		printf("_");
	}
	//Pinta la linea inferior
	for (int i=0; i<Ancho(); i++)
	{
		gotoxy(m_iPosCol+i,m_iPosRen+Alto());
		printf("-");
	}
	//Pinta la linea izq
	for (int i=0; i<Alto(); i++)
	{
		gotoxy(m_iPosCol,m_iPosRen+i);
		printf("|");
	}

	//Pinta la linea der
	for (int i=0; i<Alto()+1; i++)
	{
		gotoxy(m_iPosCol+Ancho(),m_iPosRen+i);
		printf("|");
	}


}