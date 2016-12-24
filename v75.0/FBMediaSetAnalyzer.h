/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaSetAnalyzer : NSObject {

	double* _aspectRatios;
	unsigned long long _count;
	unsigned long long* _frequencies;
	double _dominantAspectRatio;

}

@property (nonatomic,readonly) double dominantAspectRatio;              //@synthesize dominantAspectRatio=_dominantAspectRatio - In the implementation block
-(BOOL)mediaAtIndexShouldAspectFill:(unsigned long long)arg1 ;
-(void)_calculateFrequencies;
-(unsigned long long)_numAspectRatiosWithinEpsilonOf:(double)arg1 ;
-(BOOL)_aspectRatio:(double)arg1 isCloseToAspectRatio:(double)arg2 ;
-(double)dominantAspectRatio;
-(id)initWithAspectRatios:(id)arg1 ;
-(void)dealloc;
@end
