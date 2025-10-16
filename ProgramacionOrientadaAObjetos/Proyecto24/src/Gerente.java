
public class Gerente extends Empleado
{
	private String departamento;
	
	public Gerente(String nombre, String direccion, int sSN, int numero, String correo, String departamento) {
		super(nombre, direccion, sSN, numero, correo);
		this.departamento = departamento;
	}
	
	public String getDepartamento() {
		return departamento;
	}
	
	public void setDepartamento(String departamento) {
		this.departamento = departamento;
	}

	@Override
	public String toString() {
		return "Gerente [departamento=" + departamento + super.toString() + "]";
	}	
	
}
