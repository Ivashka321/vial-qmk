# myboard — QMK + Vial для RP2040 Zero

## Структура проекта

```
myboard/
├── config.h
├── info.json
├── rules.mk
└── keymaps/
    └── vial/
        ├── keymap.c
        ├── vial.json
        └── rules.mk
```

## Матрица

| Сигнал | GPIO  |
|--------|-------|
| row0   | GP0   |
| row1   | GP1   |
| row2   | GP2   |
| row3   | GP3   |
| col0   | GP4   |
| col1   | GP5   |
| col2   | GP6   |
| col3   | GP7   |
| col4   | GP8   |
| col5   | GP9   |
| col6   | GP10  |
| col7   | GP11  |
| col8   | GP12  |
| col9   | GP13  |
| col10  | GP14  |
| col11  | GP15  |
| col12  | GP26  |
| col13  | GP27  |

## Слои

- **Layer 0 (BASE):** обычная раскладка
- **Layer 1 (FN):** удерживай Fn или MO(1)
  - M → стрелка вверх (↑)
  - , → стрелка влево (←)
  - . → стрелка вниз (↓)  *(нажать Fn + .)*
  - / → стрелка вправо (→)
  - F1–F12 на верхнем ряду
  - ` на Esc
  - Del на Backspace

## Сборка через Vial-QMK

### 1. Клонировать Vial-QMK (не обычный QMK!)

```bash
git clone https://github.com/vial-kb/vial-qmk.git
cd vial-qmk
make git-submodule
```

### 2. Скопировать папку клавиатуры

```bash
cp -r /путь/к/myboard keyboards/myboard
```

### 3. Скомпилировать

```bash
qmk compile -kb myboard -km vial
# или
make myboard:vial
```

### 4. Прошить

Полученный `.uf2` файл перетащить на диск RPI-RP2 (зажать BOOT при подключении RP2040 Zero).

### GitHub Actions (без локального окружения)

1. Форкнуть https://github.com/vial-kb/vial-qmk
2. Скопировать папку `myboard` в `keyboards/`
3. Запустить workflow `Build QMK firmware` с параметрами:
   - keyboard: `myboard`
   - keymap: `vial`

## Vial

После прошивки открыть https://vial.rocks или приложение Vial — клавиатура определится автоматически.
Можно менять раскладку на лету без перекомпиляции.
