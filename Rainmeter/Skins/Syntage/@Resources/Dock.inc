[Variables]

;INSTRUCTIONS:
;How to replace existing icons and applications:

;The icons must have a minimum size of 128x128 and must be in PNG format
;Add the icons to the DockIcons folder (Documents\Rainmeter\Skins\Syntage\Resources\DockIcons)
;For each icon change ONLY the first 2 lines (ImageNameIcon and LeftMouse).




;Example for replacing the icon with the number 1:

;1.For Applications:

;ImageNameIcon1=#@#DockIcons\VLC.png
;LeftMouse1=["C:\Program Files\VideoLAN\VLC\vlc.exe"]


;2.For Internet links:

;ImageNameIcon1=#@#DockIcons\TheWeatherChannel.png
;LeftMouse1=["https://weather.com"]


;3.For Windows Special Folders:
;Details : https://docs.rainmeter.net/tips/launching-windows-special-folders/

;ImageNameIcon1=#@#DockIcons\Downloads.png
;LeftMouse1=[Shell:::{374DE290-123F-4565-9164-39C4925E467B}]





;After you have finished the changes, save and close the file.
;Then right click on the Dock skin and choose Refresh skin.




;======================================================================================================


;Icon1
ImageNameIcon1=#@#DockIcons\computer.png
LeftMouse1=[Shell:::{20D04FE0-3AEA-1069-A2D8-08002B30309D}]
MouseOver1=[!SetOption Icon1 W "(#size#*70)"][!SetOption Icon1 H "(#size#*70)"][!SetOption Icon1 X "(#size#*10)"][!SetOption Icon1 Y "(#size#*10)"][!Update]
MouseLeave1=[!SetOption Icon1 W "(#size#*50)"][!SetOption Icon1 H "(#size#*50)"][!SetOption Icon1 X "(#size#*20)"][!SetOption Icon1 Y "(#size#*20)"][!Update]

;Icon2
ImageNameIcon2=#@#DockIcons\chrome.png
LeftMouse2=["https://www.google.com/"]
MouseOver2=[!SetOption Icon2 W "(#size#*70)"][!SetOption Icon2 H "(#size#*70)"][!SetOption Icon2 X "(#size#*10)"][!SetOption Icon2 Y "(#size#*80)"][!Update]
MouseLeave2=[!SetOption Icon2 W "(#size#*50)"][!SetOption Icon2 H "(#size#*50)"][!SetOption Icon2 X "(#size#*20)"][!SetOption Icon2 Y "(#size#*90)"][!Update]

;Icon3
ImageNameIcon3=#@#DockIcons\deviantart.png
LeftMouse3=["https://www.deviantart.com/"]
MouseOver3=[!SetOption Icon3 W "(#size#*70)"][!SetOption Icon3 H "(#size#*70)"][!SetOption Icon3 X "(#size#*10)"][!SetOption Icon3 Y "(#size#*150)"][!Update]
MouseLeave3=[!SetOption Icon3 W "(#size#*50)"][!SetOption Icon3 H "(#size#*50)"][!SetOption Icon3 X "(#size#*20)"][!SetOption Icon3 Y "(#size#*160)"][!Update]

;Icon4
ImageNameIcon4=#@#DockIcons\facebook.png
LeftMouse4=["https://www.facebook.com"]
MouseOver4=[!SetOption Icon4 W "(#size#*70)"][!SetOption Icon4 H "(#size#*70)"][!SetOption Icon4 X "(#size#*10)"][!SetOption Icon4 Y "(#size#*220)"][!Update]
MouseLeave4=[!SetOption Icon4 W "(#size#*50)"][!SetOption Icon4 H "(#size#*50)"][!SetOption Icon4 X "(#size#*20)"][!SetOption Icon4 Y "(#size#*230)"][!Update]

;Icon5
ImageNameIcon5=#@#DockIcons\instagram.png
LeftMouse5=["https://www.instagram.com"]
MouseOver5=[!SetOption Icon5 W "(#size#*70)"][!SetOption Icon5 H "(#size#*70)"][!SetOption Icon5 X "(#size#*10)"][!SetOption Icon5 Y "(#size#*290)"][!Update]
MouseLeave5=[!SetOption Icon5 W "(#size#*50)"][!SetOption Icon5 H "(#size#*50)"][!SetOption Icon5 X "(#size#*20)"][!SetOption Icon5 Y "(#size#*300)"][!Update]

;Icon6
ImageNameIcon6=#@#DockIcons\reddit.png
LeftMouse6=["https://www.reddit.com"]
MouseOver6=[!SetOption Icon6 W "(#size#*70)"][!SetOption Icon6 H "(#size#*70)"][!SetOption Icon6 X "(#size#*10)"][!SetOption Icon6 Y "(#size#*360)"][!Update]
MouseLeave6=[!SetOption Icon6 W "(#size#*50)"][!SetOption Icon6 H "(#size#*50)"][!SetOption Icon6 X "(#size#*20)"][!SetOption Icon6 Y "(#size#*370)"][!Update]

;Icon7
ImageNameIcon7=#@#DockIcons\twitter.png
LeftMouse7=["https://twitter.com"]
MouseOver7=[!SetOption Icon7 W "(#size#*70)"][!SetOption Icon7 H "(#size#*70)"][!SetOption Icon7 X "(#size#*10)"][!SetOption Icon7 Y "(#size#*430)"][!Update]
MouseLeave7=[!SetOption Icon7 W "(#size#*50)"][!SetOption Icon7 H "(#size#*50)"][!SetOption Icon7 X "(#size#*20)"][!SetOption Icon7 Y "(#size#*440)"][!Update]

;Icon8
ImageNameIcon8=#@#DockIcons\gmail.png
LeftMouse8=["https://mail.google.com/mail/"]
MouseOver8=[!SetOption Icon8 W "(#size#*70)"][!SetOption Icon8 H "(#size#*70)"][!SetOption Icon8 X "(#size#*10)"][!SetOption Icon8 Y "(#size#*500)"][!Update]
MouseLeave8=[!SetOption Icon8 W "(#size#*50)"][!SetOption Icon8 H "(#size#*50)"][!SetOption Icon8 X "(#size#*20)"][!SetOption Icon8 Y "(#size#*510)"][!Update]

;Icon9
ImageNameIcon9=#@#DockIcons\spotify.png
LeftMouse9=["https://open.spotify.com"]
MouseOver9=[!SetOption Icon9 W "(#size#*70)"][!SetOption Icon9 H "(#size#*70)"][!SetOption Icon9 X "(#size#*10)"][!SetOption Icon9 Y "(#size#*570)"][!Update]
MouseLeave9=[!SetOption Icon9 W "(#size#*50)"][!SetOption Icon9 H "(#size#*50)"][!SetOption Icon9 X "(#size#*20)"][!SetOption Icon9 Y "(#size#*580)"][!Update]

;Icon10
ImageNameIcon10=#@#DockIcons\Youtube.png
LeftMouse10=["https://www.youtube.com"]
MouseOver10=[!SetOption Icon10 W "(#size#*70)"][!SetOption Icon10 H "(#size#*70)"][!SetOption Icon10 X "(#size#*10)"][!SetOption Icon10 Y "(#size#*640)"][!Update]
MouseLeave10=[!SetOption Icon10 W "(#size#*50)"][!SetOption Icon10 H "(#size#*50)"][!SetOption Icon10 X "(#size#*20)"][!SetOption Icon10 Y "(#size#*650)"][!Update]








