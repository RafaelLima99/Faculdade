public abstract class Funcionario {
    private String nome;
    private String cargo;
    private int salario;
    
    public Funcionario(String nome, String cargo, int salario){
        this.nome = nome;
        this.cargo = cargo;
        this.salario = salario;
    }
    
    public String getNome(){
        return this.nome;
    }
    
    public String getCargo(){
        return this.cargo;
    }
    
    public abstract void exibeSalario();
    
}
