
🚨 Este código é um protótipo de semáforo inteligente, em arduino.

-----------------------------------------------------------------

Funcionalidade: 

➡ Ao pressionar o botão, o semáforo fecha, abrindo uma contagem com timer, em um display de 7 segmentos para o perdeste.  

➡ O código programado para Arduino controla três LEDs e um display de 7 segmentos.

O sketch configura os pinos para os LEDs e o display, e então entra na função loop(), onde verifica o estado de um botão. 
Se o botão for pressionado, ele acende o LED amarelo, aguarda 3 segundos, acende o LED vermelho e exibe os números no display de 7 segmentos um por um. 
Após exibir todos os números, apaga o LED vermelho.