/* Copyright 2011 David Irvine
 *
 * This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
*/

#ifndef NMEA_H
#define NMEA_H
#include <Arduino.h>

class NMEA{
        String getField(int field);
        char sumMsg(String &message);
        String activeSentence;
        int state;
        public:
                String readSentence;
                bool addChar(char c);
                bool validFix();
                String getTime();
                char fixType();
                String getLatitude();
                String getLongitude();
                String getSpeed();
                String getCourse();
                String getDate();
};



#endif


