// Kosmos Updater
// Copyright (C) 2018 Steven Mattera
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

#pragma once

#include <string>
#include "../View.hpp"
#include "TextView.hpp"

using namespace std;

class AlertButtonView : public View {
    public:
        AlertButtonView(string title);
        ~AlertButtonView();

        void render(SDL_Rect rect, double dTime);
        void setTitle(string title);
        
    private:
        double _timeElapsed;

        TextView * _textView;

        SDL_Color _generateSelectionColor();
        void _drawBorders(int x1, int y1, int x2, int y2, SDL_Color color);
};
