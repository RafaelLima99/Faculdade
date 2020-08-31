
import javax.swing.*;

public class Tela {
   public static void main(String[] args)
   {
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
        //cria um label
        JLabel meuLabel = new JLabel("Texto do Label");
        meuLabel.setBounds(10, 10, 60, 20); 
        //cria um campo de texto
        JTextField meuCampoTexto = new JTextField(" ");
        meuCampoTexto.setBounds(80, 10, 60, 20); 
        //cria um butão
        JButton meuBotao = new JButton("NomeBotão"); 
        meuBotao.setBounds(150, 10, 100, 20); 
        
        //colando os componentes no painel
       
        
       
       JMenuBar jMenuBar1 = new JMenuBar();
       JMenu jMenu1 = new JMenu();
       JMenuItem jMenuItem1 = new JMenuItem();
       JMenuItem jMenuItem2 = new JMenuItem();
       JMenuItem jMenuItem3 = new JMenuItem();
       JMenuItem jMenuItem4 = new JMenuItem();
       JMenu jMenu2 = new JMenu();
       jMenuBar1.setName("jMenuBar1");
       jMenu1.setText("Arquivo"); // Aba Arquivo da barra de opções
       jMenu1.setName("jMenu1"); 
       
       jMenuItem1.setText("Abrir"); 
       jMenuItem1.setName("jMenuItem1"); // NOI18N
 jMenu1.add(jMenuItem1);
 jMenuItem2.setText("Editar"); // Opção Editar do menu
 jMenuItem2.setName("jMenuItem2"); // NOI18N
 jMenu1.add(jMenuItem2);
 jMenuItem3.setText("Salvar"); // Opção Ajuda do menu
 jMenuItem3.setName("jMenuItem3"); // NOI18N
 jMenu1.add(jMenuItem3);
 jMenuBar1.add(jMenu1); //Inclui o menu Arquivoo na barra de menus
 jMenu2.setText("Ajuda"); // Aba Ajuda da barra de opções
 jMenu2.setName("jMenu2"); // NOI18N
 
 
 //colando os componentes no painel
        pl.add(jMenuBar1);
        pl.add(jMenu1);
        pl.add(jMenuItem1);
        pl.add(jMenuItem2);
        pl.add(jMenuItem3);
        pl.add(jMenuItem4);
        
        
         f.add(pl);
         f.setVisible(true);
        
   }
   
   
   
}
