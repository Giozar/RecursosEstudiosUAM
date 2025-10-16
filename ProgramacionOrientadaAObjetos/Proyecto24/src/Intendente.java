public class Intendente extends Empleado
{
	private String asignacion;
	
	public Intendente(String nombre, String direccion, int sSN, int numero, String correo, String asignacion) 
	{
		super(nombre, direccion, sSN, numero, correo);
		this.asignacion = asignacion;
	}
	
	public String getAsignacion() {
		return asignacion;
	}
	
	public void setAsignacion(String asignacion) {
		this.asignacion = asignacion;
	}

	@Override
	public String toString() {
		return "Intendente [asignacion=" + asignacion + super.toString() + "]";
	}
	
	
}
