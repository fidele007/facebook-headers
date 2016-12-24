/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray, NSDictionary;

@interface FBStorylineVideoDataBundle : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldAutoplay;
	NSString* _launchSurface;
	NSArray* _assets;
	NSArray* _collaborators;
	NSString* _title;
	NSArray* _moodsConfiguration;
	NSDictionary* _musicData;
	NSString* _selectedMoodKey;
	NSString* _sessionID;
	NSString* _defaultMoodID;
	NSDictionary* _moodAssets;
	NSString* _moodType;

}

@property (nonatomic,copy,readonly) NSString * launchSurface;                  //@synthesize launchSurface=_launchSurface - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                          //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * collaborators;                   //@synthesize collaborators=_collaborators - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moodsConfiguration;              //@synthesize moodsConfiguration=_moodsConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * musicData;                  //@synthesize musicData=_musicData - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedMoodKey;                //@synthesize selectedMoodKey=_selectedMoodKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultMoodID;                  //@synthesize defaultMoodID=_defaultMoodID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * moodAssets;                 //@synthesize moodAssets=_moodAssets - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoplay;                            //@synthesize shouldAutoplay=_shouldAutoplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * moodType;                       //@synthesize moodType=_moodType - In the implementation block
-(NSString *)defaultMoodID;
-(NSArray *)moodsConfiguration;
-(id)initWithLaunchSurface:(id)arg1 assets:(id)arg2 collaborators:(id)arg3 title:(id)arg4 moodsConfiguration:(id)arg5 musicData:(id)arg6 selectedMoodKey:(id)arg7 sessionID:(id)arg8 defaultMoodID:(id)arg9 moodAssets:(id)arg10 shouldAutoplay:(BOOL)arg11 moodType:(id)arg12 ;
-(NSString *)moodType;
-(NSDictionary *)musicData;
-(NSArray *)collaborators;
-(NSString *)launchSurface;
-(NSDictionary *)moodAssets;
-(NSString *)selectedMoodKey;
-(NSString *)title;
-(NSString *)sessionID;
-(BOOL)shouldAutoplay;
-(NSArray *)assets;
@end

