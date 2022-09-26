// talkie extensions  by PeterForth 19/Sep/2022
#include "Vocab_US_Large.h"
#include <Talkie.h>
Talkie voice;
  
#define USER_WORDS \
     Y(ALPHA, voice.say(  sp2_ALPHA ); NIP ) \                            
     Y(BRAVO, voice.say(  sp2_BRAVO ); NIP ) \                            
     Y(CHARLIE, voice.say(  sp2_CHARLIE ); NIP ) \                            
     Y(DELTA, voice.say(  sp2_DELTA ); NIP ) \                            
     Y(ECHO, voice.say(  sp2_ECHO ); NIP ) \                            
     Y(FOXTROT, voice.say(  sp2_FOXTROT ); NIP ) \                            
     Y(GOLF, voice.say(  sp2_GOLF ); NIP ) \                            
     Y(HENRY, voice.say(  sp2_HENRY ); NIP ) \  
        Y(sierra, voice.say(sp4_SIERRA); NIP ) \ 
        Y(papa, voice.say(sp4_PAPA); NIP ) \
        Y(romeo, voice.say(sp4_ROMEO); NIP ) \         
        Y(zulu, voice.say(sp4_ZULU); NIP ) \
        Y(hotel, voice.say(sp4_HOTEL); NIP ) \   
     Y(INDIA, voice.say(  sp2_INDIA ); NIP ) \                            
     Y(JULIET, voice.say(  sp2_JULIET ); NIP ) \                            
     Y(LIMA, voice.say(  sp2_LIMA ); NIP ) \                            
     Y(MIKE, voice.say(  sp2_MIKE ); NIP ) \                            
     Y(NOVEMBER, voice.say(  sp2_NOVEMBER ); NIP ) \   
     Y(THIR_, voice.say(  sp2_THIR_ ); NIP ) \ 
     Y(FIF_, voice.say(  sp2_FIF_ ); NIP ) \                              
     Y(ELEVEN, voice.say(  sp2_ELEVEN ); NIP ) \                            
     Y(_TEEN, voice.say(  sp2__TEEN ); NIP ) \  
     Y(THIRTEEN, voice.say(  sp3_THIRTEEN ); NIP ) \           
     Y(FOURTEEN, voice.say(  sp3_FOURTEEN ); NIP ) \           
     Y(FIFTEEN, voice.say(  sp3_FIFTEEN ); NIP ) \           
     Y(SIXTEEN, voice.say(  sp3_SIXTEEN ); NIP ) \           
     Y(SEVENTEEN, voice.say(  sp3_SEVENTEEN ); NIP ) \           
     Y(EIGHTEEN, voice.say(  sp3_EIGHTEEN ); NIP ) \           
     Y(NINETEEN, voice.say(  sp3_NINETEEN ); NIP ) \           
     Y(TWENTY, voice.say(  sp3_TWENTY ); NIP ) \           
     Y(THIRTY, voice.say(  sp3_THIRTY ); NIP ) \           
     Y(FOURTY, voice.say(  sp3_FOURTY ); NIP ) \           
     Y(FIFTY, voice.say(  sp3_FIFTY ); NIP ) \           
     Y(SIXTY, voice.say(  sp3_SIXTY ); NIP ) \           
     Y(SEVENTY, voice.say(  sp3_SEVENTY ); NIP ) \           
     Y(EIGHTY, voice.say(  sp3_EIGHTY ); NIP ) \           
     Y(NINETY, voice.say(  sp3_NINETY ); NIP ) \           
     Y(HUNDRED, voice.say(  sp3_HUNDRED ); NIP ) \           
     Y(THOUSAND, voice.say(  sp3_THOUSAND ); NIP ) \           
     Y(MILLION, voice.say(  sp3_MILLION ); NIP ) \  
        Y(DANGER, voice.say(sp2_DANGER); NIP ) \   
        Y(TEN, voice.say(sp3_TEN); NIP ) \
        Y(NINE, voice.say(sp2_NINE); NIP ) \
        Y(EIGHT, voice.say(sp3_EIGHT); NIP ) \
        Y(SEVEN, voice.say(sp3_SEVEN); NIP ) \
        Y(SIX, voice.say(sp3_SIX); NIP ) \
        Y(FIVE, voice.say(sp3_FIVE); NIP ) \
        Y(four, voice.say(sp3_FOUR); NIP ) \
        Y(THREE, voice.say(  sp2_THREE ); NIP ) \   
        Y(TWO, voice.say(  sp2_TWO ); NIP ) \   
        Y(one, voice.say(sp3_ONE); NIP ) \ 
        Y(ZERO, voice.say(sp3_ZERO); NIP ) \              
        Y(REPEAT_, voice.say(  sp2_REPEAT ); NIP ) \   
        Y(WHISKEY, voice.say(sp4_WHISKEY); NIP ) \ 
        Y(AUTOMATIC, voice.say(sp2_AUTOMATIC); NIP ) \ 
        Y(DISPLAY_, voice.say(sp2_DISPLAY); NIP ) \ 
        Y(repair, voice.say(sp2_REPAIR); NIP ) \  
        Y(ANSWER, voice.say(sp3_ANSWER); NIP ) \  
        Y(WEATHER, voice.say(sp3_WEATHER); NIP ) \ 
        Y(WIND, voice.say(sp3_WIND); NIP ) \ 
        Y(AFFIRMATIVE, voice.say(sp3_AFFIRMATIVE); NIP ) \ 
        Y(NEGATIVE, voice.say(sp3_NEGATIVE); NIP ) \      
        Y(STOP, voice.say(sp3_STOP); NIP ) \ 
        Y(CONTROL, voice.say(  sp2_CONTROL ); NIP ) \   
     Y(NUMBER_,  voice.say(sp2_NUMBER); NIP ) \ 
     Y(FREEZING, voice.say(  sp3_FREEZING ); NIP ) \           
     Y(AIR, voice.say(  sp3_AIR ); NIP ) \           
     Y(BELOW, voice.say(  sp3_BELOW ); NIP ) \           
     Y(AND_, voice.say(  sp3_AND ); NIP ) \            
     Y(HAZE, voice.say(  sp3_HAZE ); NIP ) \           
     Y(HIGH_, voice.say(  sp3_HIGH ); NIP ) \           
     Y(SCATTERED, voice.say(  sp3_SCATTERED ); NIP ) \           
     Y(TO_, voice.say(  sp3_INCREASING_TO ); NIP ) \           
     Y(IN_, voice.say(  sp3_IN ); NIP ) \           
     Y(LOW_, voice.say(  sp3_LOW ); NIP ) \           
     Y(THUNDERSTORM, voice.say(  sp3_THUNDERSTORM ); NIP ) \           
     Y(OVERCAST, voice.say(  sp3_OVERCAST ); NIP ) \           
     Y(UNLIMITED, voice.say(  sp3_UNLIMITED ); NIP ) \           
     Y(LOW2, voice.say(  sp3_LOW2 ); NIP )  \
     Y(RAIN, voice.say(  sp3_RAIN ); NIP ) \           
     Y(ICE, voice.say(  sp3_ICE ); NIP ) \           
     Y(HEAT, voice.say(  sp3_HEAT ); NIP ) \           
     Y(FOG, voice.say(  sp3_FOG ); NIP ) \           
     Y(HEAVY, voice.say(  sp3_HEAVY ); NIP ) \           
     Y(LAND, voice.say(  sp3_LAND ); NIP ) \           
     Y(THIN, voice.say(  sp3_THIN ); NIP ) \           
     Y(OF_, voice.say(  sp3_OF ); NIP ) \           
     Y(AERIAL, voice.say(  sp3_AERIAL ); NIP ) \           
     Y(OBSCURED, voice.say(  sp3_OBSCURED ); NIP ) \         
     Y(ALOFT, voice.say(  sp3_ALOFT ); NIP ) \           
     Y(CEILING, voice.say(  sp3_CEILING ); NIP ) \           
     Y(PARTIALLY, voice.say(  sp3_PARTIALLY ); NIP ) \           
     Y(VISIBILITY, voice.say(  sp3_VISIBILITY ); NIP ) \           
     Y(DRIZZLE, voice.say(  sp3_DRIZZLE ); NIP ) \           
     Y(INDICATED, voice.say(  sp3_INDICATED ); NIP ) \           
     Y(SEVERE, voice.say(  sp3_SEVERE ); NIP ) \           
     Y(MODERATE, voice.say(  sp3_MODERATE ); NIP ) \                     
     Y(PROBE, voice.say(  sp2_PROBE ); NIP ) \                            
     Y(READY_, voice.say(  sp2_READY ); NIP ) \                            
     Y(SET_, voice.say(  sp2_SET ); NIP ) \                            
     Y(SPEED, voice.say(  sp2_SPEED ); NIP ) \                            
     Y(UNDER, voice.say(  sp2_UNDER ); NIP ) \                            
     Y(OPERATOR, voice.say(  sp2_OPERATOR ); NIP ) \                            
     Y(AMPS, voice.say(  sp2_AMPS ); NIP ) \                            
     Y(MEGA, voice.say(  sp2_MEGA ); NIP ) \                            
     Y(PICO, voice.say(  sp2_PICO ); NIP ) \                            
     Y(FIRE, voice.say(  sp2_FIRE ); NIP ) \                            
     Y(POWER, voice.say(  sp2_POWER ); NIP ) \                            
     Y(COMPLETE, voice.say(  sp2_COMPLETE ); NIP ) \                            
     Y(REPAIR, voice.say(  sp2_REPAIR ); NIP ) \                            
     Y(TEMPERATURE, voice.say(  sp2_TEMPERATURE ); NIP ) \                                                     
     Y(MACHINE, voice.say(  sp2_MACHINE ); NIP ) \                            
     Y(ON_, voice.say(  sp2_ON ); NIP ) \  
     Y(ELECTRICIAN, voice.say(  sp2_ELECTRICIAN ); NIP ) \
     Y(BREAK, voice.say(  sp2_BREAK ); NIP ) \  
     Y(CALIBRATE, voice.say(  sp2_CALIBRATE ); NIP ) \                            
     Y(CRANE, voice.say(  sp2_CRANE ); NIP ) \                            
     Y(DIRECTION, voice.say(  sp2_DIRECTION ); NIP ) \                            
     Y(ENTER_, voice.say(  sp2_ENTER ); NIP ) \                            
     Y(FEET, voice.say(  sp2_FEET ); NIP ) \                            
     Y(FROM_, voice.say(  sp2_FROM ); NIP ) \                            
     Y(GAP, voice.say(  sp2_GAP ); NIP ) \                            
     Y(HOLD_, voice.say(  sp2_HOLD ); NIP ) \                              
     Y(MILL, voice.say(  sp2_MILL ); NIP ) \                            
     Y(UH, voice.say(  sp2_UH ); NIP ) \                            
     Y(PAST, voice.say(  sp2_PAST ); NIP ) \                            
     Y(PRESS, voice.say(  sp2_PRESS ); NIP ) \                            
     Y(RANGE, voice.say(  sp2_RANGE ); NIP ) \                            
     Y(SAFE, voice.say(  sp2_SAFE ); NIP ) \                            
     Y(SOUTH, voice.say(  sp2_SOUTH ); NIP ) \                            
     Y(TURN, voice.say(  sp2_TURN ); NIP ) \                            
     Y(INSPECTOR_, voice.say(  sp2_INSPECTOR ); NIP ) \                            
     Y(MANUAL, voice.say(  sp2_MANUAL ); NIP ) \                            
     Y(MOVE_, voice.say(  sp2_MOVE ); NIP ) \                            
     Y(OVER_, voice.say(  sp2_OVER ); NIP ) \   
     Y(PULL, voice.say(  sp2_PULL ); NIP ) \ 
     Y(SHUT, voice.say(  sp2_SHUT ); NIP ) \                            
     Y(TEST, voice.say(  sp2_TEST ); NIP ) \                            
     Y(VOLTS, voice.say(  sp2_VOLTS ); NIP ) \                            
     Y(GALLONS, voice.say(  sp2_GALLONS ); NIP ) \                            
     Y(HERTZ, voice.say(  sp2_HERTZ ); NIP ) \                            
     Y(MICRO, voice.say(  sp2_MICRO ); NIP ) \                            
     Y(OHMS, voice.say(  sp2_OHMS ); NIP ) \                            
     Y(AREA, voice.say(  sp2_AREA ); NIP ) \                            
     Y(CIRCUIT, voice.say(  sp2_CIRCUIT ); NIP ) \                            
     Y(CONNECT, voice.say(  sp2_CONNECT ); NIP ) \
     Y(SECONDS, voice.say(  sp2_SECONDS ); NIP ) \                            
     Y(UNIT, voice.say(  sp2_UNIT ); NIP ) \                            
     Y(TIMER_, voice.say(  sp2_TIMER ); NIP ) \                            
     Y(UP, voice.say(  sp2_UP ); NIP ) \                            
     Y(IS_, voice.say(  sp2_IS ); NIP ) \                            
     Y(ALERT, voice.say(  sp2_ALERT ); NIP ) \                            
     Y(ADJUST, voice.say(  sp2_ADJUST ); NIP ) \                            
     Y(BETWEEN, voice.say(  sp2_BETWEEN ); NIP ) \                                                   
     Y(BUTTON, voice.say(  sp2_BUTTON ); NIP ) \                            
     Y(CLOCK, voice.say(  sp2_CLOCK ); NIP )  \
     Y(ALL_, voice.say(  sp2_ALL ); NIP ) \                             
     Y(PHASE, voice.say(  sp2_PHASE ); NIP ) \                            
     Y(NOR_, voice.say(  sp2_NOR ); NIP ) \                            
     Y(EXIT_, voice.say(  sp2_EXIT ); NIP ) \                            
     Y(FLOW, voice.say(  sp2_FLOW ); NIP ) \                            
     Y(GAUGE, voice.say(  sp2_GAUGE ); NIP ) \    
     Y(CAUTION, voice.say(  sp2_CAUTION ); NIP ) \                            
     Y(LIGHT, voice.say(  sp2_LIGHT ); NIP ) \                            
     Y(CHECK, voice.say(  sp2_CHECK ); NIP ) \                               
     Y(SWITCH, voice.say(  sp2_SWITCH ); NIP ) \                            
     Y(VALVE, voice.say(  sp2_VALVE ); NIP ) \                            
     Y(VAL_, voice.say(  sp2_VAL ); NIP ) \
     Y(GATE, voice.say(  sp2_GATE ); NIP ) \ 
     Y(INTRUDER, voice.say(  sp2_INTRUDER ); NIP ) \                            
     Y(NORTH, voice.say(  sp2_NORTH ); NIP ) \                            
     Y(PASS, voice.say(  sp2_PASS ); NIP ) \                            
     Y(POSITION, voice.say(  sp2_POSITION ); NIP ) \                            
     Y(PUSH_, voice.say(  sp2_PUSH ); NIP ) \                            
     Y(RIGHT_, voice.say(  sp2_RIGHT ); NIP ) \                            
     Y(SLOW, voice.say(  sp2_SLOW ); NIP ) \                            
     Y(TOOL, voice.say(  sp2_TOOL ); NIP ) \                            
     Y(WEST, voice.say(  sp2_WEST ); NIP ) \                            
     Y(KILO, voice.say(  sp2_KILO ); NIP ) \                          
     Y(FARAD, voice.say(  sp2_FARAD ); NIP ) \                            
     Y(MILLI, voice.say(  sp2_MILLI ); NIP )  \
     Y(A_, voice.say(  sp2_A ); NIP ) \                            
     Y(B_, voice.say(  sp2_B ); NIP ) \                            
     Y(C_, voice.say(  sp2_C ); NIP ) \                            
     Y(D_, voice.say(  sp2_D ); NIP ) \                            
     Y(E_, voice.say(  sp2_E ); NIP ) \                            
     Y(F_, voice.say(  sp2_F ); NIP ) \                            
     Y(G_, voice.say(  sp2_G ); NIP ) \                            
     Y(H_, voice.say(  sp2_H ); NIP ) \                            
     Y(I_, voice.say(  sp2_I ); NIP ) \                            
     Y(L_, voice.say(  sp2_L ); NIP ) \                            
     Y(J_, voice.say(  sp2_J ); NIP ) \                            
     Y(K_, voice.say(  sp2_K ); NIP ) \                            
     Y(M_, voice.say(  sp2_M ); NIP ) \                            
     Y(N_, voice.say(  sp2_N ); NIP ) \                            
     Y(O_, voice.say(  sp2_O ); NIP ) \                            
     Y(P_, voice.say(  sp2_P ); NIP ) \                            
     Y(Q_, voice.say(  sp2_Q ); NIP ) \                            
     Y(R_, voice.say(  sp2_R ); NIP ) \                            
     Y(S_, voice.say(  sp2_S ); NIP ) \                            
     Y(T_, voice.say(  sp2_T ); NIP ) \                            
     Y(U_, voice.say(  sp2_U ); NIP ) \                            
     Y(V_, voice.say(  sp2_V ); NIP ) \                            
     Y(W_, voice.say(  sp2_W ); NIP ) \                            
     Y(X_, voice.say(  sp2_X ); NIP ) \                            
     Y(Y_, voice.say(  sp2_Y ); NIP ) \                            
     Y(Z_, voice.say(  sp2_Z ); NIP ) \
     Y(PERCENT, voice.say(  sp3_PERCENT ); NIP ) \   
     Y(DECREASING, voice.say(  sp3_DECREASING ); NIP ) \
     Y(INCREASING, voice.say(  sp3_INCREASING ); NIP ) \           
     Y(MOVING, voice.say(  sp3_MOVING ); NIP ) \                                
     Y(SMOKE, voice.say(  sp3_SMOKE ); NIP ) \           
     Y(STORM, voice.say(  sp3_STORM ); NIP ) \ 
     Y(HAIL, voice.say(  sp3_HAIL ); NIP ) \           
     Y(TORNADO, voice.say(  sp3_TORNADO ); NIP ) \                                                                 
     Y(START, voice.say(  sp3_START ); NIP ) \         
     Y(READY, voice.say(  sp3_READY ); NIP ) \           
     Y(TIME, voice.say(  sp3_TIME ); NIP ) \           
     Y(AM, voice.say(  sp3_A_M ); NIP ) \           
     Y(PM, voice.say(  sp3_P_M ); NIP ) \           
     Y(OCLOCK, voice.say(  sp3_OCLOCK ); NIP ) \           
     Y(DEGREES, voice.say(  sp3_DEGREES ); NIP ) \           
     Y(CELCIUS, voice.say(  sp3_CELCIUS ); NIP ) \   
     Y(FARENHEIT, voice.say(  sp3_FARENHEIT ); NIP ) \ 
     Y(RED, voice.say(  sp3_RED ); NIP ) \  
     Y(YELLOW, voice.say(  sp3_YELLOW ); NIP ) \           
     Y(GREEN, voice.say(  sp3_GREEN ); NIP ) \           
     Y(WHITE, voice.say(  sp3_WHITE ); NIP ) \            
     Y(ERROR_, voice.say(  sp3_ERROR ); NIP ) \           
     Y(MILES, voice.say(  sp3_MILES ); NIP ) \           
     Y(PER, voice.say(  sp3_PER ); NIP ) \           
     Y(HOUR, voice.say(  sp3_HOUR ); NIP ) \           
     Y(MINUTES, voice.say(  sp3_MINUTES ); NIP ) \            
     Y(KNOTS, voice.say(  sp4_KNOTS ); NIP ) \           
     Y(EXPECT_, voice.say(  sp4_EXPECT ); NIP ) \           
     Y(ACTION, voice.say(  sp4_ACTION ); NIP ) \           
     Y(RADIAL, voice.say(  sp4_RADIAL ); NIP ) \                    
     Y(GAS, voice.say(  sp4_GAS ); NIP ) \           
     Y(INFORMATION, voice.say(  sp4_INFORMATION ); NIP ) \           
     Y(TRUE, voice.say(  sp4_TRUE ); NIP ) \           
     Y(PRESSURE, voice.say(  sp4_PRESSURE ); NIP ) \           
     Y(CENTRE, voice.say(  sp4_CENTRE ); NIP ) \       
     Y(BASE, voice.say(  sp4_BASE ); NIP ) \  
     Y(MEASURE, voice.say(  sp2_MEASURE ); NIP ) \         
     Y(MEASURED, voice.say(  sp4_MEASURED ); NIP ) \ 
     Y(LEFT, voice.say(  sp4_LEFT ); NIP ) \           
     Y(RIGHT, voice.say(  sp4_RIGHT ); NIP ) \           
     Y(STRAY, voice.say(  sp4_STRAY ); NIP ) \           
     Y(CLOSE_, voice.say(  sp4_CLOSE ); NIP ) \           
     Y(EVACUATE, voice.say(  sp4_EVACUATE ); NIP ) \           
     Y(FAILURE, voice.say(  sp4_FAILURE ); NIP ) \           
     Y(SERVICE, voice.say(  sp4_SERVICE ); NIP ) \ 
      Y(VACUUM, voice.say(  sp4_VACUUM ); NIP ) \  
     Y(FOR_, voice.say(  sp4_FOR ); NIP )   \  
     Y(SEQUENCE, voice.say(  sp4_SEQUENCE ); NIP ) \           
     Y(SIDE, voice.say(  sp4_SIDE ); NIP ) \           
     Y(RICH, voice.say(  sp4_RICH ); NIP ) \           
     Y(PUMPS, voice.say(  sp4_PUMPS ); NIP ) \           
     Y(LEVEL, voice.say(  sp4_LEVEL ); NIP )                   
                                    
     
