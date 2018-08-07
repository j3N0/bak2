"
"vim-plug
"
call plug#begin('~/.vim/plugged')
Plug 'tpope/vim-sensible'
Plug 'scrooloose/nerdtree', { 'on': 'NERDTreeToggle' }
"Plug 'Valloric/YouCompleteMe'
Plug 'altercation/vim-colors-solarized'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
"Plug 'Lokaltog/vim-easymotion'
call plug#end()


"vim-solarized
let g:solarized_termcolors=16
set background=dark
colorscheme solarized


"vim-airline
let g:airline_powerline_fonts = 1
"let g:airline#extensions#tabline#enabled = 1
let g:airline_theme='powerlineish'
"let g:airline_section_b = '%{strftime("%c")}'


set nu
syntax enable
set ignorecase
let mapleader=";"
