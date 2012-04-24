#ifndef ABSTRACT_RENDERER_H
#define ABSTRACT_RENDERER_H
namespace Renderer {
class AbstractRenderer
{
public:
    virtual void initialize() = 0;
    virtual void render() = 0;
    virtual void resize(int width,int height) = 0;

};

}
#endif // ABSTRACTRENDERER_H
