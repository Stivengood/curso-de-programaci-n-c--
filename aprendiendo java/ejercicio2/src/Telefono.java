/*
Autor: Stiven Jami
Tarea: Ejercicio 2*/
public class Telefono {
    private String marca;
    private String modelo;
    private int precio;
    public Telefono(  String marca, String modelo, int precio){
        this.marca = marca;
        this.modelo = modelo;
        setPrecio(precio); 
    }
    public String getMarca(){
        return marca;
    }
    public String getModelo(){
        return modelo;
    }
    public int getPrecio(){
        return precio;
    }

    public void setMarca(String marca){
        this.marca = marca;
    }
    public setModelo(String modelo){
        this.modelo = modelo;
    }

    public void setPrecio(){
        if (precio >= 0 ) {
            this.precio = precio;
        }else{
            System.out.println("Error: Valor ingresado invalido");
        }


    }
    



}
