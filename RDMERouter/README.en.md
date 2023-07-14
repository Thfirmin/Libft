<!-- Header -->
<div align=center>

<a href="/">
	<picture>
		<source media="(prefers-color-scheme: dark)" srcset="/.github/img/libft_dark.svg">
		<source media="(prefers-color-scheme: light)" srcset="/.github/img/libft_light.svg">
		<img alt="42 Header" src="/.github/img/42template_light.png">
	</picture>
</a>

[![42PDH Badge](/.github/img/42pdh_badge.svg)][42pdh]

</div>

# Libft

---

This project's the first step in 42 school way. In this project we need to
understand the base of 42 metodology and the base of C programming language

The main scope to learn:

* C compilers and how to use
* C syntax language
* C libraries and how to work/create/compile/link them
* C headers and how to work/create/link them
* Make and Makefiles

Access documentations of Libft [here][wiki]   
Go back to [Homepage](/)   

---

<!-- Body -->
## Summary

* [Dependencies](#dependencies)
* [SettingUp](#settingup)
* [Usation](#usation)

---
## Dependencies

This project's make under MacOS/Linux OS
they have some dependencies to use:

* gcc
* make

you can install it using:

```bash
sudo apt update && sudo apt install -y gcc make
```

---
## SettingUp

This project is a C library, so you'll use it in as a tool to help you in your
project like a `stdio` with `printf` function

To compile libft you can use:

```Bash
make -C <libft_dir>
```
or enter in libft directory and do

```Bash
make
```

---
## Usation

to include this library in your project use `#include "libft.h"` in your
.c/.h file.

and in compilation part of your bundle, you can use
`-I<libft_dir> -L<libft_dir>, -lft`.

<!-- Footer -->

---

See more detailed explanations of the project on the Wiki page.   
Go to Libft [Wiki page][wiki].   

**Author:** [Thiago Firmino dos S.][thfirmin]   
**Institution:** [42|Rio][42rio]   
**Source:** [Markdown][markdown] & [HTML][html]   

<a href="https://linktr.ee/42Rio">
	<picture>
		<source media="(prefers-color-scheme: dark)" srcset="/.github/img/42logo_dark.png">
		<source media="(prefers-color-scheme: light)" srcset="/.github/img/42logo_light.png">
		<img width="200" height="100" alt="42 Rio Logo" src="/.github/img/42logo_light.png">
	</picture>
</a>

> This repository is under the _**Apache license**_, read more about [here](/LICENSE)   
> **_Keep Swimming!_**   
 
#### _Libft - 42|Rio - thfirmin_   
---

<!-- Links -->
[wiki]:<https://github.com/Thfirmin/Libft/wiki>
[thfirmin]:<https://github.com/Thfirmin>
[42pdh]:<https://github.com/gawbsouza/42-pdh>
[42rio]:<https://42.rio>
[markdown]:<https://daringfireball.net/projects/markdown>
[html]:<https://www.w3schools.com/html>
