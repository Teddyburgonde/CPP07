int main() 
{
   Array<int> numbers(MAX_VAL); // Création d'un tableau `numbers` de taille `MAX_VAL` d'entiers de type `Array<int>`
   int* mirror = new int[MAX_VAL]; // Allocation dynamique d'un tableau `mirror` de taille `MAX_VAL` pour stocker les mêmes valeurs qu'`Array<int>`

srand(time(NULL)); // Initialisation du générateur de nombres aléatoires pour produire des valeurs différentes à chaque exécution

for (int i = 0; i < MAX_VAL; i++) // Boucle pour remplir les tableaux `numbers` et `mirror`
{
    const int value = rand(); // Génération d'un entier aléatoire
    numbers[i] = value; // Stockage de la valeur aléatoire dans `numbers`
    mirror[i] = value; // Stockage de la même valeur dans `mirror` pour avoir une copie exacte de `numbers`
}

// SCOPE
{
    Array<int> tmp = numbers; // Utilisation de l'opérateur d'affectation pour créer `tmp` à partir de `numbers`
    Array<int> test(tmp); // Utilisation du constructeur de copie pour créer `test` en copiant `tmp`
}

for (int i = 0; i < MAX_VAL; i++) // Comparaison de chaque élément de `mirror` et `numbers` pour vérifier la copie correcte
{
    if (mirror[i] != numbers[i]) // Vérifie que chaque valeur dans `mirror` est identique à `numbers`
    {
        std::cerr << "didn't save the same value!!" << std::endl; // Message d'erreur si une valeur est différente
        return 1; // Fin du programme avec un code d'erreur pour indiquer l'échec du test
    }
}

try
{
    numbers[-2] = 0; // Test d'accès en dehors des limites (indice négatif) pour vérifier que cela génère une exception
}
catch(const std::exception& e)
{
    std::cerr << e.what() << std::endl; // Affiche le message d'erreur pour confirmer que l'exception a été levée
}

try
{
    numbers[MAX_VAL] = 0; // Test d'accès en dehors des limites (indice égal à `MAX_VAL`) pour vérifier la gestion des erreurs
}
catch(const std::exception& e)
{
    std::cerr << e.what() << std::endl; // Affiche le message d'erreur si l'exception est levée
}

for (int i = 0; i < MAX_VAL; i++) // Boucle de modification des éléments de `numbers` avec de nouvelles valeurs aléatoires
{
    numbers[i] = rand(); // Attribue une nouvelle valeur aléatoire à chaque élément de `numbers`
}

delete[] mirror; // Libération de la mémoire allouée pour `mirror` afin d'éviter une fuite de mémoire
return 0; // Fin du programme avec un code de retour indiquant que le test a réussi




































    // Deuxième partie du test
    {
        // Création d'un tableau de taille MAX_VAL
        Array<int> numbers(MAX_VAL);  
        
        // Allocation dynamique d'un tableau de taille MAX_VAL pour le miroir
        int* mirror = new int[MAX_VAL];  
        
        srand(time(NULL));  // Initialisation du générateur de nombres aléatoires
        // Remplissage des tableaux numbers et mirror avec des valeurs aléatoires
        for (int i = 0; i < MAX_VAL; i++) 
        {
            const int value = rand();  // Valeur aléatoire
            numbers[i] = value;  // Affectation dans l'objet Array
            mirror[i] = value;  // Affectation dans le tableau miroir
        }

        // Début du bloc de test de copie
        {
            Array<int> tmp = numbers;  // Copie de numbers dans tmp
            Array<int> test(tmp);  // Copie de tmp dans test
        }  // Fin du bloc scope, test et tmp sont détruits ici

        // Vérification que les valeurs dans numbers et mirror sont identiques
        for (int i = 0; i < MAX_VAL; i++) 
        {
            if (mirror[i] != numbers[i])  // Si les valeurs ne correspondent pas
            {
                std::cerr << "didn't save the same value!!" << std::endl;  // Affichage d'erreur
                return 1;  // Fin du programme en cas d'erreur
            }
        }

        // Test avec un index invalide (-2), qui devrait lancer une exception
        try 
        {
            numbers[-2] = 0;  // Accès hors limites
        }
        catch(const std::exception& e) 
        {
            std::cerr << e.what() << std::endl;  // Affichage de l'exception
        }

        // Test avec un index trop grand (MAX_VAL), qui est aussi hors limites
        try 
        {
            numbers[MAX_VAL] = 0;  // Accès hors limites
        }
        catch(const std::exception& e) 
        {
            std::cerr << e.what() << std::endl;  // Affichage de l'exception
        }

        // Remplissage de numbers avec de nouvelles valeurs aléatoires
        for (int i = 0; i < MAX_VAL; i++) 
        {
            numbers[i] = rand();  // Remplissage avec des valeurs aléatoires
        }

        // Libération de la mémoire allouée dynamiquement pour le tableau miroir
        delete [] mirror;  
        
        return 0;  // Fin du programme
    }
}
