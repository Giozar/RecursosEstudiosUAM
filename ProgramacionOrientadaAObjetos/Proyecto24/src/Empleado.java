import java.io.Serializable;


public class Empleado implements Serializable
{
	private String nombre;
	private String direccion;
	private int SSN;
	private int numero;
	private String correo;
	
	public Empleado()
	{
	}
	
	public Empleado(String nombre, String direccion, int sSN, int numero, String correo) 
	{
		super();
		this.nombre = nombre;
		this.direccion = direccion;
		SSN = sSN;
		this.numero = numero;
		this.correo = correo;
	}

	public String getNombre() {
		return nombre;
	}

	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getDireccion() {
		return direccion;
	}

	public void setDireccion(String direccion) {
		this.direccion = direccion;
	}

	public int getSSN() {
		return SSN;
	}

	public void setSSN(int sSN) {
		SSN = sSN;
	}

	public int getNumero() {
		return numero;
	}

	public void setNumero(int numero) {
		this.numero = numero;
	}

	public String getCorreo() {
		return correo;
	}

	public void setCorreo(String correo) {
		this.correo = correo;
	}

	@Override
	public String toString() {
		return "\nNombre=" + nombre + ", \nDireccion=" + direccion + ", \nSSN=" + SSN + ", \nNumero=" + numero
				+ ", \nCorreo=" + correo;
	}
}
