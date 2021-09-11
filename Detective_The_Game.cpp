/*		ARMAS
1. Cuchillo
2. Martillo
3. Hacha
4. Pistola
5. Jeringa

		LUGARES
1. Estudio
2. Habitacion Principal
3. Cuarto de Servicio
4. Comedor
5. Jardin

		PERSONAJES
0. Jugador (Detective)
1. Jack (Comerciante)
2. Oliver (Banquero)
3. Olivia (Ama de llaves)
4. Isabella (Doctora)
5. George (Jardinero)
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string.h>
using namespace std;

void analisis_arma(int a_elec, int a_arma_selec, char a_arma_imp[], char a_arma_mos[])
{
	if(a_elec == a_arma_selec)
	{
		cout<<"EL OBJETO ";
		puts(a_arma_mos);
		cout<<"NO SE ENCONTRO EN SU AREA DE COSTUMBRE"<<endl;
		cout<<"SE ENCONTRO EN UN ESTADO MUY MALO PARA SER UTILIZADO EN UNA MANSION."<<endl;
		system("PAUSE");
		system("cls");
	}
	
	else
	{
		int ruta = 1 + rand() % 2;
		
		if(ruta == 1)
		{
			cout<<"EL OBJETO ";
			puts(a_arma_mos);
			cout<<"SE ENCONTRO EN SU AREA DE COSTUMBRE"<<endl;
			cout<<"NO SE ENCONTRARON ANOMALIAS EN EL OBJETO"<<endl;
			system("PAUSE");
			system("cls");
		}
		
		else if(ruta == 2)
		{
			cout<<"EL OBJETO ";
			puts(a_arma_mos);
			cout<<"SE ENCONTRO EN SU AREA DE COSTUMBRE"<<endl;
			cout<<"PERO SE ENCONTRARON MARCAS DE HUELLAS EN EL"<<endl;
			system("PAUSE");
			system("cls");
		}
	}
}

void analisis_personaje(int a_elec, int a_personaje_selec, char a_personaje_imp[], char a_personaje_mos[])
{
	if(a_elec == a_personaje_selec)
	{
		cout<<"EL PERSONAJE ";
		puts(a_personaje_mos);
		cout<<"MENCIONO QUE NO HABIA TENIDO CONTACTO CON LA VICTIMA"<<endl;
		cout<<"PERO SU ACTITUD FUE NERVIOSA COMO SI OCULTARA ALGO."<<endl;
		system("PAUSE");
		system("cls");
	}
	
	else
	{
		int ruta = 1 + rand() % 2;
		
		if(ruta == 1)
		{
			cout<<"EL PERSONAJE ";
			puts(a_personaje_mos);
			cout<<"MENCIONO QUE NO HABIA TENIDO CONTACTO CON LA VICTIMA"<<endl;
			cout<<"Y SU ACTITUD FUE FIRME, NUNCA DUDO"<<endl;
			system("PAUSE");
			system("cls");
		}
		
		else if(ruta == 2)
		{
			cout<<"EL PERSONAJE ";
			puts(a_personaje_mos);
			cout<<"MENCIONO QUE HABIA TENIDO CONTACTO CON LA VICTIMA 2 HR ANTES DE SU MUERTE"<<endl;
			cout<<"Y SU ACTITUD FUE FIRME, NUNCA DUDO"<<endl;
			system("PAUSE");
			system("cls");
		}
	}
}

void analisis_lugar(int a_elec, int a_lugar_selec, char a_lugar_imp[], char a_lugar_mos[])
{
	if(a_elec == a_lugar_selec)
	{
		cout<<"LA HABITACION ";
		puts(a_lugar_mos);
		cout<<"SE ENCONTRO DESORDENADA LA HABITACION"<<endl;
		cout<<"Y SE ENCONTRARON INDICIOS DE PELEA."<<endl;
		system("PAUSE");
		system("cls");
	}
	
	else
	{
		int ruta = 1 + rand() % 2;
		
		if(ruta == 1)
		{
			cout<<"LA HABITACION ";
			puts(a_lugar_mos);
			cout<<"SE ENCONTRO DESORDENADA LA HABITACION "<<endl;
			cout<<"PERO NO SE ENCONTRARON INDICIOS DE PELEA"<<endl;
			system("PAUSE");
			system("cls");
		}
		
		else if(ruta == 2)
		{
			cout<<"LA HABITACION ";
			puts(a_lugar_mos);
			cout<<"SE ENCONTRO EN ORDEN LA HABITACION"<<endl;
			cout<<"Y NO SE ENCONTRARON INDICIOS DE PELEA"<<endl;
			system("PAUSE");
			system("cls");
		}
	}
}

int main()
{	

	//VARIABLES DE LOS DATOS
	char armas_nom[5][10]={{"CUCHILLO"},{"MARTILLO"},{"HACHA"},{"PISTOLA"},{"JERINGA"}};
	char lugar_nom[5][30]={{"ESTUDIO"},{"HABITACION PRINCIPAL"},{"CUARTO DE SERVICIO"},{"COMEDOR"},{"JARDIN"}};
	char personaje_nom[5][10]={{"JACK"},{"OLIVER"},{"OLIVIA"},{"ISABELLA"},{"GEORGE"}};
	char arma_imp[30];
	char lugar_imp[30];
	char personaje_imp[30];

	//VARIABLES ELECCION DE HISTORIA
	const int tamano = 5;
	int arma[tamano];
	int lugar[tamano];
	int personaje[tamano];
	int historia_selec;
	int arma_selec;
	int lugar_selec;
	int personaje_selec;
	
	//VARIABLES INFORMACION DE ARMAS, LUGARES Y PERSONAJES
	int elec;
	int op;
	char arma_mos[30];
	char personaje_mos[30];
	char lugar_mos[30];
	
	//VARIABLES PARA EL PRESUNTO ASESINO
	int	arma_prop;
	int lugar_prop;
	int personaje_prop;
	
	srand(time(0));
	
	historia_selec = 1 + rand() % 5; //ELECCION DE HISTORIA
	
	//**** ELECCION DE ARMA, LUGAR Y PERSONAJE
	for(int i=0; i<tamano; i++)
	{
		arma[i]=1 + rand() % 5;
		lugar[i]=1 + rand() % 5;
		personaje[i]=1 + rand() % 5;
	
			for(int j=0; j<=tamano; j++)
			{
				if(historia_selec == j)
				{
					arma_selec=arma[j-1];
					lugar_selec=lugar[j-1];
					personaje_selec=personaje[j-1];
				}
			}
	}
	//****
	
	
	//**** SE GUARDA EL NOMBRE DE ARMA. LUGAR Y PERSONAJE QUE SE ELIGIERON DE MANERA RANDOM EN UN ARRAY PARA PODER MOSTRAR
	for(int j=0; j<=5; j++)
	{
		if(j == arma_selec)
		{
			for(int i=0; i<30; i++)
			{
				arma_imp[i]=armas_nom[j-1][i];
			}
		}
	}
	
		for(int j=0; j<5; j++)
	{
		if(j == lugar_selec)
		{
			for(int i=0; i<30; i++)
			{
				lugar_imp[i]=lugar_nom[j-1][i];
			}
		}
	}
	
	
		for(int j=0; j<5; j++)
	{
		if(j == personaje_selec)
		{
			for(int i=0; i<30; i++)
			{
				personaje_imp[i]=personaje_nom[j-1][i];
			}
		}
	}
	//****

	//PARRAFO DE INSTRUCCIONES//
	cout<<"ESTE JUEGO RELATA LA HISTORIA DE UN DETECTIVE EL CUAL SE ENCARGARA DE DESCUBRIR EL"<<endl; 
	cout<<"RESPONSABLE DEL ASESINATO OCURRIDO EN UNA MANSION MIENTRAS EL TRANSCURSO DE UNA REUNION"<<endl;
	cout<<"TENDRAS 8 INTENTOS PARA REUNIR LA MAYOR CANTIDAD DE INFORMACION"<<endl;
	cout<<"UNA VEZ TERMINADOS ESTOS INTENTOS TENDRAS QUE ADIVINAR EL RESPONSABE DEL ASESINATO Y A SU VEZ"<<endl; 
	cout<<"EL ARMA CON EL QUE SE COMETE EL HOMICIDIO Y EL LUGAR EN EL QUE OCURRIO"<<endl;
	system("PAUSE");
	system("cls");
	
	//PARRAFO DE HISTORIA//
	cout<<"UNA NOCHE FRIA DE INVIERNO EN LA MANSION DEL MATRIMONIO DE JACK E ISABELLA, SE LLEVO A CABO UNA REUNION "<<endl;
	cout<<"CON OLIVER EL BANQUERO DE LA CIUDAD PARA TRATAR ASUNTOS DE NEGOCIOS, A SU VEZ EN LA MANSION SE ENCONTRABAN "<<endl;
	cout<<"OLIVIA SU AMA DE LLAVES Y EL JARDINERO GEORGE LOS CUALES SE ENCARGABAN DE REALIZAR SUS ULTIMAS TAREAS DEL DIA "<<endl;
	cout<<"CUANDO DE REPENTE SE ENCONTRO UN CUERPO SIN VIDA EN UNA DE LAS HABITACIONES DE LA MANSION POR LO CUAL PROSIGUIERON "<<endl;
	cout<<"A LLAMAR AL DETECTIVE DE LA CIUDAD PARA DESCIFRAR EL MISTERIO DE ESTE ASESINATO."<<endl;
	cout<<"SERA TU DEBER ENCONTRAR AL ASESINO"<<endl;
	system("PAUSE");
	system("cls");
	
	//**** REALIZA LAS 8 PREGUNTAS PARA OBTENER LA INFORMACION
	for(int p=0; p<9; p++)
	{
		cout<<"¿SOBRE QUE DESEAS SABER?"<<endl;
		cout<<"1. ARMA"<<endl;
		cout<<"2. PERSONAJE"<<endl;
		cout<<"3. LUGAR"<<endl;
		cin>>op;
		
			switch(op)
			{
				case 1:		//ARMAS
					{
						cout<<"¿DE CUAL ARMA QUIERES SABER?"<<endl;
						cout<<"1. CUCHILLO"<<endl;
						cout<<"2. MARTILLO"<<endl;
						cout<<"3. HACHA"<<endl;
						cout<<"4. PISTOLA"<<endl;
						cout<<"5. JERINGA"<<endl;
						cin>>elec;
						
						switch(elec)
						{
							case 1:		//Cuchillo
							{
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											arma_mos[i]=armas_nom[j-1][i];
										}
									}
								}
								
								analisis_arma(elec, arma_selec, arma_imp, arma_mos);
								break;
							}
							
							case 2:		//Martillo
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											arma_mos[i]=armas_nom[j-1][i];
										}
									}
								}
								
								analisis_arma(elec, arma_selec, arma_imp, arma_mos);
								break;
							}
							
							case 3:		//Hacha
							{
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											arma_mos[i]=armas_nom[j-1][i];
										}
									}
								}
								
								
								analisis_arma(elec, arma_selec, arma_imp, arma_mos);
								break;
							}
							
							case 4:		//Pistola
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											arma_mos[i]=armas_nom[j-1][i];
										}
									}
								}
								
								analisis_arma(elec, arma_selec, arma_imp, arma_mos);
								break;
							}
							
							case 5:		//Jeringa
							{
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											arma_mos[i]=armas_nom[j-1][i];
										}
									}
								}
								
								
								analisis_arma(elec, arma_selec, arma_imp, arma_mos);
								break;
							}
							
							default:
							{
								cout<<"***** ERROR *****"<<endl;
								break;
							}
						}
						
					break;
					}
					
				case 2:		//PERSONAJE
					{
						cout<<"¿DE CUAL PERSONAJE QUIERES SABER?"<<endl;
						cout<<"1. JACK"<<endl;
						cout<<"2. OLIVER"<<endl;
						cout<<"3. OLIVIA"<<endl;
						cout<<"4. ISABELLA"<<endl;
						cout<<"5. GEORGE"<<endl;
						cin>>elec;
						
						switch(elec)
						{
							case 1:		//Jack (Comerciante)
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											personaje_mos[i]=personaje_nom[j-1][i];
										}
									}
								}
								
								analisis_personaje(elec, personaje_selec, personaje_imp, personaje_mos);
								break;
							}
							
							case 2:		//Oliver (Banquero)
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											personaje_mos[i]=personaje_nom[j-1][i];
										}
									}
								}
								
								analisis_personaje(elec, personaje_selec, personaje_imp, personaje_mos);
								break;
							}
							
							case 3:		//Olivia (Ama de llaves)
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											personaje_mos[i]=personaje_nom[j-1][i];
										}
									}
								}
								
								analisis_personaje(elec, personaje_selec, personaje_imp, personaje_mos);
								break;
							}
							
							case 4:		//Isabella (Doctora)
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											personaje_mos[i]=personaje_nom[j-1][i];
										}
									}
								}
								
								analisis_personaje(elec, personaje_selec, personaje_imp, personaje_mos);
								break;
							}
							
							case 5:		//George (Jardinero)
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											personaje_mos[i]=personaje_nom[j-1][i];
										}
									}
								}
								
								analisis_personaje(elec, personaje_selec, personaje_imp, personaje_mos);
								break;
							}
							
							default:
							{
								cout<<"***** ERROR *****"<<endl;
								break;
							}
						}
					break;
					}
					
				case 3:		//LUGAR
					{
						cout<<"¿DE CUAL LUGAR QUIERES SABER?"<<endl;
						cout<<"1. ESTUDIO"<<endl;
						cout<<"2. HABITACION PRINCIPAL"<<endl;
						cout<<"3. CUARTO DE SERVICIO"<<endl;
						cout<<"4. COMEDOR"<<endl;
						cout<<"5. JARDIN"<<endl;
						cin>>elec;
						
						switch(elec)
						{
							case 1:		//Estudio
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											lugar_mos[i]=lugar_nom[j-1][i];
										}
									}
								}
								
								
								analisis_lugar(elec, lugar_selec, lugar_imp, lugar_mos);
								break;
							}
							
							case 2:		//Habitacion principal
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											lugar_mos[i]=lugar_nom[j-1][i];
										}
									}
								}
								
								analisis_lugar(elec, lugar_selec, lugar_imp, lugar_mos);
								break;
							}
							
							case 3:		//Cuarto de servicio
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											lugar_mos[i]=lugar_nom[j-1][i];
										}
									}
								}
								
								analisis_lugar(elec, lugar_selec, lugar_imp, lugar_mos);
								break;
							}
							
							case 4:		//Comedor
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											lugar_mos[i]=lugar_nom[j-1][i];
										}
									}
								}
								
								analisis_lugar(elec, lugar_selec, lugar_imp, lugar_mos);
								break;
							}
							
							case 5:		//Jardin
							{
								
								for(int j=0; j<=5; j++)
								{
									if(j == elec)
									{
										for(int i=0; i<30; i++)
										{
											lugar_mos[i]=lugar_nom[j-1][i];
										}
									}
								}
								
								analisis_lugar(elec, lugar_selec, lugar_imp, lugar_mos);
								break;
							}
							
							default:
							{
								cout<<"***** ERROR *****"<<endl;
								break;
							}
						}
					break;
					}
					
				default:
					{
						cout<<"***** ERROR *****"<<endl;
						break;
					}
			}
	}
	//****
	
	//**** DONDE LE PEGUNTA AL JUGADOR SU CONCLUSION
	cout<<"----- ARMAS -----"<<endl;
	cout<<"1. CUCHILLO"<<endl;
	cout<<"2. MARTILLO"<<endl;
	cout<<"3. HACHA"<<endl;
	cout<<"4. PISTOLA"<<endl;
	cout<<"5. JERINGA"<<endl;
	
	cout<<endl;
	
	cout<<"----- PERSONAJES -----"<<endl;
	cout<<"1. JACK"<<endl;
	cout<<"2. OLIVER"<<endl;
	cout<<"3. OLIVIA"<<endl;
	cout<<"4. ISABELLA"<<endl;
	cout<<"5. GEORGE"<<endl;
	
	cout<<endl;
	
	cout<<"----- LUGARES -----"<<endl;
	cout<<"1. ESTUDIO"<<endl;
	cout<<"2. HABITACION PRINCIPAL"<<endl;
	cout<<"3. CUARTO DE SERVICIO"<<endl;
	cout<<"4. COMEDOR"<<endl;
	cout<<"5. JARDIN"<<endl;
	
	cout<<endl;
	
	cout<<"¿CUAL FUE EL ARMA HOMICIDA?"<<endl;
	cin>>arma_prop;
	
	cout<<endl;
	
	cout<<"¿QUIEN FUE EL ASESINO?"<<endl;
	cin>>personaje_prop;
	
	cout<<endl;
	
	cout<<"¿DONDE ASESINARON A LA VICTIMA?"<<endl;
	cin>>lugar_prop;
	
	cout<<endl;
	//****
	
	//TEXTO DE LA SUPOSICION CORRECTA
	if(arma_prop == arma_selec && personaje_prop == personaje_selec && lugar_prop == lugar_selec)
	{
		cout<<"FELICIDADES HAZ ENCONTRADO AL ASESINO"<<endl;
		cout<<endl;
		cout<<"EL ASESINO FUE ";
		puts(personaje_imp);
		cout<<"EL CUAL UTILIZO EL OBJETO ";
		puts(arma_imp);
		cout<<"PARA ASESINARLO EN LA HABITACION ";
		puts(lugar_imp);
		
	}
	
	//TEXTO LA SUPOSICION ERRONEA
	else 
	{
		cout<<"TUS SUPOSICIONES FUERON ERRONEAS, NO ENCONTRASTE AL ASESINO"<<endl;
		cout<<endl;
		cout<<"EL ASESINO FUE ";
		puts(personaje_imp);
		cout<<"EL CUAL UTILIZO EL OBJETO ";
		puts(arma_imp);
		cout<<"PARA ASESINARLO EN LA HABITACION ";
		puts(lugar_imp);
	}
	
system("PAUSE");
return 0;
}