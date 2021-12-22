<h1 align="center">🗣💬<br>EP - Descubra o Idioma</h1>
<p align="center">Um algoritmo para supor o idioma em que um texto foi escrito, através da probabilidade de ocorrência das letras deste texto.</p>

---

## 🗨 Sobre
Este é um código que eu desenvolvi para resolver um Exercício Programa (EP) da disciplina **Projeto e Análise de Algoritmo I** do curso de **Ciência da Computação**. O objetivo do programa é receber um texto de entrada do usuário e, através da probabilidade de ocorrência de letras deste texto, supor em qual idioma ele foi escrito. Neste EP, são consideradas apenas duas possibilidades de idioma: ***português e inglês***.

## ⚙ Funcionamento
Uma breve explicação de como funciona o algoritmo:
<ol>
  <li>O programa recebe um texto de entrada, escrito pelo usuário, e o armazena em um array.</li>
  <li>O programa analisa o texto letra-a-letra e contabiliza o número de aparições de cada carácter.</li>
  <li>Dada a probabilidade de ocorrência de cada carácter no português, somamos as probabilidades de todos os caracteres que apareceram no texto e armazenamos o total numa variável.</li>
  <li>Dada a probabilidade de ocorrência de cada carácter no inglês, somamos as probabilidades de todos os caracteres que apareceram no texto e armazenamos o total numa variável.</li>
  <li>Compara a probabilidade do texto estar em português com a probabilidade do texto estar em inglês.</li>
    <ul>
      <li>Se a probabilidade do texto estar em português, for maior que a probabilidade do texto estar em inglês, o programa supõe que o texto está em português.</li>
    <li>Se a probabilidade do texto estar em inglês, for maior que a probabilidade do texto estar em português, o programa supõe que o texto está em inglês.</li>
  </ul>
</ol>

### 🧩 Como executar o projeto
<ol>
  <li>Faça o download do repositório.</li>
  <li>Extraia o arquivo .zip</li>
  <li>Abra a pasta que foi criada.</li>
</ol>

### 💻 Tecnologias utilizadas
<ul>
  <li>Linguagem C</li>
</ul>

---

Abaixo, farei uma breve explicação do que é a **'Probabilidade de Ocorrência de Letras'**. Caso tenha interesse em saber qual é o raciocínio por trás desse código, sugiro que leia este texto.
### 🔠 Probabilidade de Ocorrência de Letras
A Probabilidade de Ocorrência de Letras é a probabilidade que cada letra do alfabeto tem de aparecer num determinado idioma. Quando falamos sobre diferentes idiomas, como por exemplo, o inglês e o português, devemos ter em mente que, as letras que mais aparecem na língua portuguesa e na língua inglesa são diferentes.
<br>

Abaixo, está a relação das letras que mais aparecem no **português**, por ordem decrescente de frequência:

<table>
  <tr>
    <th>Letra</th>
    <th>Frequência</th>
  </tr>
  <tr>
    <td>a</td>
    <td>14.63%</td>
  </tr>
  <tr>
    <td>e</td>
    <td>12.57%</td>
  </tr>
  <tr>
    <td>o</td>
    <td>10.73%</td>
  </tr>
  <tr>
    <td>s</td>
    <td>7.81%</td>
  </tr>
  <tr>
    <td>r</td>
    <td>6.53%</td>
  </tr>
  <tr>
    <td>i</td>
    <td>6.18%</td>
  </tr>
  <tr>
    <td>n</td>
    <td>5.05%</td>
  </tr>
  <tr>
    <td>d</td>
    <td>4.99%</td>
  </tr>
  <tr>
    <td>m</td>
    <td>4.74%</td>
  </tr>
  <tr>
    <td>u</td>
    <td>4.63%</td>
  </tr>
  <tr>
    <td>t</td>
    <td>4.34%</td>
  </tr>
  <tr>
    <td>c</td>
    <td>3.88%</td>
  </tr>
  <tr>
    <td>l</td>
    <td>2.78%</td>
  </tr>
  <tr>
    <td>p</td>
    <td>2.52%</td>
  </tr>
  <tr>
    <td>v</td>
    <td>1.67%</td>
  </tr>
  <tr>
    <td>g</td>
    <td>1.30%</td>
  </tr>
  <tr>
    <td>h</td>
    <td>1.28%</td>
  </tr>
  <tr>
    <td>q</td>
    <td>1.20%</td>
  </tr>
  <tr>
    <td>b</td>
    <td>1.04%</td>
  </tr>
  <tr>
    <td>f</td>
    <td>1.02%</td>
  </tr>
  <tr>
    <td>z</td>
    <td>0.47%</td>
  </tr>
  <tr>
    <td>j</td>
    <td>0.40%</td>
  </tr>
  <tr>
    <td>x</td>
    <td>0.21%</td>
  </tr>
  <tr>
    <td>k</td>
    <td>0.02%</td>
  </tr>
  <tr>
    <td>w</td>
    <td>0.01%</td>
  </tr>
  <tr>
    <td>y</td>
    <td>0.01%</td>
  </tr>
