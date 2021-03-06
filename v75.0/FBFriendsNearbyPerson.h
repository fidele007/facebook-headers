/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemPerson, NSAttributedString, NSString;

@interface FBFriendsNearbyPerson : NSObject {

	BOOL _waveEligibleWithViewer;
	BOOL _hasReceivedWaveFromViewer;
	BOOL _hasSentWaveToViewer;
	FBMemPerson* _person;
	NSAttributedString* _metaContext;
	NSAttributedString* _nearbyContext;
	NSString* _checkinContext;
	long long _state;

}

@property (nonatomic,retain) FBMemPerson * person;                          //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) long long state;                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL waveEligibleWithViewer;                   //@synthesize waveEligibleWithViewer=_waveEligibleWithViewer - In the implementation block
@property (nonatomic,copy) NSAttributedString * metaContext;                //@synthesize metaContext=_metaContext - In the implementation block
@property (nonatomic,copy) NSAttributedString * nearbyContext;              //@synthesize nearbyContext=_nearbyContext - In the implementation block
@property (nonatomic,copy) NSString * checkinContext;                       //@synthesize checkinContext=_checkinContext - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedWaveFromViewer;                //@synthesize hasReceivedWaveFromViewer=_hasReceivedWaveFromViewer - In the implementation block
@property (assign,nonatomic) BOOL hasSentWaveToViewer;                      //@synthesize hasSentWaveToViewer=_hasSentWaveToViewer - In the implementation block
+(id)createFriendsNearbyPersonWithContactSetItem:(id)arg1 person:(id)arg2 ;
+(id)createFriendsNearbyPersonWithPerson:(id)arg1 nearbyContext:(id)arg2 metaContext:(id)arg3 checkinContext:(id)arg4 state:(long long)arg5 ;
+(long long)_parseLocationStateContext:(id)arg1 ;
-(void)setCheckinContext:(NSString *)arg1 ;
-(void)setWaveEligibleWithViewer:(BOOL)arg1 ;
-(void)setHasSentWaveToViewer:(BOOL)arg1 ;
-(NSString *)checkinContext;
-(NSAttributedString *)nearbyContext;
-(NSAttributedString *)metaContext;
-(void)setHasReceivedWaveFromViewer:(BOOL)arg1 ;
-(BOOL)hasReceivedWaveFromViewer;
-(BOOL)hasSentWaveToViewer;
-(void)setMetaContext:(NSAttributedString *)arg1 ;
-(BOOL)waveEligibleWithViewer;
-(void)setNearbyContext:(NSAttributedString *)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setPerson:(FBMemPerson *)arg1 ;
-(FBMemPerson *)person;
@end

