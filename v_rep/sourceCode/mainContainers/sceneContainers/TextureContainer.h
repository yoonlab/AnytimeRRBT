// This file is part of V-REP, the Virtual Robot Experimentation Platform.
// 
// Copyright 2006-2014 Coppelia Robotics GmbH. All rights reserved. 
// marc@coppeliarobotics.com
// www.coppeliarobotics.com
// 
// V-REP is dual-licensed, under the terms of EITHER (at your option):
//   1. V-REP commercial license (contact us for details)
//   2. GNU GPL (see below)
// 
// GNU GPL license:
// -------------------------------------------------------------------
// V-REP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// V-REP IS DISTRIBUTED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
// WARRANTY. THE USER WILL USE IT AT HIS/HER OWN RISK. THE ORIGINAL
// AUTHORS AND COPPELIA ROBOTICS GMBH WILL NOT BE LIABLE FOR DATA LOSS,
// DAMAGES, LOSS OF PROFITS OR ANY OTHER KIND OF LOSS WHILE USING OR
// MISUSING THIS SOFTWARE.
// 
// See the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with V-REP.  If not, see <http://www.gnu.org/licenses/>.
// -------------------------------------------------------------------
//
// This file was automatically created for V-REP release V3.1.2 on June 16th 2014

#pragma once

#include "MainCont.h"
#include "TextureObject.h"

class CTextureContainer : public CMainCont 
{
public:
	CTextureContainer();
	virtual ~CTextureContainer();
	void newSceneProcedure();
	void simulationAboutToStart();
	void simulationEnded();
	void renderYour3DStuff(CViewableBase* renderingObject,int displayAttrib);

	CTextureObject* getObject(int objectID);
	CTextureObject* getObject(const char* objectName);
	CTextureObject* getObjectAtIndex(int index);
	int addObject(CTextureObject* anObject,bool objectIsACopy);
	int addObjectWithSuffixOffset(CTextureObject* anObject,bool objectIsACopy,int suffixOffset);
	void getMinAndMaxNameSuffixes(int& minSuffix,int& maxSuffix);
	bool canSuffix1BeSetToSuffix2(int suffix1,int suffix2);
	void setSuffix1ToSuffix2(int suffix1,int suffix2);
	int getSameObjectID(CTextureObject* anObject);
	void removeObject(int objectID);
	void removeAllObjects();

	void storeTextureObject(CSer& ar,CTextureObject* it);
	CTextureObject* loadTextureObject(CSer& ar,std::string theName,bool &noHit);

	void announceGeneralObjectWillBeErased(int generalObjectID,int subID);
	void clearAllDependencies();
	void updateAllDependencies();

	// Variable that need to be serialized on an individual basis:
	std::vector<CTextureObject*> _allTextureObjects;
protected:
	CTextureObject* _getEquivalentTextureObject(CTextureObject* theData);
};