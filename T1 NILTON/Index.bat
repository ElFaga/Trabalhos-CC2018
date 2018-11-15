@echo off
title Launcher dos programas
echo Abre os exercicios do primerio trabalho do nilton, trabalho feito por:
echo ----------------------------------------------------------------------
echo George Andre  (38338)
echo Hugo tavares  (40139)
echo Lincoln Lins  (38344)
echo Lucas Roberto (38346)
echo ----------------------------------------------------------------------
goto prog
:prog
echo Exercicios:
echo EX 1 - Acesso web
echo EX 2 - Gangorra
echo EX 3 - Pedagio
echo EX 4 - Consecutivos
echo ----------------------------------------------------------------------	
set /p n=Informe qual dos exercicios quer executar [O batch tambem compila os programas] [1-4]
if "%n%"=="1" goto p1
if "%n%"=="2" goto p2
if "%n%"=="3" goto p3
if "%n%"=="4" goto p4
goto End
rem comeco da execucao de arquivos
:p1
gcc -o EX1 Trabalho_1_ex_1.c
ex1.exe
goto Veri
:p2 
gcc -o EX2 Trabalho_1_ex_2.c
ex2.exe
goto Veri
:p3
gcc -o EX3 Trabalho_1_ex_3.c 
ex3.exe
goto Veri
:p4 
gcc -o EX4 Trabalho_1_ex_4.c
ex4.exe
goto Veri
:Veri
set /p o=Deseja compilar mais algum exercicio? [0/1] para [Sim/Nao]
if "%o%" == "0" goto prog
if "%o%" == "1" goto End
:End
echo Fim da execucao
pause
