
public class Secretaria extends Empleado
{
	private String oficina;
	private Gerente jefe;
	
	public Secretaria(String nombre, String direccion, int sSN, int numero, String correo, String oficina,
			Gerente jefe) 
	{
		super(nombre, direccion, sSN, numero, correo);
		this.oficina = oficina;
		this.jefe = jefe;
	}
	public String getOficina() {
		return oficina;
	}
	
	public void setOficina(String oficina) {
		this.oficina = oficina;
	}
	
	public Gerente getJefe() {
		return jefe;
	}
	
	public void setJefe(Gerente jefe) {
		this.jefe = jefe;
	}
	@Override
	public String toString() {
		return "Secretaria [oficina=" + oficina + ", jefe=" + jefe + super.toString() + "]";
	}
	
}
