public class Aviao {
    //composição, pois avião é composto de motor
    //a class avaião esta recebendo um objeto da class Motor
    //ou seja um aviaõ tem um motor
    Motor motor = new Motor(); 
    
    //agregação, pois o metodo adciona esta recebebdo um objeto da class Passageiro
    //ou seja esta agregando um objeto para um metodo de uma class
    //p é o nome do objeto e Passaeiro o nome da class
    public void adiciona(Passageiro p){
        p.embarque(this);  
    }
    //tambem agregassão
    public void remove(Passageiro p){
        p.desembarque(this);
    }
    
    //associação com controadorDeVoo, pois essa class(class que estamos') esta se comunicando com 
    //outra outra class que no caso é a class controladorDeVoo
    //class ControladorVoo e obejeto controlador
    public void setControladorVoo (ControladorVoo controlador){
        controlador.Voar();
    }
    
}
