
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;
public class Teste {
    public static void main(String[] args){
        //criando o Frame
        JFrame f= new JFrame();
        //tamanho do frame largura, autra
        f.setSize(400,500);
        //titulo que fica no frame
        f.setTitle("Cadastro de Categorias"); 
        //localização do frame na tela esquerda/direita, baixo/cima
        f.setLocation(20,0);
        //ativa a função de feixar do butao vermelho do frame
        f.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE   );
        
        JPanel pl = new JPanel(); 
        pl.setLayout(null);// gerenciador de Layout 
        
        
        
        
        
        //cria um butão
        JButton meuBotao = new JButton("NomeBotão"); 
        meuBotao.setBounds(150, 10, 100, 20); 
        
        //colando os componentes no painel
       
        pl.add(meuBotao);
        
        //colando painel no frame
        f.add(pl);
        f.setVisible(true);
        
        //listerner do tipo action é utilizado para butoes
        //é execultado quando o butao é clikado, deveria ser chamado de click, mas o java quiz qolocar action
        meuBotao.addActionListener(new ActionListener(){
            @Override
            //o que tem dentro do metodo actionPerformed é executado quando o butão é clicado
            public void actionPerformed(ActionEvent e){
                //System.out.println("clicou");
                JOptionPane.showMessageDialog(null, "Cuidado com as prova");
            }
 
        });
        
    }    
}
