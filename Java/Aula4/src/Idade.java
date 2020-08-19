
//class idade
public class Idade {
    //atribustos da class
    private int dataAtual;
    private int dataNas;
    
    //metodo do tipo construtor
    //para criar um metodo construtor basta criar um metodo com o nome da class
    //do esscopo que ele está
    //o metodo construtor é executado automaticamente sem precisar ser chamado
    public Idade(int dataAtual, int dataNas) {
        this.dataAtual = dataAtual;
        this.dataNas = dataNas;
    }
    
    //metodo que calcula idade
    public void calculaIdade(){
       //varevel data atual recebe o valor contido no atributo dataAtual
       int dataAtual = this.dataAtual;
       //varevel data atual recebe o valor contido no atributo dataAtual
       int dataNas = this.dataNas;
       int idade = dataAtual - dataNas;
       
       //imprime a idade na tela
       System.out.println("Sua idade é: " + idade);
    }
            
            
    
}
