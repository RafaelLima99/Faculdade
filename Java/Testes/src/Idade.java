public class Idade extends Nome{
   private int dataA;
   private int dataN;
  
   //contrutor
   public Idade(int dataA, int dataN){
       this.dataA = dataA;
       this.dataN = dataN;
   }
   
   public int calIdade(){
      int idade = this.dataA - this.dataN;
      return idade;
   }
}
