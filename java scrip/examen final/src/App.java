/*
Autor: Stiven Jami */
import java.util.*;

public class App {
    static ArrayList<Mascota> lista = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        int op = 0;
        while (op != 5) {
            System.out.println("\n--- MENÚ GESTIÓN MASCOTAS ---");
            System.out.println("1. Registrar mascota");
            System.out.println("2. Mostrar mascotas");
            System.out.println("3. Ejecutar sonido (por ID)");
            System.out.println("4. Buscar por nombre");
            System.out.println("5. Salir");
            System.out.print("Seleccione una opción: ");
            
            try {
                op = Integer.parseInt(sc.nextLine());
                switch (op) {
                    case 1: registrar(); break;
                    case 2: mostrarTodo(); break;
                    case 3: ejecutarSonido(); break;
                    case 4: buscarPorNombre(); break;
                    case 5: System.out.println("Saliendo del sistema..."); break;
                    default: System.out.println("Opción no válida.");
                }
            } catch (Exception e) { 
                System.out.println("Error: Ingrese un número válido para las opciones."); 
            }
        }
    }

    private static void registrar() {
        try {
            System.out.print("Elija tipo (1:Loro, 2:Pez): ");
            int tipo = Integer.parseInt(sc.nextLine());
            System.out.print("ID: "); 
            int id = Integer.parseInt(sc.nextLine());
            System.out.print("Nombre: "); 
            String nom = sc.nextLine();
            System.out.print("Edad: "); 
            int edad = Integer.parseInt(sc.nextLine());

            if (id > 0 && edad > 0 && !nom.trim().isEmpty()) {
                if (tipo == 1) lista.add(new Loro(id, nom, edad));
                else if (tipo == 2) lista.add(new Pez(id, nom, edad));
                else System.out.println("Tipo no reconocido.");
                System.out.println("¡Mascota registrada!");
            } else {
                System.out.println("Error: El ID y la Edad deben ser mayores a 0 y el Nombre no puede estar vacío.");
            }
        } catch (Exception e) {
            System.out.println("Error: Asegúrese de ingresar números donde corresponde.");
        }
    }

    private static void mostrarTodo() {
        if (lista.isEmpty()) {
            System.out.println("La lista está vacía.");
            return;
        }
        for (Mascota m : lista) {
            m.mostrarInfo();
            System.out.println("Sonido: " + m.hacerSonido());
            System.out.println("---------------------------");
        }
    }

    private static void ejecutarSonido() {
        System.out.print("Ingrese ID a buscar: ");
        int id = Integer.parseInt(sc.nextLine());
        boolean encontrada = false;
        for (Mascota m : lista) {
            if (m.getId() == id) { 
                System.out.println("Resultado: " + m.hacerSonido()); 
                encontrada = true; 
                break; 
            }
        }
        if (!encontrada) System.out.println("Mascota no encontrada.");
    }

    private static void buscarPorNombre() {
        System.out.print("Ingrese nombre a buscar: ");
        String nom = sc.nextLine();
        boolean encontrada = false;
        for (Mascota m : lista) {
            if (m.getNombre().equalsIgnoreCase(nom)) { 
                m.mostrarInfo(); 
                encontrada = true; 
                break; 
            }
        }
        if (!encontrada) System.out.println("Mascota no encontrada.");
    }
}
