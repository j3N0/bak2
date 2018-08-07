#
# ~/.bashrc
#

#fortuen
command fortune

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
PS1='[\u@\h \W]\$ '

#export LANG=zh_CN.UTF-8
#export LANGUAGE=zh_CN:en_US

alias list='comm -23 <(pacman -Qeq|sort) <(pacman -Qgq base base-devel|sort)'
alias ll='ls -l'
alias l.='ls -d .*'
alias ping='ping -c 3'
alias shutdown='sudo shutdown -h now'
alias shadowsocks='sudo sslocal -d start -c ~/shadowsocks.json'

#export http_proxy=http://127.0.0.1:8118
#export https_proxy=http://127.0.0.1:8118
#export ftp_proxy=http://127.0.0.1:8118

