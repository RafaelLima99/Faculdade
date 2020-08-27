public class TesteAutomovel {
    public static void main(String[] args)
    {
        Automovel auto = new Automovel();
        
        //atribuindo valores aos atributos por meio dos metodos sets
        auto.setModelo("1b76");
        auto.setAno(2020);
        auto.setCor("branco");
        auto.setEstadoMotor(true);
        
        //exibindo valores por meio dos metodos get
        System.out.println("Modelo do carro: "+auto.getModelo());
        System.out.println("Ano do carro: "+auto.getAno());
        System.out.println("Cor do carro: "+auto.getCor());
        System.out.println("Estado do motor: "+auto.getEstadoMotor());
        
    }
}
