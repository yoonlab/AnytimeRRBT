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

#ifndef QDLGSIMPLEFILTER_KEEPREMOVECOLS_H
#define QDLGSIMPLEFILTER_KEEPREMOVECOLS_H

#include "qdlgsimplefilter.h"

namespace Ui {
	class CQDlgSimpleFilter_keepRemoveCols;
}

class CQDlgSimpleFilter_keepRemoveCols : public CQDlgSimpleFilter
{
    Q_OBJECT

public:
	explicit CQDlgSimpleFilter_keepRemoveCols(QWidget *parent = 0);
	~CQDlgSimpleFilter_keepRemoveCols();

	void refresh();

private slots:
	void on_qqOkCancel_accepted();

	void on_qqOkCancel_rejected();

	void on_qqRemove_clicked();

	void on_qqKeep_clicked();

	void on_qqBuffer1_clicked();

	void on_qqRgb_clicked();

	void on_qqHsl_clicked();

	void on_qqRed_editingFinished();

	void on_qqGreen_editingFinished();

	void on_qqBlue_editingFinished();

	void on_qqRedTol_editingFinished();

	void on_qqGreenTol_editingFinished();

	void on_qqBlueTol_editingFinished();

private:
	Ui::CQDlgSimpleFilter_keepRemoveCols *ui;
};

#endif // QDLGSIMPLEFILTER_KEEPREMOVECOLS_H
