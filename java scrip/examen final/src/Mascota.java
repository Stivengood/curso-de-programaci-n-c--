/*
Autor: Stiven Jami
 */
public abstract class Mascota {
    private int id;
    private String nombre;
    private int edad;
    public Mascota(int id, String nombre, int edad){
        this.id = id;
        this.nombre = nombre;
        this.edad = edad;
    }
    public int getId(){
        return id;
    }
    public String getNombre(){
        return nombre;
    }
    public int getEdad(){
        return edad;
    }
    public void sitId(int id){
        this. id = id;
    }
    public void setNombre(String nombre){
        this.nombre = nombre;
    }
    public void setEdad(int edad){
        this.edad = edad;
    }
    public void mostrarInfo(){
        System.out.println("id:" + this.id);
        System.out.println("Nombre:" + this.nombre);
        System.out.println("Edad:" + this.edad);
    }
    public abstract String hacerSonido();
}
class Loro extends Mascota{
    public Loro(int id, String nombre, int edad){
        super(id, nombre, edad);
    }
    public String hacerSonido(){
        return "hola hola";
    }
}
class Pez extends Mascota{
    public Pez(int id, String nombre, int edad){
        super(id, nombre, edad);
    }
    public String hacerSonido(){
        return "glu glu";
    }
}