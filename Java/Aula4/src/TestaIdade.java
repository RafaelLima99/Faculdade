public class TestaIdade {
    //metodo principal
    public static void main(String[] args){
        //vareaveis com as datas
        int dataAtual = 2020;
        int dataNas = 1999;
        //a vareavel t recebe o objeto 
        //pasando as vareaveis datas para o metodo construtor
        Idade t = new Idade(dataAtual, dataNas);
        //chama o metodo calcula idade da class Idade
        t.calculaIdade();
    }
}
