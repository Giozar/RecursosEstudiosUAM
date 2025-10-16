
public class OperacionesArreglos 
{

	public void imprimeArreglos(int arregloEnteros[], float arregloFlotantes[]) {
		for (int i : arregloEnteros) {
			System.out.println("Edad " + i);
		}

		for (float i : arregloFlotantes) {
			System.out.println("Estaturas " + i);
		}
	}

	// Método que permita calcular el promedio de edades
	public float promedioEdades(int arregloEnteros[]) {

		float acumulador = 0;

		for (int i : arregloEnteros)
			acumulador += i;

		return acumulador / arregloEnteros.length;

	}

	// Método que permita calcular el promedio de estaturas
	public float promedioEstaturas(float arregloFlotantes[]) {

		float acumulador = 0;

		for (float i : arregloFlotantes)
			acumulador += i;

		return acumulador / arregloFlotantes.length;

	}

	// Ciclo que encuentre el mayor de edades
	public int enteroMayor(int arregloEnteros[]) {
		int mayor = arregloEnteros[0];
		for (int i = 1; i < arregloEnteros.length; i++) {
			if (arregloEnteros[i] > mayor)
				mayor = arregloEnteros[i];
		}
		return mayor;
	}

	// Ciclo que encuentre el menor de edades
	public int enteroMenor(int arregloEnteros[]) {
		int menor = arregloEnteros[0];
		for (int i = 1; i < arregloEnteros.length; i++) {
			if (arregloEnteros[i] < menor)
				menor = arregloEnteros[i];
		}
		return menor;
	}
	

	// Método que devuelva un arreglo de enteros con las edades oredenadas
	public int [] arregloEnterosOrdenado(int arregloEnteros[])
	{
		int ordenado[] = null;
		
		
		
		return ordenado;
	}

	// Método que genere un arreglo de flotantes con las estaturas oredenadas
	public float [] arregloFlotantesOrdenado(float arregloFlotantes[])
	{
		float ordenado[] = null;
		
		
		
		return ordenado;
	}

}
