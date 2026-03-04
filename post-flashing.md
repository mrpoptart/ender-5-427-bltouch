# Post-Flashing Guide — Ender 5 / 4.2.7 / BLTouch

## Enabled Features

### Print Quality

| Feature | What it does | Tuning needed |
|---|---|---|
| **Input Shaping X/Y** | Eliminates ringing/ghosting | Tune frequencies with `M593 F<hz>` — start at 40Hz, print a ringing test |
| **Linear Advance** | Clean corners, no bulging | Tune K value with `M900 K<val>` — starts at 0.22, print a LA calibration pattern |
| **Adaptive Step Smoothing** | Smoother motion at low speeds | None needed |

### BLTouch / Leveling

| Feature | What it does |
|---|---|
| **LCD Bed Leveling** | Mesh editing from the LCD menu |
| **Assisted Tramming (G35)** | Probes corners, tells you how many screw turns to make |
| **Restore Leveling After G28** | Keeps your mesh active after homing |
| **M48 Probe Test** | Tests BLTouch repeatability |

### Quality of Life

| Feature | What it does |
|---|---|
| **Nozzle Park** | Parks nozzle safely during pause |
| **Advanced Pause (M600)** | LCD-guided filament change mid-print |
| **Power Loss Recovery** | Resume after power outage (via SD card) |

## Recommended Tuning Order

1. **Verify BLTouch accuracy** — Run `M48` and check the standard deviation (< 0.01mm is great)
2. **Tram your bed** — Run `G35` and follow the screw-turn instructions
3. **Tune Input Shaping** — Print a ringing test, then adjust with `M593 X F<hz>` and `M593 Y F<hz>`
4. **Tune Linear Advance** — Print a [LA calibration pattern](https://marlinfw.org/tools/lin_advance/k-factor.html), then set with `M900 K<val>`
5. **Save to EEPROM** — Run `M500` to persist all tuned values
