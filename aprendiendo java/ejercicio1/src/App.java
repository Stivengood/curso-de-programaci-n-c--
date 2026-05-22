/*
Autor: Stiven Jami
Tarea: Ejercicio 1 */
public class App {
    public static void main(String[] args) throws Exception {
        Mascota mascota1 = new Mascota("Leo", "Perro", 3);
        Mascota mascota2 = new Mascota("Ferrari", "Gato", 1);
        System.out.println("Mascota 1");
        mascota1.mostrarInfo();
        System.out.println("Mascota 2");
        mascota2.mostrarInfo();
        
    }
}
