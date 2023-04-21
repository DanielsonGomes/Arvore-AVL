#include<arvore.h>
#include<iostream>

Arvore::Arvore()
{
  raiz=NULL;
  
}
Arvore::~Arvore()
{
    raiz=libera(raiz);
}
NoArv* Arvore::libera(NoArv *p)
{
    if (p != NULL)
    {
        p->setEsq( libera(p->getEsq()));
        p->setDir( libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return NULL;
}
int Arvore::altura()
{
    return auxAltura(raiz);
}

int Arvore::auxAltura(NoArv *p)
{
    if(p == NULL)
        return -1;
    else
    {
        int he = auxAltura(p->getEsq());
    int hd = auxAltura(p->getDir());
    if(he > hd)
        return he+1;
    else
        return hd+1;
    }

}
void Arvore::rotacaoSimplesEsqu()
{
    auxRotacaoSimplesEsqu(raiz);
}
void Arvore::auxRotacaoSimplesEsqu(NoArv *p)
{
   NoArv *q;
   q = p->dir;
   p->dir = q->esq;
   q->esq = p;

}
void Arvore::rotacaoSimplesDir()
{
     auxRotacaoSimplesDir(raiz);
}
void Arvore::auxRotacaoSimplesDir(NoArv *p)
{
   NoArv *q;
   q = p->esq;
   p->esq = q->dir;
   q->dir = p;
}
void auxRotacaoDuplaEsqu(NoArv *p)
{
    NoArv* q;
    NoArv* r;
   q = p->dir;
   r = q->esq;
   p->dir = r->esq;
   q->esq = r->dir;
   r->esq = p;
   r->dir = q;

}
   void auxRotacaoDuplasDir(NoArv *p)
{
     NoArv* q;
    NoArv* r;
   q = p->esq;
   r = q->dir;
   p->dir = r->dir;
   q->esq = r->esq;
   r->dir = p;
   r->esq = q;
}
void Arvore::auxImprime(NoArv *r)
{ ///imprime uma AB por meio de percurso pré-ordem
    if(r!=NULL)
    {
        auxImprime(r->getEsq());
        cout<<r->getInfo()<<"  ";
        auxImprime(r->getDir());
    }
}
void Arore::imprime()
{
   auxImprime(raiz);
}
void rotacaoDuplaEsqu()
{
  auxRotacaoDuplaEsqu(raiz);
}
void rotacaoDuplaDir()
{
   auxRotacaoDuplasDir(raiz);
}
