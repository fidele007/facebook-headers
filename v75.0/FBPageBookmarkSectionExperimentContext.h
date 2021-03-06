/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBPageBookmarkSectionExperimentContext : FBExperimentContext {

	NSString* _seeAllPageText;
	BOOL _showSeeAllPageRichBadging;
	BOOL _normalSeeAllPageStyle;
	BOOL _showSeeAllPageIcon;
	long long _pinnedPageCount;

}

@property (nonatomic,copy) NSString * seeAllPageText;                     //@synthesize seeAllPageText=_seeAllPageText - In the implementation block
@property (assign,nonatomic) BOOL showSeeAllPageRichBadging;              //@synthesize showSeeAllPageRichBadging=_showSeeAllPageRichBadging - In the implementation block
@property (assign,nonatomic) BOOL normalSeeAllPageStyle;                  //@synthesize normalSeeAllPageStyle=_normalSeeAllPageStyle - In the implementation block
@property (assign,nonatomic) BOOL showSeeAllPageIcon;                     //@synthesize showSeeAllPageIcon=_showSeeAllPageIcon - In the implementation block
@property (assign,nonatomic) long long pinnedPageCount;                   //@synthesize pinnedPageCount=_pinnedPageCount - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)normalSeeAllPageStyle;
-(long long)pinnedPageCount;
-(NSString *)seeAllPageText;
-(BOOL)showSeeAllPageIcon;
-(BOOL)showSeeAllPageRichBadging;
-(void)setSeeAllPageText:(NSString *)arg1 ;
-(void)setShowSeeAllPageRichBadging:(BOOL)arg1 ;
-(void)setNormalSeeAllPageStyle:(BOOL)arg1 ;
-(void)setShowSeeAllPageIcon:(BOOL)arg1 ;
-(void)setPinnedPageCount:(long long)arg1 ;
@end

