int main() 
{
    // Première partie du test
    {
        // Création d'un objet Array<int> avec 10 éléments
        Array<int> test(10);  

        // Affectation des valeurs 0 et 1 aux éléments du tableau test
        test[0] = 0;  
        test[1] = 1;  

        // Affichage des valeurs affectées aux indices 0 et 1
        std::cout << test[0] << std::endl;  
        std::cout << test[1] << std::endl;  

        // Test avec un index invalide (-1), qui devrait lancer une exception
        try 
        {
            test[-1];  // Accès hors limites
        } 
        catch (const std::exception &e)  // Gestion de l'exception
        {
            std::cerr << e.what() << std::endl;  // Affichage de l'exception
        }

        // Test avec un index trop grand (10), qui est aussi hors limites
        try 
        {
            test[10];  // Accès hors limites
        } 
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;  // Affichage de l'exception
        }

        // Test avec un index bien plus grand (1000), encore une fois hors limites
        try 
        {
            test[1000];  // Accès hors limites
        } 
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;  // Affichage de l'exception
        }

        // Affichage de l'objet test (si une surcharge de l'opérateur << a été définie)
        std::cout << test << std::endl;  
    }
    std::cout << std::endl;


































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
