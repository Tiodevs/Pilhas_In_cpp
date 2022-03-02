#include<iostream>
#include<stack>

using namespace std;

void VerificarVazio(); //cria a assinatura da função
void Limpar();        //cria a assinatura da função
void Add();          //cria a assinatura da função

stack <string> cartas; //cria a stack/pilha

int main() {   

    VerificarVazio(); //chama a função que verifica se a pilha está vazia

    Add(); //chama a função de adicionar um item

    Limpar(); //chama a função de perguntar se que limpara a pilha

    cout << "Tamanho da pinha: " << cartas.size() << "\n";
    cout << "Cartas do topo: " << cartas.top() << "\n";

    return 0;
};

void Limpar(){
    int r;
    printf("Voce quer apagar todos os itens? se sim digite [1] e para nao digite[2] \n");
    scanf("%d", &r);
   
    if (r == 1)
    {
            while (!cartas.size() == 0) 
        {
            cartas.pop();
        }
    }else{
        cout << "Nada foi retirado\n";
    }
}

void Add(){
    char item[50];
    cout << "Adicone um item: \n";
    scanf("%s", &item);
    
    cartas.push (item);
}

void VerificarVazio(){
    if (cartas.empty()) //verifica se a pilha está vazia
    {
        cout << "Pilhad vazia\n\n";
    }else{
        cout << "Pilha com cartas";
    }
}
