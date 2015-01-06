#pragma once

#ifndef __AFXWIN_H__
#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

#include <string>

#include "../3RVX/TinyXml2/tinyxml2.h"
#define CHECKED(checkbox) { (checkbox.GetCheck() == 1) ? true : false }

class CSettingsUIApp : public CWinApp {
public:
    CSettingsUIApp();
    virtual BOOL InitInstance();

    static void LoadCheckbox(
        tinyxml2::XMLElement *xmlRoot, std::string elementName, CButton *check);

    DECLARE_MESSAGE_MAP()

private:
    tinyxml2::XMLDocument _xml;
    tinyxml2::XMLElement *_root;

    void LoadSettings();
};

extern CSettingsUIApp theApp;