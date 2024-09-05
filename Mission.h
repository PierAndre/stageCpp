/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe misssion
 *
 * \author Pier-Andre
 * \date   September 2024
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>


 /*! \class Mission
    * \brief classe representant une mission. 2 attributs prives
    *
    * Cette classe a une finalite pedagogique :
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Mission
{

private:
    /**
     * Membre prive nbPersonne : contient le nombre de personne pour la mission
     */
    std::string nbPersonne;
    /**
     * Membre prive descriptifMission : contient le descriptif de la mission
     */
    std::string descriptifMission;
    /**
     * Membre prive nbHeure : contient le nombre d'heure de la mission
    */
    std::string nbHeure;



protected:



public:
    /*Classe sous forme canonique*/
    Mission();
    ~Mission();
    Mission(const Mission& entre);
    Mission &operator = (const Mission& entre);

    Mission(std::string nb, std::string ville);
    std::string getNbPersonne();
    void setNbPersonne(std::string nouveauNombrePersonne);
    std::string getDescriptifMission();
    void setDescriptifMission(std::string nouveauDescriptifMission);
    std::string getNbHeure();
    void setNbHeure(std::string nouveauNombreHeure);

};

#endif