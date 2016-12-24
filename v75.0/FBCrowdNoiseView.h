/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBCrowdNoiseDiffuserDelegate.h>

@protocol FBCrowdNoiseStrategy;
@class FBUserSession, FBCrowdNoiseDiffuser, UIView, NSString;

@interface FBCrowdNoiseView : UIView <FBCrowdNoiseDiffuserDelegate> {

	FBUserSession* _session;
	id<FBCrowdNoiseStrategy> _strategy;
	FBCrowdNoiseDiffuser* _particleDiffuser;
	unsigned long long _numWindParticles;
	UIView* _windZone;
	UIView* _fireworksZone;
	unsigned long long _largestKnownDelta;
	BOOL _useEdgeToEdgeDesign;
	double _fireworksZoneMaxY;

}

@property (assign,nonatomic) double fireworksZoneMaxY;              //@synthesize fireworksZoneMaxY=_fireworksZoneMaxY - In the implementation block
@property (assign,nonatomic) BOOL useEdgeToEdgeDesign;              //@synthesize useEdgeToEdgeDesign=_useEdgeToEdgeDesign - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightOverlapVideo:(CGSize)arg1 ;
+(double)heightBelowVideo:(CGSize)arg1 ;
+(double)_windHeightCoverVideo:(CGSize)arg1 ;
+(double)_fireworkHeightCoverVideo:(CGSize)arg1 ;
+(double)_aspectRatioContinuum:(CGSize)arg1 ;
-(void)setFireworksZoneMaxY:(double)arg1 ;
-(void)setUseEdgeToEdgeDesign:(BOOL)arg1 ;
-(BOOL)useEdgeToEdgeDesign;
-(void)crowdNoiseDiffuser:(id)arg1 deliveredDelta:(id)arg2 ;
-(void)reduceMemoryUsage;
-(double)fireworksZoneMaxY;
-(void)_showNormalDelta:(id)arg1 ;
-(void)_showNotableParticle:(id)arg1 ;
-(void)_beginSurfingReactionView:(id)arg1 ofType:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 strategy:(id)arg3 ;
-(void)addNormalDelta:(id)arg1 ;
-(void)addNotableParticleForIdentifier:(id)arg1 actorID:(id)arg2 ;
-(void)layoutSubviews;
@end

