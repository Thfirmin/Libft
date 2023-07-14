<!-- Header -->
<div align=center>

<a href="/">
	<picture>
		<source media="(prefers-color-scheme: dark)" srcset="/.github/img/libft_dark.svg">
		<source media="(prefers-color-scheme: light)" srcset="/.github/img/libft_light.svg">
		<img alt="42 Header" src="/.github/img/42libft_light.png">
	</picture>
</a>

[![42PDH Badge](/.github/img/42pdh_badge.svg)][42pdh]

</div>

# Libft

---

Esse projeto é o primeiro passo no caminho da escola 42. Neste projeto nós
precisamos entender a base da metodologia 42 e a 
base da linguagem de programação C.

O escopo principal para estudar:

* Compiladores C e como se usa
* Síntaxe da linguagem C
* Bibliotecas C e como funcionam/criamos/compilamos/encadeamos elas
* Cabeçalhos C e como funcionam/criamos/encadeamos eles
* Make e Makefiles

Acesse a documentação do Libft [aqui][wiki]   
Volte para a [página principal](/)   

---

<!-- Body -->
## Sumário

* [Dependências](#dependencies)
* [Configurando](#settingup)
* [Uso](#usation)

---
## Dependências

Este projeto foi feito sob o SO
Eles possuem algumas dependências para uso:

* gcc
* make

você pode instalar eles usando o seguinte comando:

```Bash
sudo apt update && sudo apt install -y gcc make
```

---
## Configurando

Este projeto é uma biblioteca C, então você irá usa-lo como uma ferramente
para ajudar você em seu projeto como a `stdio` com a função `printf`.

Para compilar a libft você pode usar:

```Bash
make -C <libft_dir>
```

ou entre no diretório da libft e use

```Bash
make
```

---
## Uso

Para incluir essa biblioteca em seu projeto, use `#include "libft.h"` em seus
arquivos .c/.h.

E na parte de compilação do seu binário, você pode usar 
`-I<libft_dir> -L<libft_dir> -lft`.

<!-- Footer -->

---

Veja explicações mais detalhadas na página wiki do projeto.   
Vá para a [página wiki][wiki] da Libft.   

**Autor:** [Thiago Firmino dos S.][thfirmin]   
**Instituição:** [42|Rio][42rio]   
**Linguagem:** [Markdown][markdown] & [HTML][html]   

<a href="https://linktr.ee/42Rio">
	<picture>
		<source media="(prefers-color-scheme: dark)" srcset="/.github/img/42logo_dark.png">
		<source media="(prefers-color-scheme: light)" srcset="/.github/img/42logo_light.png">
		<img width="200" height="100" alt="42 Rio Logo" src="/.github/img/42logo_light.png">
	</picture>
</a>

> Este repositório está sob a _**Licença Apache**_, leia mais sobre [aqui](/LICENSE)   
> **_Continue a Nadar!_**   
 
#### _Libft - 42|Rio - thfirmin_   
---

<!-- Links -->
[wiki]:<https://github.com/Thfirmin/42Template/wiki>
[thfirmin]:<https://github.com/Thfirmin>
[42pdh]:<https://github.com/gawbsouza/42-pdh>
[42rio]:<https://42.rio>
[markdown]:<https://daringfireball.net/projects/markdown>
[html]:<https://www.w3schools.com/html>
