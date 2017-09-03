#include "stdafx.h"
#include "aster2.h"
PELOTA::PELOTA(int iPosX, int PosY, int DirH, int DirV)
{
	setColumna(iPosX);
	Renglon(PosY);
	this->m_iDirHorz=DirH;
	this->m_iDirVert=DirV;
}
void	PELOTA::setColumna(int iCol)
{
	m_iCol=iCol;
}
int		PELOTA::getColumna(void)
{
	return m_iCol;
}
void	PELOTA::Renglon(int iRen)
{
	m_iRen=iRen;
}
int		PELOTA::Renglon(void)
{
	return m_iRen;
}
void	PELOTA::Caracter(char c)
{
	m_cCar=c;
}
char PELOTA::Caracter(void)
{
	return m_cCar;
}
void PELOTA::Mueve(CVENTANA &miMarco)
{


	
	m_iCol+=this->m_iDirHorz ;
	m_iRen+=this->m_iDirVert ;
	if (m_iDirHorz==DERECHA)
	{
		if (m_iCol > miMarco.Ancho()-1)
		{
			m_iDirHorz=IZQUIERDA;
			m_iCol-=2;
		}
	}

	if (m_iDirVert==ABAJO)
	{
		if (m_iRen > miMarco.Alto()-1)
		{
			m_iDirVert=ARRIBA;
			m_iRen-=2;
		}
	}
	if (m_iDirHorz==IZQUIERDA)
	{
		if (m_iCol < miMarco.m_iPosCol+1 )
		{
			m_iDirHorz=DERECHA;
			m_iCol+=2;
		}
	}
	if (m_iDirVert==ARRIBA)
	{
		if (m_iRen < miMarco.m_iPosRen +1)
		{
			m_iDirVert=ABAJO;
			m_iRen+=2;
		}
	}


}