#include "VENTANA.h"

#define IZQUIERDA -1
#define DERECHA		1
#define ARRIBA	-1
#define ABAJO	1


class PELOTA
{
	char m_cCar;
	int m_iCol;
	int m_iRen;
public:
	int m_iDirHorz;
	int m_iDirVert;
public:
	PELOTA(int iPosX=0, int PosY=0, int DirH=1, int DirV=1);
	void	setColumna(int iCol);
	int		getColumna(void);
	void	Renglon(int iRen);
	int		Renglon(void);
	void	Caracter(char c);
	char	Caracter(void);

	// Conductas
	void	Mueve(CVENTANA &);


};