public class Checked {
    
   public double saldo;
   //utlizando o throws Exception siguinifica que todo codigo que estiver com erro
   //que estiver nesse metodo, vai gerar um erro do Tipo Exception
   //não só o codigo que ta dentro do if em sim todo o codggo que está dentro do
   //metodo, o checked checa qualquer erro do codigo contido no metodo
   //ja o onchecked só checa o erro que esta dentro do if
   
   public void deposita(double valor) throws Exception{
       if(valor < 0){
           throw new Exception();
       }else{
           this.saldo = valor;
       }
   }
}
