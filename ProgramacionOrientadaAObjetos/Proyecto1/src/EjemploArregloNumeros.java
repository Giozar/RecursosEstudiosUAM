import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class EjemploArregloNumeros 
{

	public static void main(String[] args) throws IOException 
	{
		int arregloEdades[] = new int[15];
		float arregloEstaturas[] = new float[15];
		
		BufferedReader teclado = new BufferedReader(new InputStreamReader(System.in));
		
		for(int i=0; i< arregloEdades.length; i++)
		{
			System.out.println("Proporciona la edad: ");
			int edad = Integer.parseInt(teclado.readLine());
			
			arregloEdades[i] = edad;
			
			System.out.println("Proporciona la estatura: ");
			float est = Float.parseFloat(teclado.readLine());
			
			arregloEstaturas[i] = est;
		}
		
		
		for(int i=0; i< arregloEdades.length; i++)
		{
			System.out.println("Edad " + arregloEdades[i] + " estatura " + arregloEstaturas[i]);
		}
		
		//Ciclo que permita calcular el promedio de edades y de estaturas
		
		//Ciclo que encuentre el mayor y el menor de edades y estaturas
		
		//Cliclo que genere un arreglo de enteros con las edades oredenadas de mayor a menor
		
		//Cliclo que genere un arreglo de flotantes con las estaturas oredenadas de mayor a menor

	}

}
