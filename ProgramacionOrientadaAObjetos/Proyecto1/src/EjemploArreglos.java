import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class EjemploArreglos 
{

	public static void main(String[] args) throws IOException 
	{
		String linea;
		
		float num;
		
		BufferedReader teclado = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Escribe algo: ");
		linea = teclado.readLine();
		
		num = Float.parseFloat(linea);
		
		System.out.println("Escribiste " + num);

	}

}
