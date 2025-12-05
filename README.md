# Mouse Emulates Mouse
Scrolling capability for all pointing devices


The purpose of this project is to allow convenient scrolling using the pointing device of a GPD Pocket 2
however it will work for other pointing devices that do not allow vertical and/or horizontal scrolling

# Implemented (not yet tested)
- systemd service that continuously launches/runs program
- For loop continously checking mouse location (while RMB is held),
- and logic to check how far the mouse has moved in all directions from its initial position
- Deadzones so tiny pointer movements will not cause scrolling
- Move mouse back to exact initial position afterwords

# TODO:
- Disable on sleep
- Listen for and grab RMB
- Allow rebinding activation key
- Smooth scrolling
- Horizontal scrolling
- Allow adjustment of sensitivity and polling rate
- User Interface
- Wayland support
- Create systemd timer or dangerous infinite loop to avoid spamming system logs and for increased perforomance
- Shorten list of dependencies for increased performance
