#
# ~/.bash_profile
#

[[ -f ~/.bashrc ]] && . ~/.bashrc
eval `dircolors ~/.dir_colors/dircolors.ansi-dark`

if [[ ! $DISPLAY && $XDG_VTNR -eq 1 ]]; then
   startx
fi
