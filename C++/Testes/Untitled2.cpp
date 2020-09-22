novo = new nodupla;

   novo->dado = valor;

   novo->dlink = p;

   novo->elink = NULL;

   if (p != NULL)

          p->elink = novo;

   p = novo;

