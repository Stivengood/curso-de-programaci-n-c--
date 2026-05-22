public class Mascota {
    String nombre;
    String especie;
    int edad;
    public Mascota(String nombre, String especie, int edad){
    this.nombre = nombre;
    this.especie = especie;
    this.edad = edad;
    }
    public void mostrarInfo(){
    System.out.println("Nombre:"+ this.nombre);
    System.out.println("Especie: + this.especie");
    System.out.println("Edad:" + this.edad);

    }


}
