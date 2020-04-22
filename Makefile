##
## EPITECH PROJECT, 2020
## AIA_n4s_2019 [WSL: Debian]
## File description:
## Makefile
##

##
## EPITECH PROJECT, 2020
## Makefile-gen by Clement Muth [WSL: Debian]
## File description:
## Makefile
##

SUCCESS				= /bin/echo -e "\x1b[1m\x1b[33m\#\#\x1b[32m $1\x1b[0m"

## ========================================================================== ##
PATH_DISPLAY		=	source/display/
SRC_DISPLAY		=


## ========================================================================== ##
PATH_ERROR		=	source/error/
SRC_ERROR		=


## ========================================================================== ##
PATH_INIT		=	source/init/
SRC_INIT		=


## ========================================================================== ##
SRC				=	source/main.c	\
					$(addprefix $(PATH_DISPLAY), $(SRC_DISPLAY))	\
					$(addprefix $(PATH_ERROR), $(SRC_ERROR))	\
					$(addprefix $(PATH_INIT), $(SRC_INIT))	\

BIN				= 	ai

CC				= 	gcc

OBJ 			= 	$(SRC:.c=.o)

RM				=	rm -rf

CFLAGS			=	-W -Wall

LDFLAGS			=	-Iinclude/ -Llibrary \
					-l_stat	\
					-l_string	\
					-l_maths	\

DFLAGS			=	-g -Wfatal-errors -Wpedantic -Wextra \
					-Wnonnull -Wmain -Wmissing-attributes -Wsequence-point -pg

all:			$(BIN)

