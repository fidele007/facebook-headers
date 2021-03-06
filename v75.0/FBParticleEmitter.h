/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBParticleEmitterShader, UIImage, NSString;

@interface FBParticleEmitter : NSObject {

	shared_ptr<facebook::particleemitter::DynamicEmitter>* _emitter;
	shared_ptr<facebook::particleemitter::OpticalFlowCalculator>* _calculator;
	FBPlatformInputs* _platformInputs;
	int _numParticles;
	FBParticleEmitterShader* _shader;
	unsigned _textureIdentifier;
	CGSize _textureSizeInPixels;
	unsigned _maxParticles;
	unsigned* _particleIndices;
	ParticleQuad* _particleQuads;
	int _flowRotation;
	BOOL _flowMirrored;
	UIImage* _texture;
	NSString* _particleEmitterId;
	shared_ptr<folly::dynamic>* _jsonConfig;
	FBParticleEmitterAnimation _birthAnimation;
	FBParticleEmitterAnimation _deathAnimation;
	GLKMatrix4 _projectionMatrix;

}

@property (nonatomic,retain) UIImage * texture;                                      //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) GLKMatrix4 projectionMatrix;                            //@synthesize projectionMatrix=_projectionMatrix - In the implementation block
@property (assign,nonatomic) FBParticleEmitterAnimation birthAnimation;              //@synthesize birthAnimation=_birthAnimation - In the implementation block
@property (assign,nonatomic) FBParticleEmitterAnimation deathAnimation;              //@synthesize deathAnimation=_deathAnimation - In the implementation block
@property (nonatomic,copy) NSString * particleEmitterId;                             //@synthesize particleEmitterId=_particleEmitterId - In the implementation block
@property (assign,nonatomic) shared_ptr<folly::dynamic>* jsonConfig;                 //@synthesize jsonConfig=_jsonConfig - In the implementation block
+(id)nonTransparentPixelsFromRGBAImage:(id)arg1 inBounds:(CGRect)arg2 ;
+(CGPathRef)createPathForString:(id)arg1 ;
-(void)buildModifiersWithInputs:(FBPlatformInputs*)arg1 ;
-(void)_setupParticleArrays;
-(void)setAnimation:(FBParticleEmitterAnimation)arg1 type:(id)arg2 ;
-(id)initWithConfig:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg1 flowConfigBytes:(vector<unsigned char, std::__1::allocator<unsigned char> >*)arg2 flowCalculator:(shared_ptr<facebook::particleemitter::OpticalFlowCalculator>*)arg3 shader:(id)arg4 ;
-(Config*)mutableConfig;
-(void)setBirthAnimation:(FBParticleEmitterAnimation)arg1 ;
-(void)setDeathAnimation:(FBParticleEmitterAnimation)arg1 ;
-(void)setParticleEmitterId:(NSString *)arg1 ;
-(void)setJsonConfig:(shared_ptr<folly::dynamic>*)arg1 ;
-(shared_ptr<folly::dynamic>*)jsonConfig;
-(void)addModifier:(shared_ptr<facebook::particleemitter::EmitterModifier>*)arg1 ;
-(NSString *)particleEmitterId;
-(FBParticleEmitterAnimation)birthAnimation;
-(FBParticleEmitterAnimation)deathAnimation;
-(void)dealloc;
-(void)setProjectionMatrix:(GLKMatrix4)arg1 ;
-(UIImage *)texture;
-(void)setTexture:(UIImage *)arg1 ;
-(GLKMatrix4)projectionMatrix;
-(shared_ptr<facebook::particleemitter::DynamicEmitter>*)emitter;
-(void)render:(CGSize)arg1 ;
@end

