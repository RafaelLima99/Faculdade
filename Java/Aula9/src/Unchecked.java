public class Unchecked {
    //com o unche
    public double saldo;
    //metodo deposita recebe o valor por parametro
    public void deposita (double valor){
        //se o valor for menor que 0, entra na condição
        if(valor < 0){
            //gera um erro do tipo argumento ilegal
            //quando esse erro é gerado o sistema para de funcionar
            //mas podemos tratar isso com o try catch
            throw new IllegalArgumentException();
            
        }else{
            //caso o valor n seja menor que zero, entra no else e armazena o valor
            // no atributo saldo
            this.saldo = valor;
        }
    }
}
