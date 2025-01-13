# SaltyNX

Hintergrundprozess für die Nintendo Switch zur Datei-/Codemodifikation

Erstellt von: https://github.com/shinyquagsire23

Diese Abzweigung enthält viele Verbesserungen der Benutzerfreundlichkeit und unterstützt neben Plugins auch Patches.

Seit Version 0.7.0 sind NX-FPS und ReverseNX-RT ein fester Bestandteil des SaltyNX Core.<br>
Seit Version 1.0.0 werden 32-Bit-Spiele unterstützt (externe Plugins werden für diese nicht unterstützt).<br>
Um ReverseNX-RT zu nutzen, lade das neueste Overlay von [HIER](https://github.com/masagrator/ReverseNX-RT/releases) herunter

![GitHub all releases](https://img.shields.io/github/downloads/masagrator/SaltyNX/total?style=for-the-badge)
---

Patches-Muster:
- Dateiname ist das Symbol der Funktion mit Dateityp `.asm64` für 64-Bit-Spiele, `.asm32` für 32-Bit-Spiele
- Schreibe in die Datei mit einem Hex-Editor die Befehle, die du in diese Funktion einfügen möchtest
- Lege diese Datei entweder in `SaltySD/patches`, damit sie für jedes Spiel funktioniert, oder in `SaltySD/patches/*titleid*`, damit sie nur für ein bestimmtes Spiel funktioniert

Für zusätzliche Funktionen benötigst du SaltyNX-Tool

https://github.com/masagrator/SaltyNX-Tool

Es ist erforderlich, mindestens FW Version 10.0.0 installiert zu haben

Kein technischer Support für:
- Atmosphere-Abzweigungen
- SX OS
- Kosmos
- ReinX

Bekannte Probleme:
- Instabilität mit einigen Homebrews und Systemmodulen (wie emuiibo)
- Du benötigst mindestens Hekate 5.0.2, wenn du keine Probleme im Zusammenhang mit Hekate haben möchtest
- Cheats, die direkt Heap-Adressen verwenden, funktionieren möglicherweise nicht richtig bei der Verwendung von Plugins

# So lädst du die Version herunter:

Für Atmosphere >=0.10.1 kopiere einfach die Ordner aus dem Archiv in das Hauptverzeichnis deiner SD-Karte.

Für Atmosphere <=0.9.4 und alle anderen CFW benenne den Ordner `contents` in `titles` um

Denk daran, die Switch neu zu starten

---

# Danke an
- `Cooler3D` für das Teilen seines Codes mit mir, wie er die Bildwiederholrate im Handheld-Modus in seinen Tools geändert hat, die die ersten öffentlich verfügbaren Tools waren, die dies auf HOS ermöglichten. Ich habe das als Grundlage verwendet, um meine eigene Funktion zu erstellen.
  
---

# Thanks to
- `Cooler3D` for sharing code with me how he was changing handheld display refresh rate in his tools that were first publicly available tools allowing this on HOS. I have used that as basis to make my own function.

# Liste der Titel, die nicht mit Plugins/Patches kompatibel sind

| Title | plugins/all | Why? |
| ------------- | ------------- | ------------- |
| Alien: Isolation | plugins | Heap related |
| Azure Striker Gunvolt: Striker Pack | plugins | 32-bit game, not supported |
| Baldur's Gate and Baldur's Gate II: Enhanced Editions | plugins | 32-bit game, not supported |
| CelDamage HD | plugins | 32-bit game, not supported |
| Company of Heroes Collection | plugins | heap related |
| DEADLY PREMONITION Origins | plugins | 32-bit game, not supported |
| Dies irae Amantes amentes For Nintendo Switch | plugins | 32-bit game, not supported |
| Donkey Kong Country: Tropical Freeze | all | From second level heap issues |
| EA SPORTS FC 24 | plugins | heap related |
| Goat Simulator | plugins | 32-bit game, not supported |
| Gothic | plugins | 32-bit game, not supported |
| Grandia Collection | plugins | Only launcher is 64-bit, actual games are 32-bit, so not supported |
| Grid: Autosport | plugins | Heap related |
| Immortals Fenyx Rising | plugins | Heap related |
| LIMBO | plugins | 32-bit game, not supported |
| Luigi's Mansions 2 HD | plugins | 32-bit game, not supported |
| Luigi's Mansion 3 | plugins | Heap related |
| Mario Kart 8 Deluxe | plugins | 32-bit game, not supported |
| Mario Strikers: Battle League | plugins | Heap related |
| Megadimension Neptunia VII | plugins | 32-bit game, not supported |
| Moero Chronicle Hyper | plugins | 32-bit game, not supported |
| Moero Crystal H | plugins | 32-bit game, not supported |
| Monster Hunter Generations Ultimate | plugins | 32-bit game, not supported |
| Monster Hunter XX Nintendo Switch Ver. | plugins | 32-bit game, not supported |
| New Super Mario Bros. U Deluxe | plugins | 32-bit game, not supported |
| Ni no Kuni: Wrath of the White Witch | plugins | 32-bit game, not supported |
| Olympic Games Tokyo 2020 – The Official Video Game™ | plugins | Heap related |
| Pikmin 3 Deluxe | plugins | 32-bit game, not supported |
| Planescape: Torment and Icewind Dale | plugins | 32-bit game, not supported |
| Plants vs. Zombies: Battle for Neighborville | plugins | Heap related |
| Radiant Silvergun | plugins | 32-bit game, not supported |
| Sherlock Holmes and The Hound of The Baskervilles | plugins | 32-bit game, not supported |
| Stubbs the Zombie in Rebel Without a Pulse | all | heap related |
| The Lara Croft Collection | plugins | heap related |
| Tokyo Mirage Session #FE Encore | plugins | 32-bit game, not supported |
| Valkyria Chronicles | plugins | 32-bit game, not supported |
| Witcher 3 GOTY (version 3.2) | all | heap related |
| World of Goo | plugins | 32-bit game, not supported |
| YouTube | plugins | Unknown |
| 超次次元ゲイム ネプテューヌRe;Birth1 | plugins | 32-bit game, not supported |
| 超次次元ゲイム ネプテューヌRe;Birth2 SISTERS GENERATION | plugins | 32-bit game, not supported |
| 神次次元ゲイム ネプテューヌRe;Birth3 V CENTURY | plugins | 32-bit game, not supported |

Titel in der exceptions.txt werden als Teil der Blacklist behandelt, die du im Hauptverzeichnis des Repositories findest. SaltyNX liest diese aus dem SaltySD-Ordner. Ein `X` am Anfang der Titel-ID bedeutet, dass dieses Spiel keine Patches und Plugins laden wird. Ein `R` am Anfang der Titel-ID bedeutet, dass dieses Spiel keine Patches und Plugins laden wird, wenn ein romfs-Mod für dieses Spiel installiert ist.

32-Bit-Spiele werden standardmäßig für Plugins ignoriert.
