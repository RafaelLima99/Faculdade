public class CheckedTeste {
    //utliza o throw Exception, pq ele tbm foi usado no metodo deposita
    //da class Checked
    public static void main(String[] args) throws Exception{
        Checked teste = new Checked();
        
        try{
            
            teste.deposita(-1);
            
        }catch(Exception e){
            System.out.println("Não se pode depositar valor negativo");
        }
        System.out.println(teste.saldo);
    }
}
