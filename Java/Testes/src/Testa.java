public class Testa {
    public static void main(String[] args){
        
        Idade idadeUser = new Idade(2020, 1999);
        System.out.println("Sua idade é: "+ idadeUser.calIdade());
        /*----------------------*/
        idadeUser.exibNome("Rafael");
        
    }
}
