#ifndef VerifierBloc_h
#define VerifierBloc_h

namespace VerifierBloc {
	/*
		V�rifier la validit� des transactions, pour cela
			- on doit s'assurer que la somme des sorties est moins que la somme des entr�es  pour chaque transaction.
			- v�rifier que les sorties r�f�renc�es par les entr�es existent et n�ont pas encore �t� utilis�es
			- v�rifier la signature de chaque transaction 
	*/
	bool verificationTransaction(TX transaction);
	bool verificationTransaction(TXM transaction);

	/*
		oui si :
				- bloc non re�u auparavant 
				- contient au moins une transaction
				- premi�re transaction est de type TXM (coinbase) - hash = 0
				- v�rifier chaque transaction
				- v�rifier si le bloc est dans la m�me branche
				- 
	*/
	bool valideBloc(Bloc bloc);


	bool verificationBloc(Bloc bloc);
}

#endif