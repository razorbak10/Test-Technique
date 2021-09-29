/*
** Yannis Valente 2021
** Test-Technique
** File description:
** Main
*/

#include "my.h"

int main (int ac, char **arg)
{
    if (ac == 2 && strcmp("0" ,arg[1]) != 0) {
        
        checknbpos(atoi(arg[1]), atof(arg[1]));
    }
    else if (ac != 2) {
        displayhelp();
    }
    else
        std::cout << "406" <<std::endl;
        return(84);
}

void checknbpos(int nb , float  nb2) // check nombre positif
{
    double Resultfloat;
    double corret;
    double Result;
    using std::string;
    
    if (nb2 >= 0.1 && nb2 < 1) {//gestion 0.1 & 1
        Resultfloat = nb2 + 0.1;
        string check(std::to_string(nb2));
        std::cout << "la" <<std::endl;
        if (compartfloat(check) == 1)
        printf("%.1f\n", Resultfloat);
        else
            printf("%.3f\n", Resultfloat);
    }
    else if (nb >= 1 && nb < 10) { //gestion de 1 & 10
        Result = nb + 1;
        std::cout << Result << std::endl;
    }
    else if (nb >= 10 && nb < 100) { // gestion 10 & 100
        Result = nb + 10;
        std::cout << Result << std::endl;
    }
    else if (nb >= 100 && nb < 1000) { // gestion 100 & 1000
        Result = nb + 100;
        std::cout << Result << std::endl;
    }
    else if (nb >= 1000 && nb < 10000) {// gestion 1000 & 10000
        Result = nb + 1000;
        std::cout << Result << std::endl;
    }
    else
    checknbneg(nb, nb2);
}

int checknbneg(int nb , float nb2) // check nombre négatif
{
    double Resultfloatneg;
    double Resultneg;
    using std::string;
    
    string tennb(std::to_string(nb2));
    
    if (compartfloatneg(tennb) == 2) {
        std::cout << 0 <<std::endl;
    }
    else if (nb2 >= -0.9 && nb2 < -0.1) {
        Resultfloatneg = nb2 + 0.1;
        string check(std::to_string(nb2));
        if (compartfloatneg(check) == 1) 
        printf("%.1f\n", Resultfloatneg);
        else if (compartfloatneg(check) == 2) {
            printf("0\n");
        }
        else
            printf("%.3f\n", Resultfloatneg);
    }
    else if (nb > -10 && nb < -1) { //gestion de 1 & 10
            Resultneg = nb + 1;
            std::cout << Resultneg << std::endl;
    }
    else if (nb >= -100 && nb < -10) { // gestion 10 & 100
        Resultneg = nb + 10;
        std::cout << Resultneg << std::endl;
    }
    else if (nb >= -1000 && nb < -100) { // gestion 100 & 1000
        Resultneg = nb + 100;
        std::cout << Resultneg << std::endl;
    }
    return(0);

}

int compartfloatneg(std::string Str) // fonction qui permet la gestion de negatif sortie en float
{
    const char *str = Str.c_str();
    //std::cout << "valeur str:" << str  << std::endl;
    if(strcmp (str, "-0.200000") == 0 || strcmp (str, "-0.300000") == 0  || strcmp (str, "-0.400000") == 0  
    || strcmp (str, "-0.500000") == 0  || strcmp (str, "-0.600000") == 0 || strcmp (str, "-0.700000") == 0 
    || strcmp (str, "-0.800000") == 0 || strcmp (str, "-0.900000") == 0 )
        return(1);
    else if (strcmp(str, "-0.100000") == 0 || strcmp (str, "-10.000000") == 0 || strcmp(str, "-1.000000") == 0 
    || (strcmp (str, "-100.000000") == 0))
        return(2);
    else 
        return(3);

}

int compartfloat(std::string Str) // fonction qui permet la gestion 0,1 et 0,9
{
    const char *str = Str.c_str();
    //std::cout << "valeur str:" << str  << std::endl;
    if(strcmp(str, "0.100000") == 0 || strcmp (str, "0.200000") == 0 || strcmp (str, "0.300000") == 0  
    || strcmp (str, "0.400000") == 0  || strcmp (str, "0.500000") == 0  || strcmp (str, "0.600000") == 0 
    || strcmp (str, "0.700000") == 0 || strcmp (str, "0.800000") == 0 || strcmp (str, "0.900000") == 0 )
    return(1);
    else 
        return(2);

}

void displayhelp() 
{
    std::cout << "./Test-Technique [nombres positifs ou négatifs] dans l'intervalle [9999, -999]" << std::endl;
}