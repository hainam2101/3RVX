#pragma once

#include "MeterWnd\Animations\FadeOut.h"
#include "MeterWnd\MeterWnd.h"

class Skin;

class VolumeOSD {
public:
    VolumeOSD(HINSTANCE hInstance);
    void LoadSkin(Skin *skin);
    void MeterLevels();
    void MeterLevels(float value);

private:
    HWND _hWnd;
    MeterWnd _mWnd;
    FadeOut _fout;

    void Hide();
    void AnimateIn();
    void AnimateOut();

    static LRESULT CALLBACK StaticWndProc(HWND hWnd, UINT message,
        WPARAM wParam, LPARAM lParam);
    LRESULT WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
};