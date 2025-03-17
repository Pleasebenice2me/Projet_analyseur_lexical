int analyselexical(char* str){
    int i = 0;
    while(str[i] != "\0"){
        switch (str[i]){
            case '+':
                T[i].lexem = OPERATEUR;
                T[i].valeur.operateur = PLUS;
                break;
            case '-':
                T[i].lexem = OPERATEUR;
                T[i].valeur.operateur = MOINS;
                break;
            case '*':
                T[i].lexem = OPERATEUR;
                T[i].valeur.operateur = FOIS;
                break;
            case '/':
                T[i].lexem = OPERATEUR;
                T[i].valeur.operateur = DIV;
                break;
            case '^':
                T[i].lexem = OPERATEUR;
                T[i].valeur.operateur = PUIS;
                break;
            case '(':
                T[i].lexem = PAR_OUV;
                break;
            case ')':
                T[i].lexem = PAR_FERM;
                break;
            case '[':
                T[i].lexem = BAR_OUV;
                break;
            case ']':
                T[i].lexem = BAR_FERM;
                break;
            default : {
                if (str[i] >= 'a' && str[i] <= 'z'){
                    //faire une chaine de caractere provisoir

                    T[i].lexem = FONCTION;
                }
                if (str[i]=> "0" & str[i]=< "9" || str[i] == "."){
                    //faire une chaine de catacteres provisoire

                    T[i].lexem = REEL;
                }
            }
            







        }
        i = i + 1;

    }

}
