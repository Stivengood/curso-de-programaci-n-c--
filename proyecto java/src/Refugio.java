/*
Autor: Stiven Jami
Tarea: Proyecto  */
public class Refugio {
    private int id;
    private String nombre;
    private int edad;
    private String estado;
    public Refugio( int id, String nombre, int edad){
        this.id = id;
        this.nombre = nombre;
        this.edad = edad;
        this.estado = "ACTIVO";
    }
    public void hacerSonido(){
        System.out.println("Sonido generico:");
    }
    public void mostrarAccion(){
        System.out.println("Accion generica:");
    }
    public int getId(){
        return id;
    }
    public String getNombre(){
        return nombre;
    }
    public String getEstado(){
        return estado;
    }
    public void setEstado(String estado){
        this.estado =estado;
    }
    public int getEdad(){
        return edad;
    }
    
    }


