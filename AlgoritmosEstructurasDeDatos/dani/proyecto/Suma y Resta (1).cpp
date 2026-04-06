void sumarM(){
	double inicio;
	comienzoM();
	
	cout<<endl<<"La matriz resultante de la suma es:"<<endl;
	for(int fila=0;fila<filasM;fila++){
		for (int columna=0;columna<columnasM;++columna){	
			inicio=0;
			for(int Matriz=0;Matriz<matrices;++Matriz){
				inicio=inicio+matrizCuentasM[Matriz][fila][columna];
			}
			cout<<"\t"<<inicio;
		}
		cout<<endl;	
	}
	preguntaM();		
}

void restarM(){
	double inicio;
	comienzoM();
	
	cout<<endl<<"La matriz resultante de la resta es:"<<endl;
	for(int fila=0;fila<filasM;fila++){
		for (int columna=0;columna<columnasM;++columna){	
			inicio=0;
			for(int Matriz=0;Matriz<matrices;++Matriz){
				if(Matriz==0)
				inicio=inicio+matrizCuentasM[Matriz][fila][columna];
				else
				inicio=inicio+(-1*matrizCuentasM[Matriz][fila][columna]);
			}
			cout<<"\t"<<inicio;
		}
		cout<<endl;	
	}
	preguntaM();		
}
