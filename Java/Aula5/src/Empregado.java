//class abstratas não podem ser criados obejtos apartir dessa class
public abstract class Empregado {
    private String nome;
    private String familia;
    
    //construtor
    public Empregado(String n, String f)
    {
       //atribiu valores aos atributos
       nome = n;
       familia = f;
    }
    
    public String getNome()
    {
        return nome;
    }
    
    public String getFamilia()
    {
        return familia;
    }
    
    //metodos abstratos da superclass não é implementado, só declarado
    // por isso não tem "{}"
    public abstract double ganha();
    
}
