
public class TesteChefe {
   public static void main(String[] args)
   {
       //pasagem dos dados para o construtor
        Chefe c = new Chefe("Rafael", "Lima", 1980.00);
        //escrve na tela os valores informados
        System.out.print("Nome: " + c.getNome()+ "\n");
        System.out.print("Familia: " + c.getFamilia()+"\n");
        System.out.print("Salário: " + c.ganha()+"\n");
   }
}
