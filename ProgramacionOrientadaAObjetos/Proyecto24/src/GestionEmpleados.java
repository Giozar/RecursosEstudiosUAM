import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Scanner;

public class GestionEmpleados 
{
	public static void main(String[] args) 
	{
		UtileriasArchivos util = new UtileriasArchivos();
		
		List<Empleado> listaEmpleados = new ArrayList<Empleado>();
		
		String validar = null;
                int opcion = 0;
		
		System.out.println(" ================================= ");		
		do
		{
			System.out.println(" M E N U   P R I N C I P A L ");		
			System.out.println("1. Deserializar Empleados");
			System.out.println("2. Registrar Empleado");
			System.out.println("3. Eliminar Empleado");
			System.out.println("4. Listado de Empleados");
			System.out.println("5. Serializar");
                        System.out.println("SALIR. Cualquier otro numero");
			
			System.out.println("Escribe el numero de la opcion:  ");
                        validar = leeCadena();
                        
                        while(validarNumero(validar) == false){
                            System.out.println("Escribe el numero de la opcion:  ");
                            validar = leeCadena();
                        }
                        opcion = ConNumero(validar);
                        
			
                        
                        
			
			switch(opcion)
			{
			case 1:
				System.out.println("Nombre del archivo para deserializar");
				String arch = leeCadena();
				
				if(existe(arch))
					listaEmpleados = util.deserializaListaEmpleados(arch);

				break;
			case 2:
                            
                            
				System.out.println("Registro de nuevo Empleado");
				System.out.println("Nombre: ");
                                //verificar si nombre ya existe
                                String nombre = leeCadena();
                                while(util.verNombre(nombre, listaEmpleados) == true){
                                    System.out.println("ingrese otra nombre");
                                    nombre = leeCadena();
                                }
				
				System.out.println("Direccion: ");
				String direccion = leeCadena();
				System.out.println("Numero de SSN: ");
                                validar = leeCadena();
                                int ssn = 0;
                                while(validarNumero(validar) == false){
                                    System.out.println("Escribe el numero de SSN:  ");
                                    validar = leeCadena();
                                }
                                ssn = ConNumero(validar);
                                
				
				System.out.println("Numero de clave: ");
                                validar = leeCadena();
                                int clave = 0;
                                while(validarNumero(validar) == false){
                                    System.out.println("Escribe el numero de la clave:  ");
                                    validar = leeCadena();
                                }
                                clave = ConNumero(validar);
                                
                                //verificar si clave ya existe
                                while(util.verClave(clave, listaEmpleados) == true){
                                    System.out.println("ingrese otra clave");
                                    clave = leeEntero();
                                }
				System.out.println("Correo: ");
				String correo = leeCadena();
                                
                                System.out.println("Tipos de empleados \n1 Gerente, 2)secretaria, 3)Intendente, 4)Empleado");
                                validar = leeCadena();
				int tipo = 0;

                                    while(validarNumero(validar) == false){
                                        System.out.println("Ingresa con numero tipo de mepleado:  ");
                                        validar = leeCadena();
                                    }
                                    tipo = ConNumero(validar);
                                
                                
                                Empleado nuevoEmpleado = null;
                                
                                
                                if(tipo == 2 && util.quienEselGerente(listaEmpleados) != null ){//secretaria
                                    System.out.println("Oficina");
                                    String oficina = leeCadena();
                                    Gerente jefe = util.quienEselGerente(listaEmpleados);
                                    nuevoEmpleado = new Secretaria(nombre, direccion, ssn, clave, correo, oficina, jefe);
                                }
                                else if(tipo == 3 && util.quienEselGerente(listaEmpleados) != null){//intendente
                                    System.out.println("Asignacion");
                                    String asignacion = leeCadena();
                                    nuevoEmpleado = new Intendente(nombre, direccion, ssn, clave, correo, asignacion);
                                }else if(tipo == 4 && util.quienEselGerente(listaEmpleados) != null){//Empleado
                                    nuevoEmpleado = new Empleado(nombre, direccion, ssn, clave, correo);
                                }
                                else if(tipo == 1 && (util.quienEselGerente(listaEmpleados) == null)){//gerente
                                    System.out.println("Departamento");
                                    String departamento = leeCadena();
                                    nuevoEmpleado = new Gerente(nombre, direccion, ssn, clave, correo, departamento);
                                }
                                else if(util.quienEselGerente(listaEmpleados) == null){
                                    System.out.println("No hay gerente, registra uno antes");
                                }else{
                                    System.out.println(" ya hay gerente, no puedes registar otro");
                                }
                                
                                if(tipo>4 || tipo<1){
                                    System.out.println("Tipo no valido");
                                }
                                //se añade el usuario a ala lista
                                if(nuevoEmpleado != null){
                                    listaEmpleados.add(nuevoEmpleado);
                                }
				
				break;
				
			case 3:
				//Eliminar Empleado
				System.out.println("Eliminar un empleado");
				System.out.println("Buscar por (N)nombre o por (C)clave: ");
                                
				String criterio = leeCadena();
                                
                                if(criterio.equalsIgnoreCase("N")){
                                    System.out.println("proporciona nombre de empleado a eliminar");
                                    String nomEliminar = leeCadena();
                                    util.eliminaEmpleadoNombre(nomEliminar, listaEmpleados);
                                }else if(criterio.equalsIgnoreCase("C")){
                                    System.out.println("proporciona clave de empleado a eliminar: ");
                                    int claveEliminar = leeEntero();
                                    util.eliminaEmpleadoClave(claveEliminar, listaEmpleados);
                                }else{
                                    System.out.println("opcion incorrecta");
                                }
				
				//M�todo para eliminar a un empleado por su clave
				
				
				break;
				
			case 4:
				System.out.println("Listado de Empleados");
				
				Iterator<Empleado> iter = listaEmpleados.iterator();
				
				while(iter.hasNext())
				{
                                    Empleado elemento = iter.next();
                                    
                                    if(listaEmpleados != null){
                                        System.out.println(elemento.toString());
                                    }

				}
				break;
			case 5:
                                if(util.existenDatos(listaEmpleados)){
                                    System.out.println("Nombre del archivo para serializar");
                                    arch = leeCadena();
                                    util.serializaListaEmpleados(listaEmpleados, arch);
                                }else{
                                    System.out.println("Registra empleados");
                                }
				
				
				break;
                        default: System.out.println("saliendo");
                            break;
			}
			
		}while(opcion >0 && opcion<6);
	}

	public static String leeCadena()
	{
		Scanner scan = new Scanner(System.in);
		String cadena = scan.nextLine();
		return cadena;
	}
	
	public static int leeEntero()
	{
		Scanner scan = new Scanner(System.in);
		int numero = scan.nextInt();
		return numero;
	}

	public static boolean existe(String archivo)
	{
		File archVerificado = new File(archivo);
		if (archVerificado.exists()) 
		{
			System.out.println("Si existe"); 
			return true;
		}
            
            else
            {
                    System.out.println("Archivo no existe"); 
                    return false;
            }   
	}
        
        public static boolean validarNumero(String dato)
	{
            boolean esNumero = false;
		
            if (dato.matches("[0-9]*")){
                esNumero = true;
            }else{
                System.out.println("no es numero");
                esNumero = false;
            }
            
            return esNumero;
        }
        
        public static int ConNumero(String dato)
	{
            int numero = Integer.parseInt(dato);
            return numero;
        }

}