</table>
<br>

Abaixo, está a relação das letras que mais aparecem no **inglês**, por ordem decrescente de frequência:

<table>
  <tr>
    <th>Letra</th>
    <th>Frequência</th>
  </tr>
  <tr>
    <td>e</td>
    <td>12.702%</td>
  </tr>
  <tr>
    <td>t</td>
    <td>9.056%</td>
  </tr>
  <tr>
    <td>a</td>
    <td>8.167%</td>
  </tr>
  <tr>
    <td>o</td>
    <td>7.507%</td>
  </tr>
  <tr>
    <td>i</td>
    <td>6.966%</td>
  </tr>
  <tr>
    <td>n</td>
    <td>6.749%</td>
  </tr>
  <tr>
    <td>s</td>
    <td>6.327%</td>
  </tr>
  <tr>
    <td>h</td>
    <td>6.094%</td>
  </tr>
  <tr>
    <td>r</td>
    <td>5.987%</td>
  </tr>
  <tr>
    <td>d</td>
    <td>4.253%</td>
  </tr>
  <tr>
    <td>l</td>
    <td>4.025%</td>
  </tr>
  <tr>
    <td>c</td>
    <td>2.782%</td>
  </tr>
  <tr>
    <td>u</td>
    <td>2.758%</td>
  </tr>
  <tr>
    <td>m</td>
    <td>2.406%</td>
  </tr>
  <tr>
    <td>w</td>
    <td>2.360%</td>
  </tr>
  <tr>
    <td>f</td>
    <td>2.228%</td>
  </tr>
  <tr>
    <td>g</td>
    <td>2.015%</td>
  </tr>
  <tr>
    <td>y</td>
    <td>1.974%</td>
  </tr>
  <tr>
    <td>p</td>
    <td>1.929%</td>
  </tr>
  <tr>
    <td>b</td>
    <td>1.492%</td>
  </tr>
  <tr>
    <td>v</td>
    <td>0.978%</td>
  </tr>
  <tr>
    <td>k</td>
    <td>0.772%</td>
  </tr>
  <tr>
    <td>j</td>
    <td>0.153%</td>
  </tr>
  <tr>
    <td>x</td>
    <td>0.150%</td>
  </tr>
  <tr>
    <td>q</td>
    <td>0.095%</td>
  </tr>
  <tr>
    <td>z</td>
    <td>0.074%</td>
  </tr>
</table>
<br>

Portanto, analisando ambas as tabelas, podemos notar que cada idioma possui suas particularidades quanto a probabilidade de ocorrência de letras. Esses dados são extremamente importantes para o programa, pois só com eles é possível analisar letra-a-letra do texto inserido pelo usuário e supor, através da probabilidade, se trata-se de um texto em português ou em inglês. 
<br>
<br>
Referência: <a href="https://pt.wikipedia.org/wiki/Frequência_de_letras">Frequência de Letras | Wikipédia</a>
