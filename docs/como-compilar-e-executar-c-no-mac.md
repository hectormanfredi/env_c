# Como compilar e executar programas em C no Mac

Para transformar um arquivo escrito em C em um programa que o Mac possa executar, podemos usar o compilador `clang`.

## Comando de compilação

Considerando o programa `aula01/main.c`, utilize:

```bash
clang -Wall -Wextra aula01/main.c -o aula01/main
```

Esse comando pode ser dividido assim:

```text
clang  -Wall  -Wextra  aula01/main.c  -o  aula01/main
  |      |       |           |         |       |
  |      |       |           |         |       +-- nome e local do executável
  |      |       |           |         +---------- define o arquivo de saída
  |      |       |           +-------------------- código-fonte
  |      |       +-------------------------------- avisos adicionais
  |      +---------------------------------------- avisos comuns
  +----------------------------------------------- compilador
```

### `clang`

É o compilador. Ele transforma o código-fonte, como `main.c`, em um programa executável pelo computador.

### `-Wall`

Ativa diversos avisos comuns do compilador. O `W` vem de *warnings*, que significa “avisos”.

Esses avisos ajudam a encontrar possíveis problemas no código mesmo quando ainda é possível compilá-lo.

Apesar do nome, `-Wall` não ativa literalmente todos os avisos existentes, mas ativa um conjunto importante deles.

### `-Wextra`

Ativa avisos adicionais que não fazem parte de `-Wall`. É comum utilizar as duas opções juntas:

```bash
-Wall -Wextra
```

Essas opções não alteram o resultado normal do programa. Elas ajudam a detectar erros e situações potencialmente problemáticas.

### `aula01/main.c`

É o caminho do arquivo de código-fonte que será compilado. A extensão `.c` indica que o arquivo contém código escrito em C.

### `-o`

Significa *output*, ou “saída”. Essa opção permite escolher o nome e o local do programa compilado.

Neste exemplo:

```bash
-o aula01/main
```

o executável será chamado `main` e ficará dentro da pasta `aula01`.

Sem a opção `-o`, o Clang normalmente cria um executável chamado `a.out`:

```bash
clang aula01/main.c
./a.out
```

### `aula01/main`

É o caminho e o nome do executável que será criado. Após a compilação, a pasta terá estes dois arquivos:

```text
aula01/
|-- main.c    código-fonte
`-- main      programa compilado
```

Quando a compilação termina corretamente, o terminal normalmente não mostra nenhuma mensagem. Isso significa que o executável foi criado sem erros.

## Comando de execução

Depois de compilar, execute o programa com:

```bash
./aula01/main
```

Nesse comando:

- `.` representa a pasta atual;
- `/` separa os nomes das pastas e dos arquivos;
- `aula01/main` é o caminho do programa que será executado.

O `./` é necessário porque, por segurança, o terminal não procura programas automaticamente na pasta atual.

## Processo completo

Estando na pasta `env_c`, compile e execute assim:

```bash
# Compila o código
clang -Wall -Wextra aula01/main.c -o aula01/main

# Executa o programa compilado
./aula01/main
```

O resultado esperado é:

```text
Hello, World!
```

Sempre que o código-fonte for modificado, será necessário salvá-lo e compilá-lo novamente antes de executar a nova versão:

```text
editar -> salvar -> compilar -> executar
```
