public class UncheckedTeste {
   public static void main(String[] args){
       //instacia um objeto da class Unchecked
        Unchecked teste = new Unchecked();
        
        //o tray verifica se o teste.deposita() esta gerando algum erro
        //se gerar algum erro, cai para o catch, onde no catch temos que colocar
        //no parametro o tipo do erro
        //detro do bloco do catch colocamos alguma ação para indicar que ouve um erro
        //caso o codigo gere um erro diferente do que esta no argumento do catch
        //o catch não executarar o que tem dentro do seu bloco
        try{
            teste.deposita(-1);
        }catch(IllegalArgumentException e){
            //imprime o erro na tela
            System.out.println("Erro, você não pode depositar valor negativo "+e);
        }
        System.out.println(teste.saldo);
   }
}
