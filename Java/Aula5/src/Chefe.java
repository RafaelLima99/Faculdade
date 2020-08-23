//class chefe herda atributos e metodos da class Empregado
public class Chefe extends Empregado
{
    private double salario;
    
    public Chefe(String n, String f, double s)
    {
        //o operador super, acessa o metodo construtor da superclasse
        //a superclass é a class que esta sendo extendida, nesse caso a class empreado
        //dessa forma o super esta pasando as variaveis n, f para o construtor
        //da class Empregado
        super(n, f);
        salario = s;
    }
    
    //metodo abstrato herdado da class Empregado
    public double ganha(){
       return salario;
       
    }
}
