
//énumération des différents types de lexens existants
typedef enum
    {
    REEL, OPERATEUR, FONCTION, ERREUR, FIN, PAR_OUV, PAR_FERM, VARIABLE, BAR_OUV, BAR_FERM
    }typelexem;

//énumération des diff types d'opérateurs éxistants
typedef enum
    {
    PLUS, MOINS, FOIS, DIV, PUIS
    }typeoperateur;

//énumération des diff types de fonctions éxistantes
typedef enum
    {
    ABS, SIN, SQRT, LOG, COS, TAN, EXP, ENTIER, VAL_NEG, SINC
    }typefonction;

//énumération des diff types de valeurs éxistantes
typedef union
    {
    float reel;
    typefonction fonction;
    typeoperateur operateur;
    typeerreur erreur;
    }typevaleur;

//énumération des diff types de jetons éxistants
typedef struct
    {
    typelexem lexem;
    typevaleur valeur;
    }typejeton;

//déclaration de l'arbre
typedef struct Node
{
    typejeton jeton;
    struct Node *pjeton_preced;
    struct Node *pjeton_suiv;
}Node;
typedef Node *Arbre;