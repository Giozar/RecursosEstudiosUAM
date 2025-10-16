import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.List;

public class UtileriasArchivos 
{

	// M�todo para serializar un arreglo de Empleados
	public void serializaEmpleado(Empleado [] empleado, String archivo)
	{
		try 
		{	
			FileOutputStream fileOut = new FileOutputStream(archivo);
			
			ObjectOutputStream out = new ObjectOutputStream(fileOut);
			out.writeObject(empleado);
			
			out.close();
			fileOut.close();
			
			System.out.printf("Datos serializados en " + archivo);
		} 
		catch (IOException e) 
		{
			System.out.println("Error de I O");
			e.printStackTrace();
		} 
	}

	// M�todo para deserializar un arreglo de Empleados
	public Empleado [] deserializaEmpleado(String archivo) 
	{
		Empleado [] empleado = null;

		try 
		{
			FileInputStream fileIn = new FileInputStream(archivo);
			ObjectInputStream in = new ObjectInputStream(fileIn);
			empleado = (Empleado[]) in.readObject();
			
			in.close();
			fileIn.close();
			
			System.out.printf("Datos deserializados");
		} 
		catch (IOException e) 
		{
			System.out.println("Error de I O");
			e.printStackTrace();
		} 
		catch (ClassNotFoundException e) 
		{
			System.out.println("Clase de referencia no encontrada");
			e.printStackTrace();
		} 
		return empleado;
	}
	
	// M�todo para serializar una Lista de Empleados
		public void serializaListaEmpleados(List<Empleado> empleado, String archivo)
		{
			try 
			{
				FileOutputStream fileOut = new FileOutputStream(archivo);
				ObjectOutputStream out = new ObjectOutputStream(fileOut);
				out.writeObject(empleado);
				
				out.close();
				fileOut.close();
				
				System.out.printf("Datos serializados en " + archivo);
			} 
			catch (IOException e) 
			{
				System.out.println("Error de I O");
				e.printStackTrace();
			} 
		}
	
	
	// M�todo para deserializar una lista de Empleados
		@SuppressWarnings("unchecked")
		public List<Empleado> deserializaListaEmpleados(String archivo) 
		{
			List<Empleado> empleado = null;

			try 
			{
				FileInputStream fileIn = new FileInputStream(archivo);
				ObjectInputStream in = new ObjectInputStream(fileIn);
				empleado = (List<Empleado>) in.readObject();
				
				in.close();
				fileIn.close();
				
				System.out.printf("Datos deserializados");
			} 
			catch (IOException e) 
			{
				System.out.println("Error de I O");
				e.printStackTrace();
			} 
			catch (ClassNotFoundException e) 
			{
				System.out.println("Clase de referencia no encontrada");
				e.printStackTrace();
			} 
			return empleado;
		}
        public boolean existenDatos(List<Empleado> lista){
                    if(lista != null && lista.size() != 0){
                        System.out.println("Hay empleados en la lista");
                        return true;
                    }else{
                        System.out.println("No hay empleados");
                        return false;
                    }
        }
	
	//Suponiendo que solo hay un gerente
	public Gerente quienEselGerente(List<Empleado> lista)
	{
		Gerente gerente = null;
		
		for(Empleado empleado:lista)
			if(empleado instanceof Gerente)
			{
				System.out.println("Gerente encontrado");
				gerente = (Gerente) empleado;
			}
		return gerente;
	}
	
	public void eliminaEmpleadoClave(int clave, List<Empleado> lista)
	{
		Empleado aEliminar = new Empleado();
		
		for(Empleado emp:lista)
			if(emp.getNumero()== clave)
				aEliminar = emp;
		
		//Imprimir datos del empleado a eliminar
		if(aEliminar.getNombre() != null){
                    System.out.println("Datos del empleado a eliminar");
                    System.out.println(aEliminar.toString());
                }else{
                    System.out.println("El usuario no existe en la base");
                }
		
		lista.remove(aEliminar);
	}
        public void eliminaEmpleadoNombre(String nombre, List<Empleado> lista)
	{
		Empleado aEliminar = new Empleado();
		
		for(Empleado emp:lista)
			if(emp.getNombre().equals(nombre))
				aEliminar = emp;
		
		//Imprimir datos del empleado a eliminar
                if(aEliminar.getNombre() != null){
                    System.out.println("Datos del empleado a eliminar");
                    System.out.println(aEliminar.toString());
                }else{
                    System.out.println("El usuario no existe en la base");
                }
		
		
		lista.remove(aEliminar);
	}
        public boolean verClave(int clave, List<Empleado> lista)
	{
		Empleado aBuscar = new Empleado();
                boolean encontrado = false;
		
		for(Empleado emp:lista){
                    if(emp.getNumero()== clave){
                            aBuscar = emp;
                            System.out.println("Clave ya existe");
                            encontrado = true;
                    }
                }
                return encontrado;
	}
        
        public boolean verNombre(String nombre, List<Empleado> lista)
	{
		Empleado aBuscar = new Empleado();
                boolean encontrado = false;
		
		for(Empleado emp:lista){
                    if(emp.getNombre().equals(nombre)){
                            aBuscar = emp;
                            System.out.println("Nombre ya existe");
                            encontrado = true;
                    }
                }
			
                return encontrado;
		
	}

}
