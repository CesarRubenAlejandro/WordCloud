#include <string>
using namespace std;

void caracteresFinal (string &s)
{
	int x = s.length()-1;
	if ( (s[x]== ',')||(s[x]== '.')|| (s[x]== ':')||  (s[x]== ';')||  
         (s[x]== '?')||  (s[x]== '+')||(s[x]== '-')|| (s[x]== ')')||
        (s[x]== '!')
        )
		s.pop_back();
}

void caracteresInicio (string &s)
{
	if ( (s[0]== ',')||(s[0]== '.')|| (s[0]== ':')||  (s[0]== ';')||  
          (s[0]== '?')||  (s[0]== '+')||(s[0]== '=')||(s[0]== '-')||
        (s[0]== '(')||(s[0]== ')')||(s[0]== '$')||(s[0]== '#')|| 
        (s[0]== '!')||(s[0]== '¿')||(s[0]== '¡')
        )
        s.erase(0,1);
}

bool filtra (string s)
{   if (
            (s!="a")&&(s!="o")&&(s!="y")&&(s!="asi")&&(s!="como")&&
            (s!="u")&&(s!="en")&&(s!="de")&&(s!="el")&&(s!="la")&&
            (s!="para")&&(s!="los")&&(s!="las")&&(s!="por")&&(s!="esta")&&
            (s!="este")&&(s!="estos")&&(s!="entre")  &&(s!="ante")  &&(s!="pero")
            &&(s!="que")  &&(s!="sus")  &&(s!="ha")  &&(s!="son")
            &&(s!="un")  &&(s!="unos")  &&(s!="unas")  &&(s!="e")&&(s!="del")
            &&(s!="desde")&&(s!="ante")&&(s!="ni")&&(s!="se")&&(s!="con")&&(s!="sin")
            &&(s!="le")&&(s!="la")&&(s!="nos")&&(s!="así")&&(s!="mi")&&(s!="no")&&(s!="mis")
            &&(s!="cada")&&(s!="sido")&&(s!="respecto")&&(s!="bajo")&&(s!="cabe")&&(s!="contra")&&(s!="desde")
            &&(s!="hacia")&&(s!="hasta")&&(s!="segun")&&(s!="entre")&&(s!="sobre")&&(s!="tras")&& (s!="durante")
            &&(s!="debido")&&(s!="tiene")&& (s!="parte")&& (s!="es")&& (s!="cómo")&& (s!="cuál")&& (s!="está")
            && (s!="éste")&& (s!="ésta")&& (s!="muchos")&& (s!="muchas")&& (s!="ya")&& (s!="vez")
            && (s!="mas")&& (s!="más")&& (s!="sino")&& (s!="haber")&& (s!="había")&& (s!="habían")
            && (s!="ha")&& (s!="he")&& (s!="habemos")&& (s!="hubo")&& (s!="esto")&& (s!="algunas")&& (s!="algunos")
            && (s!="algún")&& (s!="su")&& (s!="sus")&& (s!="debe")&& (s!="varios")&& (s!="uno")&& (s!="dos")&& (s!="han")
        && (s!="era")&& (s!="esto")&& (s!="ende")&& (s!="sin")&& (s!="embargo")&& (s!="al")&& (s!="otra")&& (s!="otro")
            && (s!="otros")&& (s!="otras")&& (s!="cual")&& (s!="esto")&& (s!="dijo")&& (s!="dice")&& (s!="donde")
        && (s!="puede")&& (s!="hoy")&& (s!="día")&& (s!="utiliza")&& (s!="usa")&& (s!="estas")&& (s!="ejemplo")
        && (s!="afortunadamente")&& (s!="fortuna")&& (s!="nuestro")&& (s!="sean")&& (s!="ocacionando")&& (s!="haciendo")
        && (s!="causando")&& (s!="propósito")&& (s!="una")&& (s!="medio")&& (s!="pasado")&& (s!="año")&& (s!="siglo")&& (s!="década")
        && (s!="años")&& (s!="siglos")&& (s!="décadas")&& (s!="tal")&& (s!="cuantas")&& (s!="cuantos")&& (s!="gran")
        && (s!="hayas")&& (s!="les")&& (s!="le")&& (s!="lo")&& (s!="los")&& (s!="hay")&& (s!="conllevan")&& (s!="lleva")&& (s!="llevan")
       && (s!="llevamos")&& (s!="llevaban") && (s!="pone")&& (s!="ponemos")&& (s!="ponen")&& (s!="pusieron")&& (s!="según")&& (s!="malo")
        && (s!="mala")&& (s!="fácil")&& (s!="falta")&& (s!="eso")&& (s!="pasa")&& (s!="paso")&& (s!="cosas")&& (s!="ello")&& (s!="dan")
        && (s!="damos")&& (s!="da")&& (s!="dieron")&& (s!="claro")&& (s!="similar")&& (s!="cierto")&& (s!="acto")
          && (s!="nuevo") && (s!="nueva") && (s!="nuevos") && (s!="nuevas") && (s!="muy")  && (s!="muchos") && (s!="muchas")
           && (s!="varios") && (s!="varias") && (s!="variados") && (s!="variadas")   && (s!="todos") && (s!="todas")
         && (s!="todo") && (s!="toda") && (s!="ejemplos") && (s!="variedad") && (s!="predomina") && (s!="principalmente")
            && (s!="ser")&& (s!="cuales")&& (s!="va")&& (s!="vamos")&& (s!="cambio")&& (s!="tanto")&& (s!="1")&& (s!="2")&& (s!="3")
			&& (s!="4")&& (s!="5")&& (s!="6")&& (s!="7")&& (s!="8")&& (s!="9") && (s!="0")&& (s!="10 ")&& (s!="cuales")&& (s!="con")
			&& (s!="sin")&& (s!="al")&& (s!="se")&& (s!="me")&& (s!="te")&& (s!="nos")&& (s!="forma")&& (s!="muestra")&& (s!="demuestra")
			&& (s!="mismo")&& (s!="misma")&& (s!="similar")&& (s!="similares")&& (s!="irá")&& (s!="ya")&& (s!="tomar")&& (s!="tomado")
			&& (s!="hecho")&& (s!="acontecimiento")&& (s!="te")&& (s!="me")&& (s!="como")&& (s!="tal")&& (s!="tales")&& (s!="lo")
			&& (s!="destaca")&& (s!="destacan")&& (s!="destaco")&& (s!="podría")&& (s!="ver")&& (s!="tiene")&& (s!="tienen")&& (s!="que")
            )
            return true;
            else
                return false;
}