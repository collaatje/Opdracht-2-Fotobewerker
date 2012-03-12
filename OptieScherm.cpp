/*
 * OptieScherm.cpp
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#include "OptieScherm.h"

OptieScherm::OptieScherm( Screen* parent )
{
	//sla parent scherm op (FotoScherm) om de show() te kunnen aanroepen, zodat dit optiescherm weer gesloten wordt
	this->parent = parent;


	//bepaal grootte van het scherm

	//standaard font en grafisch uiterlijk (uit de resource file res.lst)
	Font* font = new MAUI::Font(RES_FONT);
	WidgetSkin* skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een label die andere widgets straks bevat, en een achtergrondkleur heeft

	//stel achtergrondkleur in

	//maak rode knop
	this->roodLabel = new Label(5, 5, 30, 30, NULL);
	roodLabel->setSkin( skin );
	this->kleurLabels.add( roodLabel );	//voeg toe aan vector

	//maak groene knop

	//maak blauwe knop


	//stel grootte plaatje in m.b.v. editbox

	//stel naam plaatje in m.b.v. editbocx
	//this->editBox = new EditBox( ... );
	//this->editBox->setSkin( skin );
}

OptieScherm::~OptieScherm()
{
	//verwijder objecten van deze klasse
}


//geef ingestelde achtergrondkleur terug
/*
int OptieScherm::getAchtergrondOptie()
{
	//return achtergrond kleur
	return this->achtergrondKleur;
}*/


//geef ingestelde imagetekst van de editbox terug
/*
const BasicString<char> OptieScherm::getImagetekst()
{
	//verander editBox naar jouw editboxs
	return this->editBox->getCaption(); //caption is de text in een editbox
}*/



void OptieScherm::keyPressEvent(int keyCode, int nativeCode)
{
	//laat bij MAK_FIRE knop indrukken de parent (FotoScherm dus) weer zien
}

void OptieScherm::pointerPressEvent(MAPoint2d point)
{
	//doorloop alle kleurlabels om selectie in te stellen
	/*for( ... )
	{
		//kijk of label in het touch-punt valt

		//niet in touch punt? deselect!
	}*/


	//behandel de editbox bij selecteren (touch), verander de editBox naar je eigen editbox(en)
	//}
}

