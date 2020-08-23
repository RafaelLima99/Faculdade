public class TesteSobrecarga {
   public static void main(String[] args)
   {
       //a class sobrecarga tem 2 construtores dai entraa a sobrecarga
       //um construtor está preparado para receber 2 paramentos e o outro 1
       //desa forma se eu passar 1 unico paramaetro para o construtor
       //ele vai executar o construtor que está preparado para receber 1 paramentro
       //se fosse 2 paramentros ele iria executar o construtor que recebe 2 parametros
       String p1 = "teste1";
       Sobrecarga s = new Sobrecarga(p1); 
   }
}
