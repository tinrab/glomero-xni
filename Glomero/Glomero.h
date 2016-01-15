#import "TINR.Glomero.classes.h"

#import "Retronator.Xni.Framework.Audio.h"

@interface Glomero : Game

- (void) enterScene:(Class) sceneClass;

@property (nonatomic, strong) Scene *currentScene;
@property (nonatomic, strong) TextureAtlas *worldAtlas;
@property (nonatomic, strong) TextureAtlas *entitiesAtlas;
@property (nonatomic, strong) TextureAtlas *uiAtlas;
@property (nonatomic, strong) SpriteFont *font;
@property (nonatomic, strong) SoundEffect *blibSound;
@property (nonatomic, strong) SoundEffect *coinSound;
@property (nonatomic, strong) SoundEffect *explosionSound;
@property (nonatomic, strong) SoundEffect *shootSound;
@property (nonatomic, strong) SoundEffect *hitSound;

+ (Glomero *) getInstance;

@end
