/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Terminal.h
 * Author: msobral
 *
 * Created on 11 de Fevereiro de 2019, 16:07
 */

#ifndef TERMINAL_H
#define TERMINAL_H
#include <string>
#include <unistd.h>
#include <vector>

using namespace std;

void strip(string & s);

class Terminal {
 public:
  Terminal(const string & cmd);
  Terminal(vector<string> & args);

  ~Terminal();

  int escreva(const string & data);

  // lê até N bytes de cada vez (default: 1024 bytes)
  string leia(int N=1024);
  
  // lê todo o conteúdo
  string leiaTudo();

  // lê todas as linhas
  vector<string> leLinhas();

  // lê todas as palavras
  vector<string> lePalavras();

  string leLinha();
  string lePalavra();
  
private:
  int master;
  pid_t pid;
  
  char ** gera_argv(const string & cmd);
  char ** gera_argv(vector<string> & cmd);

  void exec(char ** args);
};


#endif /* TERMINAL_H */