$(BIN):			lib $(OBJ)
				@$(CC) -o $(BIN) $(OBJ) $(LDFLAGS) $(CFLAGS)
				@(echo "                                                               ,MB , .MW");
				@(echo "                                                              MMB Zi0B MX");
				@(echo "                                                             MMW@S:  @.MM");
				@(echo "                   :                                        MMWW@MMM2rW@MS");
				@(echo "              r02Z2SrMMWZS,.                               MMMMMMMMMMM0BMM");
				@(echo "             .MMiXXS,B080BWW@MMWaXi                        MM2SMZiX0WBWBWM");
				@(echo "             @mmr7xsr70zz000b00000w@MMMZ  ..              ,MZSi72XXMMMWWWM");
				@(echo "            WMB,ar777iBZZS0Za222aa88,B0WMX   77.          r0 .MM822,rM@@wm");
				@(echo "           BMW,8SrXXX:8ZZa8WWW@MMMMa:aXZ888ZW8aZ,        ZMX    ,ZM7rSSM@M");
				@(echo "          8MMi8S0r777,S8aaaaa22SSS2Z0.a88,0XX,Z@2.,      Z8Marr,.XMXXa7MMM");
				@(echo "         aMMi8XaZS7XX7rBZZBS2aaaZZaZ8ZXaS288@WWMMMM:     7:MMZZZaXi:S78MM");
				@(echo "        7MM:8SaZ7Sr,r7,08aaBMMMMMMMM@8SZ@a77WM@S2Z@MMM   ZiBMMZ77BS88BMMr  ,aaZa");
				@(echo "        8MSBSaZr2MWS,:.rBZZ2SSSSSSX2S7Xi.,XWM0 8BXXr2MMWrSXi2ZMMMMMMaMB8rM80S..8       iZ82");
				@(echo "        ,S 2aZ,aMMMW02.iM00008ZZZZ8M2r7@MMMMW @a2zszxx7mb0z2m@SXrWX77@0S,Z8SiiiZ.    ,M7.  M2");
				@(echo "         2:28:8W@WWWW@ZM@BWWWBB@M@7XiBMX: 2M7SZ2a@W00WZ7ZMXSZWMWSSSaZ0B, .M,   iS   MMB ,  aM:");
				@(echo "         a,8:0MWBBBBBWWBBBBBB0WMM,77MB,rX:MM W2aBM@B00B8X2WS: r222aM X.X, i8ar,Ba  MMMMMMM7WWM");
				@(echo "         X7 MM@WBWWBWBBBBBBB0B@M8,ZMS,,i,7MW.B2a@WBMMMWWW2S0MZ8WaaWM   Z   , ,:S, MMMM8SBMM08M");
				@(echo "         .:7MWW@WWBWBBBBBBBB0WMM@MM7ri,2MMMBi02ZM@MMMMMM@WW7@MM0aZZM , 0ii,X08W@  M2riX,8MMM0M,");
				@(echo "          XMMWW@WWBBBBBBBBBB0MMS:rr,,8MMM,M0i82ZMMMMMMMMMM0Xi0@8Z88@@m SW8888ZB. ZM 0Mr2,iSBWM,");
				@(echo "         aMMWWWW@WWBBBBBBBBBWM2X0ZXiBMi., MBi82ZMMM8   rMMM0MXW@MWZZ8WW W088B2   XX     MSX7SM");
				@(echo "        BMMWWWW@MMMMMMMMMMMMMB7aB7,0M,,r2,MWi82aMMM XZ2X.8MMZ72@BMW80WMMS00     ,MS::. 2 SXBMM");
				@(echo "       WMMWWWWMB2i .7SSXXXXSXMMMii8M77XXSrB@iZa2MM8 B0WW8rSMMZi7.BMMMMMM       .7M82Xrr  XMMMi");
				@(echo "        MM@W@M8a8B@X  i2a22SrB8XMMMX7SX7i,8M,aa2MMS B,  ZM0ZMM2XMBi7aXi:M,       MMMWWMMMM0S,");
				@(echo "         MM@WaZZZZ0WMW.  ,aarZS7XS7XXX,,ZMMM2Saa0MS B   M  88MW,2a2,X,iZMMMW     BZB8MMMa22Bi");
				@(echo "           MM02Z8888880@MX   ,MZaiSSSXraMMWiW0XZaaM0 a   M :M,MM8i0. SMMMMM@MMMa  MiB@,7S2@Br");
				@(echo "           MM02Z8888ZM@0@MB  @a2@MSS7XMZ,riaMrZ8aMM Z   M,MZ MM@raS     8MMM@rBMS8aXSSM.");
				@(echo "            MM8aZZ88aZ2ZZ8B@MM22MS2S,M@,XSS7Maa8 aM 2   B,0  rBW0 M       :M@0ZZZBa8a0M");
				@(echo "             MM0aZBMZ800800ZZMMM@X2XWMrXSXXi0WX8arM8 .  ,@  ::aWB2@i     MMWa22ZZZ SM");
				@(echo "              0MM0B00BWBB0Za2Z08ZZ7ZMSXSS2aXaMSZBi2M , , MX:r,W20ZZW MMMMMW0aa2X2BMMMMS");
				@(echo "                 MB0000000B0WMr,2MMMWXaZa2Xr0MW28X:M0 ir,iMrS7M @zsm, MB0@WSaZBWX0aBZZBMX");
				@(echo "          :WMMW8MZ@B8888aZWWBBW07.:aaaaZ2XSMMSMa80,aM,,XX7XM82M MaaaM MBBMaaZ0B@aWWMMMW0BM@2:");
				@(echo "        SW0,8XrX,.:W0BWMMM@@@w0bbwrzzaaaswm2sxbwzz@.MM ,ZZZa@Ma MX07@2MMM8aZ8BBB8MMM rMMMBBM7.  .Xa7");
				@(echo "      rMBMM rS iaX28Z272X2aXB@MB88@MaZaaZMS2Za2@ZB8rrM@ X@8Z2i:,M20rBMra0aa8BW@BMM0     ZMMW  :XW,");
				@(echo "     Z0,.,.XrZB@@mmmmmmmsa7saw8mwam@a082M0aZZZZ0BZBB,2M8 i027r7:MZ07ZM MB88BWMWMM         22 i.X8,");
				@(echo "    B0BMi,S7BMMMMXi:::8W8iXMM8iZMMM0Z08ZMa8027ir0B000,XM8  SZSr:Ma0XSM,2Z80WMMM8           MaX:SZa,");
				@(echo "   @wx2z,S7WMMM..:r77rX.rZM@r,,r8,MMW8aM@ZS72WW80M0M8Z,XMM.    2MSBXXM .ZZ8MM               MBS, .X,");
				@(echo "  0Zi,.,2r0MMB ,rWM@MMZ7MM@Xir8MMX  BMMMW00@B08ZMB88M88ZSMM0X7S@M,MXSMB880MMX                Z");
				@(echo "  W,2M,XXXMMM i2ZSXSW7XMMWW@MMBMMMMW: ,M@ZBB0Z0@8008BMZa,7MMMMMMBrM:aMWZa27W  a80ZZX         S ZiZ.");
				@(echo " @m@80:278MM SiWM@7B2Z@W0@MMM7,MMMMMMM20B0B0BBMBB0W0ZWMZZB SM@WSSMa SM800ZaMMW88ZBMMMS        7 :");
				@(echo " @si::,27WMM :8@MM2:M8,:MMBrMWZMM SMWWMMBWWWB@MBW@MBZ0WMa@7iX28MB. r2MX,rZ@7SXaSSMX0aWM");
				@(echo ",Wr:MS727BMM .Br,,SaX:rM8 ZiMBa@M7 MMMMM0WWWB@M@MZ .20BBMZB7,Sr. r77MM0rXM8W8a7irZZ,7rSM");
				@(echo ":0ZMMSXaSWMM .aWWMMM0@MM  X7MW2WM   M0MMMM@WWMMS.XMMMWWZBMW8M0SrXZrZMWWrMBXXr,28W20rMMZZS");
				@(echo "2@@7x7xa.XWM riMM8ZMZ,8X XSZM0aMM. aMX .7MMMMMMaMM@WWMMBa8MM888B8aM@MZXiM0BZ28XiXX8MMMM0XB");
				@(echo "ZX,72XXZ7 ZM2r ZWrXMMiZBZ2XMMZ8MM   MMMMXirZMM8MM@WWMMMMBZ00MM@BBWMM0WXS@XX2a7,:XSZM  0MZ8");
				@(echo "2M8SZSXZ2.S0M,i ,02MM     MMWZWM@     MMMMM0BM0@W@@@mmm: aW22Z@MMMW2WB,2M0aa7iS0WZ8M BS0Mr@");
				@(echo " ZWMM@SaZS.,MMZ,  .,    ,MSX.8MM8       MMMMM@@mmmwmmw:ZMMMM@Z8Z2a8ZWMB MZ87,0Z,,ZaW  .XMMXi");
				@(echo " M2B82aa0Z,iSZMMBX:..iSMM87 2MMM        MM8BMMMMMM@MWSMMMM@Ma:WM0SMWBB88MZXB@XX7,02M  ,77MaZ");
				@(echo " BMX77aS2BZX,irMMMMMMMM8S  7MMW,       MMMMMBZ800WMMMMMM@@@wrmmm2mmxaaxwmwx7xxri,WXM  i i0@WZ");
				@(echo "  XMMBMM88W0277  ,222i  . WMMMM       WM0Z2WMMMMM@MMM@@@@@wmmm@MMZXSaX: BMWWS77@BZZ@S  7M M8a");
				@(echo "   MM@M@ZZZB@B0XrX,.  rS0MMM@@        MMBBaZW8MMMWBMMMMWMMMMMMM@8aaa@MM@MBX82SW7ii80W  ZS Z8@");
				@(echo "    MBrraZW@W@M@@wz00mmmmmmmz        XMB8Z88M arM@MMMMMMMMM0a,,,S2SXr,2aMM0rZ@S2S7aZM  ,X 08ZB");
				@(echo "     2MMMMMM2aB@MMMMMM@M8@M          7MB0B08@,M@7,XX72@M  2:..2rii,22XM00MMZ2ZaX7rB0W8 i8@S808");
				@(echo "      ,MMMB2B@MMS70MaSMMMr           MMW0Z08M.X8MM7X8aWW@ MMMMMMMMMMMMMM XMMM82S0WSZ0S.2Wa 0ZM.");
				@(echo "         8MMMMMMMMMMMMB.             MMB000ZM,MBMrrX72WWB   2Xr:         MM,2@800SS2B02 ,i @z8z");
				@(echo "             SB@882,                 ,M@WW0ZM2,iMZ,a:@0mb                 MM2,8@8XXr8BXM  rW072");
				@(echo "                                     2MBZZ0BrMX:,,Sr2M2Ma                  MM@8BZ8Z8@0BrMWMaM M");
				@(echo "                                      MMZ20BS2MZ,i,8M22M                   MZMMW08@M00W2iMW80 M");
				@(echo "                                      0MBM00W,SMMMMMS:MM                   @m2i@MM@2riZ@S,8W rM");
				@(echo "                                       MM7SZBWSXr87i7@M                      MM00MMMMMMBM@Xr,,B");
				@(echo "                                        MMMM80WW7ZX8MM8                      0::2.:r::S. S:i,r,");
				@(echo "                                        ,0MZZ@WBMMMMMS                        B2.Sai0i ir:aar8W");
				@(echo "                                          0MMM@MMMMW                           MMZ2WXSM28ZiX2Zi");
				@(echo "                                            .iB02r                              ,MMMMMMM0ZMMMS");
				@(echo "                                                                                   .X8MMMMa:");
				@$(call SUCCESS, "----- Let\'s begin to play ! -----")

lib:
				@$(MAKE) -C library/string/
				@$(MAKE) -C library/stat/
				@$(MAKE) -C library/maths/

clean:
				$(RM) $(OBJ)
				@$(MAKE) -C library/string/ clean
				@$(MAKE) -C library/stat/ clean
				@$(MAKE) -C library/maths/ clean

fclean:			clean
				$(RM) $(BIN)
				@$(MAKE) -C library/string/ fclean
				@$(MAKE) -C library/stat/ fclean
				@$(MAKE) -C library/maths/ fclean

re_lib:
				@$(MAKE) -C library/string/ re
				@$(MAKE) -C library/stat/ re
				@$(MAKE) -C library/maths/ re

re:				fclean all

.PHONY:			 all, fclean, re, library

## ========================================================================== ##
%.o: %.c
				@(echo "\033[32m[Controller] :[\033[31m \c")
				@(echo "$@ \033[32m]\033[0m\033[0K")
				@($(CC) $(CFLAGS) $(LDFLAGS) -c -o $@ $<)
				@(echo "\033[2F")