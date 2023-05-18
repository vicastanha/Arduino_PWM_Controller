<body>
    <h1 align='center'>PWM</h1>
    <h2 align='center'>Descrição</h2>
    <p align='justify'>Este repositório foi criado como parte de uma atividade solicitada pelo professor de sistemas embarcados. O objetivo é demonstrar os conteúdos ensinados em sala de aula por meio de um projeto prático.
    <br>O foco do repositório é fornecer informações sobre  o PWM, um tema importante e amplamente utilizado na eletrônica de potência. Serão abordados diferentes tipos de retificadores, suas aplicações e características.
    <br>Os materiais apresentados no repositório incluirão  diagramas, explicações teóricas e experimentos práticos. O objetivo é fornecer uma visão geral completa sobre o assunto para estudantes e entusiastas de eletrônica.
</p>
    <h2 align='center'>introdução ao pwm</h2>
    <p align='justify'>O PWM (Pulse Width Modulation) é uma técnica usada para controlar a quantidade de energia fornecida a um dispositivo. Ele funciona variando a largura de pulsos em um sinal digital. O ciclo de trabalho do sinal PWM determina a quantidade média de energia entregue ao dispositivo. Um ciclo de trabalho maior significa mais energia, enquanto um ciclo de trabalho menor significa menos energia. Isso é útil para controlar a velocidade de motores elétricos, o brilho de LEDs e outras aplicações. O PWM é amplamente utilizado na eletrônica devido à sua eficiência e facilidade de implementação.</p>
    <h2 align='center'>Tecnologias Utilizadas</h2>
    <ul>
      <li>Proteus 8 Professional - Diagramas</li>
      <li>Visual Studio Code - Códigos</li>
    </ul>
  <h2 align='center' >Componentes</h2>
  <table>
    <thead>
      <tr>
        <th>Campo</th>
        <th>Especificação</th>
      </tr>
    </thead>
    <tbody>
      <tr>
        <td>Arduino</td>
        <td>Nano</td>
      </tr>
      <tr>
        <td>Ponte H</td>
        <td>L293D</td>
      </tr>
      <tr>
        <td>Dado 3A</td>
        <td>Dado 3B</td>
      </tr>
      <tr>
        <td>Botão</td>
        <td>Não tem</td>
      </tr>
      <tr>
        <td>Motor</td>
        <td>5 Volts</td>
      </tr>
       <tr>
        <td>Resistor</td>
        <td>220 ohms</td>
      </tr>
    </tbody>
  </table>

 <h2 align='center'>Esquemático</h2>
 <p>Esquemático está na pasta schematics.</p>
<h2 align='center'>Código Fonte</h2>
  <p>Código fonte está na pasta src.</p>
<h2 align='center'>Funcionamento</h2>
  <p>O código funciona da seguinte maneira:
  <br>1. Ao iniciar a simulação no programa Protheus, o motor deverá iniciar sem movimentações.
  <br>2. Quando clicar pela primeira vez o motor deverá ligar com a velocidade de 25%.
  <br>3. Quando clicar nas próximas vezes deverá aumentar sequencialmente a velocidade de 25%.
  <br>4. Quando o motor alcançar a velocidade máxima (100% ou 255) o próximo clique deverá parar.
  </p>
</body>

