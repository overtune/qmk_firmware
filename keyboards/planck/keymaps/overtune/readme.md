# The Default Planck Layout

Compile

```bash
qmk compile
```

```bash
qmk compile -kb planck/rev6 -km default
```

Flash

```bash
qmk flash
```

Set default keymap

```bash
qmk config user.keymap=overtune
```

Set default keyboard

```bash
qmk config user.keyboard=planck/rev6
```

## Update repo

Make sure you have added the qmk-repo as a remote:

```bash
git remote add upstream https://github.com/qmk/qmk_firmware.git
```

Sync your local repo with the qmk remote:

```bash
git checkout master
git fetch upstream
git pull upstream master
git push origin master
```
