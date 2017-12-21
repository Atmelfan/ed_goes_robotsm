# ed_goes_robotsm
Grupp 2


# För att synka via git shell:
  1) git clone --recurse-submodules https://github.com/Atmelfan/ed_goes_robotsm.git
  2) ???
  3) Profit
  
  
Om du frakkar upp och ignorerar '--recurse-submodules' så måste du gå in i alla mappar och köra:
  1) git submodule init
  2) git submodule update
  

# För att synka via Github for desktop:
  1) ~~Tydligen gör den det automatiskt.~~ Den frakkar upp exakt allt.



# Updatera individuella submoduler
Kör "git pull" i dess mapp eller "git submodule update --recursive" för att updatera alla.
Inte en aning hur man gör i Github for desktop.

# För att sedan ladda upp ändringar i submoduler
  1) cd din_submodul_här
  2) git commit -am "din kommentar"
  3) git push
  4) cd ..
  5) Repetera 1-4 för alla submoduler som ändrats om någon
  6) Commita via github for desktop eller:
  6) git commit -am "din kommentar för huvudmappen"
  7) git push

  
  
  
  
