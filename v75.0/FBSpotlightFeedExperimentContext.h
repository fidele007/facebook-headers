/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBSpotlightFeedExperimentContext : FBExperimentContext {

	long long _feed0RenderingStyle;
	BOOL _swipeEnabled;
	BOOL _scrollAwayHeader;
	BOOL _enabled;
	BOOL _feed1ComposerEnabled;
	NSString* _feed0Title;
	BOOL _feed0ComposerEnabled;
	NSString* _feed1StyleKey;
	NSString* _nuxString;
	BOOL _gridTestEnabled;
	long long _feed1RenderingStyle;
	BOOL _prefetchEnabled;
	NSString* _feed0StyleKey;
	BOOL _badgesEnabled;
	NSString* _feed1Title;

}

@property (assign,nonatomic) long long feed0RenderingStyle;              //@synthesize feed0RenderingStyle=_feed0RenderingStyle - In the implementation block
@property (assign,nonatomic) BOOL swipeEnabled;                          //@synthesize swipeEnabled=_swipeEnabled - In the implementation block
@property (assign,nonatomic) BOOL scrollAwayHeader;                      //@synthesize scrollAwayHeader=_scrollAwayHeader - In the implementation block
@property (assign,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL feed1ComposerEnabled;                  //@synthesize feed1ComposerEnabled=_feed1ComposerEnabled - In the implementation block
@property (nonatomic,copy) NSString * feed0Title;                        //@synthesize feed0Title=_feed0Title - In the implementation block
@property (assign,nonatomic) BOOL feed0ComposerEnabled;                  //@synthesize feed0ComposerEnabled=_feed0ComposerEnabled - In the implementation block
@property (nonatomic,copy) NSString * feed1StyleKey;                     //@synthesize feed1StyleKey=_feed1StyleKey - In the implementation block
@property (nonatomic,copy) NSString * nuxString;                         //@synthesize nuxString=_nuxString - In the implementation block
@property (assign,nonatomic) BOOL gridTestEnabled;                       //@synthesize gridTestEnabled=_gridTestEnabled - In the implementation block
@property (assign,nonatomic) long long feed1RenderingStyle;              //@synthesize feed1RenderingStyle=_feed1RenderingStyle - In the implementation block
@property (assign,nonatomic) BOOL prefetchEnabled;                       //@synthesize prefetchEnabled=_prefetchEnabled - In the implementation block
@property (nonatomic,copy) NSString * feed0StyleKey;                     //@synthesize feed0StyleKey=_feed0StyleKey - In the implementation block
@property (assign,nonatomic) BOOL badgesEnabled;                         //@synthesize badgesEnabled=_badgesEnabled - In the implementation block
@property (nonatomic,copy) NSString * feed1Title;                        //@synthesize feed1Title=_feed1Title - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)badgesEnabled;
-(BOOL)feed0ComposerEnabled;
-(long long)feed0RenderingStyle;
-(NSString *)feed0StyleKey;
-(NSString *)feed0Title;
-(BOOL)feed1ComposerEnabled;
-(long long)feed1RenderingStyle;
-(NSString *)feed1StyleKey;
-(NSString *)feed1Title;
-(BOOL)gridTestEnabled;
-(NSString *)nuxString;
-(BOOL)prefetchEnabled;
-(BOOL)scrollAwayHeader;
-(BOOL)swipeEnabled;
-(void)setFeed0RenderingStyle:(long long)arg1 ;
-(void)setSwipeEnabled:(BOOL)arg1 ;
-(void)setScrollAwayHeader:(BOOL)arg1 ;
-(void)setFeed1ComposerEnabled:(BOOL)arg1 ;
-(void)setFeed0Title:(NSString *)arg1 ;
-(void)setFeed0ComposerEnabled:(BOOL)arg1 ;
-(void)setFeed1StyleKey:(NSString *)arg1 ;
-(void)setNuxString:(NSString *)arg1 ;
-(void)setGridTestEnabled:(BOOL)arg1 ;
-(void)setFeed1RenderingStyle:(long long)arg1 ;
-(void)setFeed0StyleKey:(NSString *)arg1 ;
-(void)setBadgesEnabled:(BOOL)arg1 ;
-(void)setFeed1Title:(NSString *)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setPrefetchEnabled:(BOOL)arg1 ;
@end

