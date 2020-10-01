public class Idade {
    private int dataA;
    private int dataN;
    
    public Idade(int dataA, int dataN){
        this.dataA = dataA;
        this.dataN = dataN;
    }
    
    public void exibeIdade(){
        int idade = this.dataA - this.dataN;
        System.out.println("Sua idade é:"+ idade);
    }
    
    
    
}
