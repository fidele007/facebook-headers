/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFXGridMeshEffect.h>

@interface FBFXSuckEffect : FBFXGridMeshEffect {

	float _time;
	double _swirl;
	double _duration;
	CGPoint _sink;

}

@property (assign,nonatomic) CGPoint sink;                 //@synthesize sink=_sink - In the implementation block
@property (assign,nonatomic) double swirl;                 //@synthesize swirl=_swirl - In the implementation block
@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(void)animate:(float)arg1 finished:(BOOL*)arg2 ;
-(void)configureVertex:(FBFXGeometryEffectVertex*)arg1 forNormalizedPoint:(CGPoint)arg2 withRect:(CGRect)arg3 texCoordExtent:(TexCoordExtent)arg4 ;
-(void)setSink:(CGPoint)arg1 ;
-(double)swirl;
-(void)setSwirl:(double)arg1 ;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(CGPoint)sink;
@end

