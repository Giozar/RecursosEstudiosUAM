import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LecturaDatosArreglo 
{

	public static void main(String[] args) throws IOException 
	{
		String arregloNombres [] = new String[5];
		BufferedReader teclado = new BufferedReader(new InputStreamReader(System.in));
		
		
		
		String[] carros = {"Volvo", "BMW", "Ford", "Mazda"};
		for (String i : carros) 
		{
		  System.out.println(i);
		}
		
		//Lea los nombres 
		for(int i=0; i<arregloNombres.length; i++)
		{
			System.out.println("Escribe un nombre ");
			arregloNombres[i] = teclado.readLine();
		}
		
		System.out.println("Resultado======");
		for(int i=0; i<arregloNombres.length; i++)
		{
			System.out.println("El nombre de " + i + " es " + arregloNombres[i]);
		}
		

	}

}
