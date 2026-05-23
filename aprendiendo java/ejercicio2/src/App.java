/*
Autor: Stiven Jami
Tarea: Ejercicio 2 */
import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        Telefono miTelefono = new Telefono("iPhone", "17 pro max", 1500);

        System.out.println("Telefono: " + miTelefono.getMarca());
        System.out.println("Modelo: " + miTelefono.getModelo());
        System.out.println("Precio: $" + miTelefono.getPrecio());
        
        System.out.print("Ingrese el dinero con el que va a pagar: ");
        int dineroUsuario = teclado.nextInt();
        
        int precioActual = miTelefono.getPrecio();
    
        if (dineroUsuario >= precioActual) {
            int cambio = dineroUsuario - precioActual;
            System.out.println("---Pago exitoso---");
            System.out.print("Su cambio es: $" + cambio);
        } else {
            System.out.println("---Dinero insuficiente---");
            System.out.println("Le falta: $ " + (precioActual - dineroUsuario));
        }
    }
}