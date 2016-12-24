/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCrowdNoiseStrategy <NSObject>
@property (nonatomic,readonly) id<FBCrowdNoiseModel> model; 
@property (nonatomic,readonly) double viewMinInitialVelocityNormal; 
@property (nonatomic,readonly) double viewMaxInitialVelocityNormal; 
@property (nonatomic,readonly) double viewMinInitialVelocityNotable; 
@property (nonatomic,readonly) double viewMaxInitialVelocityNotable; 
@property (nonatomic,readonly) double viewAccelerationNormal; 
@property (nonatomic,readonly) double viewAccelerationNotable; 
@property (nonatomic,readonly) double viewNotableTimeReachFullAmplitude; 
@property (nonatomic,readonly) double viewNotableAssimilationScreenPercent; 
@property (nonatomic,readonly) double viewEndZoneFinalScale; 
@property (nonatomic,readonly) double viewEndZoneScreenPercent; 
@property (nonatomic,readonly) double viewMinWavelength; 
@property (nonatomic,readonly) double viewMaxWavelength; 
@property (nonatomic,readonly) double viewMinAmplitude; 
@property (nonatomic,readonly) double viewMaxAmplitude; 
@property (nonatomic,readonly) unsigned long long viewEquilibriumVisibleWind; 
@property (nonatomic,readonly) double viewFireworkZoneWidthScreenPercent; 
@property (nonatomic,readonly) unsigned long long viewWindKeyFrames; 
@property (nonatomic,readonly) unsigned long long viewDiffuserCapacity; 
@property (nonatomic,readonly) double viewDiffuserPeriod; 
@property (nonatomic,readonly) unsigned long long viewStartingLargestKnownDelta; 
@property (nonatomic,readonly) double controllerMinSubmissionPeriod; 
@property (nonatomic,readonly) double controllerDeltaFlushPeriod; 
@property (nonatomic,readonly) float controllerDropInsignificantDeltaPercentThreshold; 
@required
-(double)controllerDeltaFlushPeriod;
-(float)controllerDropInsignificantDeltaPercentThreshold;
-(double)controllerMinSubmissionPeriod;
-(double)viewAccelerationNotable;
-(unsigned long long)viewDiffuserCapacity;
-(double)viewDiffuserPeriod;
-(double)viewEndZoneScreenPercent;
-(double)viewFireworkZoneWidthScreenPercent;
-(double)viewMaxAmplitude;
-(double)viewMaxInitialVelocityNotable;
-(double)viewMaxWavelength;
-(double)viewMinAmplitude;
-(double)viewMinInitialVelocityNotable;
-(double)viewMinWavelength;
-(double)viewNotableAssimilationScreenPercent;
-(double)viewNotableTimeReachFullAmplitude;
-(unsigned long long)viewStartingLargestKnownDelta;
-(unsigned long long)viewWindKeyFrames;
-(void)generateParticleViewForIdentifier:(id)arg1 completion:(/*^block*/id)arg2;
-(id)notableColorForIdentifier:(id)arg1;
-(double)windHeightForViewSize:(CGSize)arg1;
-(double)particleMinInitialSizeForView:(id)arg1;
-(double)particleMaxInitialSizeForView:(id)arg1;
-(double)particleInitialNotableSizeForView:(id)arg1;
-(double)viewMinInitialVelocityNormal;
-(double)viewMaxInitialVelocityNormal;
-(double)viewAccelerationNormal;
-(double)viewEndZoneFinalScale;
-(unsigned long long)viewEquilibriumVisibleWind;
-(id<FBCrowdNoiseModel>)model;

@end
