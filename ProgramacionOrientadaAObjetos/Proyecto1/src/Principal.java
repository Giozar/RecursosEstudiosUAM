import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Principal 
{

	public static void main(String[] args) throws IOException 
	{
		int arregloEdades[] = new int[3];
		float arregloEstaturas[] = new float[3];
		BufferedReader teclado = new BufferedReader(new InputStreamReader(System.in));
		OperacionesArreglos oper = new OperacionesArreglos();
		
		for(int i=0; i< arregloEdades.length; i++)
		{
			System.out.println("Proporciona la edad: ");
			int edad = Integer.parseInt(teclado.readLine());
			arregloEdades[i] = edad;
			
			System.out.println("Proporciona la estatura: ");
			float est = Float.parseFloat(teclado.readLine());
			arregloEstaturas[i] = est;
		}
		
		oper.imprimeArreglos(arregloEdades, arregloEstaturas);
		
		System.out.println("El promedio de edades es: " + oper.promedioEdades(arregloEdades));
		
		System.out.println("El promedio de estaturas es: " + oper.promedioEstaturas(arregloEstaturas));
		
		System.out.println("La edad mayor es: " + oper.enteroMayor(arregloEdades));
		
		System.out.println("La edad menor es: " + oper.enteroMenor(arregloEdades));
	}

}
