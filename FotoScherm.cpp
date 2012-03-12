/*
 * FotoScherm.cpp
 *
 *  Created on: 3 mrt. 2012
 *      Author: acer
 */

#include "FotoScherm.h"

FotoScherm::FotoScherm()
{
	//het optiescherm
	this->optieScherm = new OptieScherm( this );


	//bepaal grootte van het scherm
	MAExtent screenSize = maGetScrSize();
	int screenWidth = EXTENT_X(screenSize);
	int screenHeight = EXTENT_X(screenHeight);

	//standaard font en grafisch uiterlijk (uit de resource file res.lst)
	Font* font = new MAUI::Font(RES_FONT);
	WidgetSkin* skin = new WidgetSkin( RES_SELECTED, RES_UNSELECTED, 16, 32, 16, 32, false, false );

	//maak een label die andere widgets straks bevat, en een achtergrondkleur heeft
	achtergrondLabel = new Label(0, 0, 0, 0, NULL);
	achtergrondLabel->setBackgroundColor(0x000000);// zwart

	//maak een plaatje (laden uit de resource file res.lst) en voeg label als parent toe
	//image = new Image(0, 0, screenWidth/2, screenHeight/2, achtergrondLabel, true, true, RES_IMAGE);
	image = new Image((screenWidth-176)/2, (screenWidth-176)/2, 176, 153, achtergrondLabel, true, true, RES_IMAGE);
	achtergrondLabel->add(image);

	//maak tekst bij het plaatje met een label
	imageTekst = new Label((screenWidth-176)/2, ((screenWidth-176)/2)+153, 176, 35, achtergrondLabel, "Tekst", 0, font);
	achtergrondLabel->add(imageTekst);

	//stel dit scherm in als het main scherm, met achtergrondlabel als de basis widget
	this->setMain( this->achtergrondLabel );
}


FotoScherm::~FotoScherm()
{
	delete achtergrondLabel;
	delete image;
	delete imageTekst;
}


//show() override de show() van de super klasse (Screen), omdat we bij showen eerst opties willen ophalen
void FotoScherm::show()
{
	//roep de show() van de superklasse (Screen) aan
	this->Screen::show();

	//haal informatie achtergrondkleur op van optiescherm
	//this->achtergrondLabel->setBackgroundColor( this->optieScherm->getAchtergrondOptie() );

	//haal informatie imagetekst op van optiescherm
	//this->imageTekst->setCaption( this->optieScherm->getImagetekst() );
}



//afvangen invoer
void FotoScherm::keyPressEvent(int keyCode, int nativeCode)
{
	//bij indrukken van de MAK_FIRE toets, laat optiescherm zien
}

void FotoScherm::pointerPressEvent(MAPoint2d point)
{
	//bij touch, laat optiescherm zien
}


