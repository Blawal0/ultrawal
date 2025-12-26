# ULTRAWAL

## ULTRAKILL color scheme generator using pywal and imagemagick


https://github.com/user-attachments/assets/987fea56-ab67-479c-8e1d-fa53700f3c45


___

### Dependencies

- [pywal](https://github.com/dylanaraps/pywal)
- imagemagick

---

### Installation

#### Linux

First clone the git repository
```
git clone https://github.com/Blawal0/ultrawal.git
cd ultrawal
```
Then compile and install the program using `make`
```
make
sudo make install
```

---

No other operating systems are supported as of now, macOS **could** work, but I don't have a mac to test it on.

---

### Usage

If you haven't generated a pywal color scheme yet, do so with
```
wal -i path/to/wallpaper.png
```
(replace `path/to/wallpaper` with the path to your desktop wallpaper)

Then run the program
```
ultrawal
```
and copy the generated color scheme to your ULTRAKILL palettes folder (`~/.local/share/Steam/steamapps/common/ULTRAKILL/Palettes/` by default)

then select the palette in your settings
