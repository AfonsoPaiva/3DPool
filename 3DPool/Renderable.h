#pragma once

class Renderable {
public:
    virtual void render() = 0; // M�todo virtual puro para renderizar o objeto
    virtual ~Renderable() = default; // Destrutor virtual padr�o
};
