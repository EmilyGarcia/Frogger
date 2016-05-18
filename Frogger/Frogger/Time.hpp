1
2 //
3 // SFML - Simple and Fast Multimedia Library
4 // Copyright (C) 2007-2013 Laurent Gomila (laurent.gom@gmail.com)
5 //
6 // This software is provided 'as-is', without any express or implied warranty.
7 // In no event will the authors be held liable for any damages arising from the use of this software.
8 //
9 // Permission is granted to anyone to use this software for any purpose,
10 // including commercial applications, and to alter it and redistribute it freely,
11 // subject to the following restrictions:
12 //
13 // 1. The origin of this software must not be misrepresented;
14 //    you must not claim that you wrote the original software.
15 //    If you use this software in a product, an acknowledgment
16 //    in the product documentation would be appreciated but is not required.
17 //
18 // 2. Altered source versions must be plainly marked as such,
19 //    and must not be misrepresented as being the original software.
20 //
21 // 3. This notice may not be removed or altered from any source distribution.
22 //
24
25 #ifndef SFML_TIME_HPP
26 #define SFML_TIME_HPP
27
29 // Headers
31 #include <SFML/System/Export.hpp>
32
33
34 namespace sf
35 {
    40 class SFML_SYSTEM_API Time
    41 {
        42 public :
        43
        50     Time();
        51
        60     float asSeconds() const;
        61
        70     Int32 asMilliseconds() const;
        71
        80     Int64 asMicroseconds() const;
        81
        83     // Static member data
        85     static const Time Zero;
        86
        87 private :
        88
        89     friend SFML_SYSTEM_API Time seconds(float);
        90     friend SFML_SYSTEM_API Time milliseconds(Int32);
        91     friend SFML_SYSTEM_API Time microseconds(Int64);
        92
        102     explicit Time(Int64 microseconds);
        103
        104 private :
        105
        107     // Member data
        109     Int64 m_microseconds;
        110 };
    111
    123 SFML_SYSTEM_API Time seconds(float amount);
    124
    136 SFML_SYSTEM_API Time milliseconds(Int32 amount);
    137
    149 SFML_SYSTEM_API Time microseconds(Int64 amount);
    150
    161 SFML_SYSTEM_API bool operator ==(Time left, Time right);
    162
    173 SFML_SYSTEM_API bool operator !=(Time left, Time right);
    174
    185 SFML_SYSTEM_API bool operator <(Time left, Time right);
    186
    197 SFML_SYSTEM_API bool operator >(Time left, Time right);
    198
    209 SFML_SYSTEM_API bool operator <=(Time left, Time right);
    210
    221 SFML_SYSTEM_API bool operator >=(Time left, Time right);
    222
    232 SFML_SYSTEM_API Time operator -(Time right);
    233
    244 SFML_SYSTEM_API Time operator +(Time left, Time right);
    245
    256 SFML_SYSTEM_API Time& operator +=(Time& left, Time right);
    257
    268 SFML_SYSTEM_API Time operator -(Time left, Time right);
    269
    280 SFML_SYSTEM_API Time& operator -=(Time& left, Time right);
    281
    292 SFML_SYSTEM_API Time operator *(Time left, float right);
    293
    304 SFML_SYSTEM_API Time operator *(Time left, Int64 right);
    305
    316 SFML_SYSTEM_API Time operator *(float left, Time right);
    317
    328 SFML_SYSTEM_API Time operator *(Int64 left, Time right);
    329
    340 SFML_SYSTEM_API Time& operator *=(Time& left, float right);
    341
    352 SFML_SYSTEM_API Time& operator *=(Time& left, Int64 right);
    353
    364 SFML_SYSTEM_API Time operator /(Time left, float right);
    365
    376 SFML_SYSTEM_API Time operator /(Time left, Int64 right);
    377
    388 SFML_SYSTEM_API Time& operator /=(Time& left, float right);
    389
    400 SFML_SYSTEM_API Time& operator /=(Time& left, Int64 right);
    401 
    402 } // namespace sf
403 
404 
405 #endif // SFML_TIME_HPP