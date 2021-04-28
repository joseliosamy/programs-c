

# Primeiros passos

Estes programas foram escritos no Visual Studio Code utilizando da linguagem C.

## Como compilar

-- Passos utilizados no sistema operacional Windows.

Baixe e instale o Visual Studio Code, link: https://code.visualstudio.com/download.

Baixe e instale o Mingw, link: https://sourceforge.net/projects/mingw/.
Abra o mingw e marque as opções "mingw32-base-bin" e "mingw32-gcc-g++-bin", em alguns casos essas opções podem vir sem o "-bin" no final.
Clique no menu superior esquerdo chamado de "installation", "apply changes","apply" e aguarde o termino da instalação. 

Abra o gerenciador de arquivos do windows(Windows explorer) e clique com o botão direito em cima de "Meu computador", "Propriedades", depois vá em "Configurações avançadas do sistema", "Variáveis de Ambiente", procure por "Path"(talvez tenha em ambos os blocos, nesse caso repita o procedimento a seguir nas duas variáveis) e selecione, após isso vá em "Editar", "Novo", copie e cole esse caminho "C:\MinGW\bin"(sem as aspas) e clique em "Ok" e reinicie a máquina.

## Como executar

Instale a extensão "C/C++ Compile Run" no Visual Studio Code, link: https://marketplace.visualstudio.com/items?itemName=danielpinto8zz6.c-cpp-compile-run.

Abra um dos programas e pressione a tecla "Function Key 6"(F6) para executar o código. 