// SPE Version 1.2 added peekM and pokeM functions
// SPE Version 1.1 added bus_ and pin_ functions
 F_bus_In = -45;
 F_bus_Out = -46;
 F_bus_Read = -49;
 F_bus_Set = -47;
 F_bus_Write = -48;
 F_charheight = 29;
 F_charwidth = 30;
 F_file_Close = -232;
 F_file_Count = 1;
 F_file_Dir = 2;
 F_file_Erase = 3;
 F_file_Error = -225;
 F_file_Exec = 4;
 F_file_Exists = 5;
 F_file_FindFirst = 6;
 F_file_FindNext = -229;
 F_file_GetC = -242;
 F_file_GetS = 7;
 F_file_GetW = -244;
 F_file_Image = -239;
 F_file_Index = -235;
 F_file_LoadFunction = 8;
 F_file_LoadImageControl = 9;
 F_file_Mount = -253;
 F_file_Open = 10;
 F_file_PlayWAV = 11;
 F_file_PutC = 31;
 F_file_PutS = 32;
 F_file_PutW = -243;
 F_file_Read = 12;
 F_file_Rewind = -248;
 F_file_Run = 13;
 F_file_ScreenCapture = -240;
 F_file_Seek = -234;
 F_file_Size = 14;
 F_file_Tell = 15;
 F_file_Unmount = -254;
 F_file_Write = 16;
 F_gfx_BevelShadow = -104;
 F_gfx_BevelWidth = -103;
 F_gfx_BGcolour = -92;
 F_gfx_Button = 17;
 F_gfx_ChangeColour = -76;
 F_gfx_Circle = -61;
 F_gfx_CircleFilled = -62;
 F_gfx_Clipping = -94;
 F_gfx_ClipWindow = -75;
 F_gfx_Cls = -51;
 F_gfx_Contrast = -100;
 F_gfx_Ellipse = -78;
 F_gfx_EllipseFilled = -79;
 F_gfx_FrameDelay = -97;
 F_gfx_Get = -90;
 F_gfx_GetPixel = -64;
 F_gfx_Line = -56;
 F_gfx_LinePattern = -101;
 F_gfx_LineTo = -54;
 F_gfx_MoveTo = -52;
 F_gfx_Orbit = 18;
 F_gfx_OutlineColour = -99;
 F_gfx_Panel = -81;
// F_gfx_PenSize = -91;
 F_gfx_Polygon = 19;
 F_gfx_PolygonFilled = 20;
 F_gfx_Polyline = 21;
 F_gfx_PutPixel = -63;
 F_gfx_Rectangle = -59;
 F_gfx_RectangleFilled = -60;
 F_gfx_ScreenCopyPaste = -83;
 F_gfx_ScreenMode = -98;
 F_gfx_Set = -50;
 F_gfx_SetClipRegion = -77;
 F_gfx_Slider = -82;
 F_gfx_Transparency = -96;
 F_gfx_TransparentColour = -95;
 F_gfx_Triangle = -65;
 F_gfx_TriangleFilled = -87;
 F_img_ClearAttributes = -187;
 F_img_Darken = -181;
 F_img_Disable = -180;
 F_img_Enable = -179;
 F_img_GetWord = -184;
 F_img_Lighten = -182;
 F_img_SetAttributes = -186;
 F_img_SetPosition = -178;
 F_img_SetWord = -183;
 F_img_Show = -185;
 F_img_Touched = -188;
 F_media_Flush = -118;
 F_media_Image = -117;
 F_media_Init = -119;
 F_media_RdSector = 22;
 F_media_ReadByte = -113;
 F_media_ReadWord = -114;
 F_media_SetAdd = -109;
 F_media_SetSector = -110;
 F_media_Video = -107;
 F_media_VideoFrame = -108;
 F_media_WriteByte = -115;
 F_media_WriteWord = -116;
 F_media_WrSector = 23;
 F_mem_Free = -220;
 F_mem_Heap = -221;
 F_peekM = 39;
 F_pin_HI = -42;
 F_pin_LO = -43;
 F_pin_Read = -44;
 F_pin_Set = -41;
 F_pokeM = 40;
 F_putCH = -2;
 F_putstr = 24;
 F_snd_BufSize = -258;
 F_snd_Continue = -261;
 F_snd_Pause = -260;
 F_snd_Pitch = -257;
 F_snd_Playing = -262;
 F_snd_Stop = -259;
 F_snd_Volume = -256;
 F_sys_Sleep = -197;
 F_touch_DetectRegion = -199;
 F_touch_Get = -201;
 F_touch_Set = -200;
 F_txt_Attributes = -38;
 F_txt_BGcolour = -26;
 F_txt_Bold = -34;
 F_txt_FGcolour = -25;
 F_txt_FontID = -27;
 F_txt_Height = -29;
 F_txt_Inverse = -36;
 F_txt_Italic = -35;
 F_txt_MoveCursor = -23;
 F_txt_Opacity = -33;
 F_txt_Set = -24;
 F_txt_Underline = -37;
 F_txt_Width = -28;
 F_txt_Wrap = -39;
 F_txt_Xgap = -30;
 F_txt_Ygap = -31;
 F_file_CallFunction = 25;
 F_sys_GetModel = 26;
 F_sys_GetVersion = 27;
 F_sys_GetPmmC = 28;
 F_writeString = 33;
 F_readString = 34;
 F_blitComtoDisplay = 35;
 F_file_FindFirstRet = 36;
 F_file_FindNextRet = 37;
 F_setbaudWait = 38;

  Err4D_OK      = 0 ;
  Err4D_Timeout = 1 ;
  Err4D_Invalid = 2 ; // other than ACK received

  Error4DText : t4Derrortext = ('OK','Timeout','NAK') ;

