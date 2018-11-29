#include "pipe.h"

Pipe::Pipe(int x) {
    _isVisible = false;
    _xPosition = x;
    _pipeHeight = RandomTop();
    _pipeStart = RandomBot();
}

void Pipe::setVisible() {
    _isVisible = true;
}

int Pipe::getXPosition() {
    return _xPosition;
}

void Pipe::move() {
    _xPosition = _xPosition - 2;
}


void Pipe::drawPipeTop(const Resources &resources, SDL_Renderer *renderer) {
    if (_isVisible) {
        _images = Images :: PIPETOP;

        SDL_Rect rect = {_xPosition, 0, 50, _pipeHeight};
        SDL_RenderCopyEx(renderer, resources.getTexture(_images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE);
    }
}

void Pipe::drawPipeBot(const Resources &resources, SDL_Renderer *renderer) {
    if (_isVisible) {
        _images = Images :: PIPEBOT;

        SDL_Rect rect = {_xPosition, _pipeStart, 50, 1000};
        SDL_RenderCopyEx(renderer, resources.getTexture(_images), nullptr, &rect, 0.0, nullptr, SDL_FLIP_NONE);
    }
}
