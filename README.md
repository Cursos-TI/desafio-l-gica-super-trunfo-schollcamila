# 🏙️ Super Trunfo de Cidades - Jogo em C

Um jogo simples de terminal inspirado no famoso "Super Trunfo", desenvolvido em linguagem C. O jogador compara atributos de duas cidades (cartas) para ver qual vence com base no atributo selecionado.

---

## 🎮 Como jogar

1. **Inicie o jogo** escolhendo a opção 1 no menu.
2. **Cadastre os dados** de duas cidades:
   - Estado
   - Nome da Cidade
   - População
   - Área
   - PIB
   - Pontos Turísticos
3. Escolha **um atributo** para comparar:
   - Nome da Cidade (exibição apenas)
   - População
   - Área
   - PIB per capita
   - Pontos Turísticos
   - Densidade Demográfica (menor valor vence)
4. O jogo informa **qual carta venceu** com base no atributo escolhido.
5. Você pode **repetir as comparações** com outros atributos, usando as mesmas cartas.
6. Volte ao menu principal ou saia do jogo a qualquer momento.

---

## 📌 Funcionalidades

- Menu principal com 3 opções:
  - Iniciar jogo
  - Ver regras
  - Sair
- Cadastro completo de duas cartas de cidades
- Cálculo automático de:
  - PIB per capita
  - Densidade demográfica
- Lógica de comparação com `if-else` e `switch`
- Loop de comparação de atributos com opção de repetição
- Menu principal se repete até o jogador decidir sair

---

## 🛠️ Tecnologias utilizadas

- Linguagem C
- Terminal (CLI)
- Compiladores compatíveis:
  - GCC
  - Code::Blocks
  - Dev-C++
  - VSCode com extensão C/C++

---

## 📷 Exemplo de execução

=== Menu Principal ===
1. Iniciar Jogo
2. Ver Regras
3. Sair
Escolha uma opção: 1

Cadastro da Carta 1:
Estado: SP
Cidade: Campinas
...

Escolha o atributo para comparar:
1. Nome da Cidade
2. População
3. Área
...
Resultado: Carta 2 (Curitiba) venceu!
Deseja comparar outro atributo? (1 - Sim / 0 - Não)


---

## 📄 Licença

Este projeto é de uso livre para fins educacionais. 

---

## 👨‍💻 Feito por Camila Scholl

Projeto criado como exercício prático em linguagem C para comparação de estruturas e uso de controle de fluxo.
