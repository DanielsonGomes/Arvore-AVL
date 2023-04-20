#ifndef arvore_H_INCLUDED
#define arvore_H_INCLUDED
#include "NoArv.h"
class Arvore
{
	private:
		NoArv *raiz; // ponteiro para o nó raiz da árvore
   NoArv* libera(NoArv *r);
   void auxRotacaoSimplesEsqu(NoArv *p);
   void auxRotacaoSimplesDir(NoArv *p);
   void auxRotacaoDuplaEsqu(NoArv *p);
   void auxRotacaoDuplasDir(NoArv *p);
   int auxAltura(NoArv *p);
   void auxImprime(NoArv *r);

	public:
	    
		Arvore();
		~Arvore();
		void imprime();
        int altura();
        void rotacaoSimplesEsqu();
         void rotacaoSimplesDir();
         void rotacaoDuplaEsqu();
         void rotacaoDuplaDir();
         



};
#endif//ARVBIN_H_INCLUDED
