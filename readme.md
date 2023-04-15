<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
</head>
<body>
    <h1>Jogo da Velha em C</h1>
    <p>Este é um simples jogo da velha feito em C, onde o usuário joga contra a máquina.</p>
    <h2>Instruções</h2>
    <ol>
        <li>Para jogar, basta executar o programa em um compilador C.</li>
        <li>Digite a linha e coluna que deseja jogar, e a máquina irá fazer a sua jogada em seguida.</li>
        <li>O jogo continua até que haja um vencedor ou empate.</li>
    </ol>
    <h2>Estrutura do Código</h2>
    <p>O código é dividido em diferentes funções que são responsáveis por diferentes aspectos do jogo.</p>
    <ul>
        <li>A função <code>matriz()</code> é responsável por inicializar a matriz do jogo com espaços vazios.</li>
        <li>A função <code>tabuleiro()</code> é responsável por imprimir o tabuleiro do jogo. Ela recebe a matriz do jogo como parâmetro e a exibe na tela.</li>
        <li>A função <code>maquina()</code> é responsável pela jogada da máquina. Ela escolhe uma posição aleatória na matriz e faz a jogada.</li>
        <li>A função <code>humano()</code> é responsável pela jogada do usuário. Ela solicita ao usuário a posição desejada e faz a jogada, desde que a posição esteja vazia.</li>
        <li>A função <code>verifica()</code> é responsável por verificar se há um vencedor. Ela verifica se há três símbolos iguais na mesma linha, coluna ou diagonal.</li>
    </ul>
    <p>No <code>main()</code>, a matriz do jogo é inicializada e o tabuleiro é exibido. Em seguida, é feita uma iteração para alternar as jogadas do usuário e da máquina. A cada jogada, o tabuleiro é atualizado e é verificado se há um vencedor. Se houver um vencedor, a mensagem de vitória ou derrota é exibida e o jogo é encerrado. Se todas as jogadas foram feitas e não há vencedor, é exibida a mensagem de empate.</p>
