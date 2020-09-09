import java.awt.Component;
import javax.swing.*;
public class ConfirmDialog {
    private static Component janela;
    public static void main(String[] args){
        int resp = JOptionPane.showConfirmDialog(janela, "Você já estudou para as provas?", "Escolha uma opão", JOptionPane.OK_CANCEL_OPTION);
    }
}
