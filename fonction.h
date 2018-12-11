#include <gtk/gtk.h>
void ajouter (char login[],char password[], int role);
void afficher1(GtkWidget *plistview);
int verifier(char login[],char password[]);
void ajouter1(char seance[],char date[],char type[]);
void modifier(char seance[],char date[] ,char type[]);
void supprimer(char seance[],char date[] ,char type[]);
void afficher_fiche(GtkWidget *filistview);
void ajouter_cas_urgence(char cas[]);
void modifier_profile_coach(char nom[],char prenom[],char email[],char specialite[],char page_facebook[],char numero[]);
void ajouter_poid_ideal (char poid[]);
