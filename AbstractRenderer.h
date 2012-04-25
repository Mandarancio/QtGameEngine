#ifndef ABSTRACT_RENDERER_H
#define ABSTRACT_RENDERER_H
namespace QtGameEngine
{
namespace RenderingEngine
{

class AbstractRenderer
{
public:
    virtual void initialize() = 0;
    virtual void render();
    virtual void resize(int width,int height) = 0;
};

}
}
#endif // ABSTRACTRENDERER_H
