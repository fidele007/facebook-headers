/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface TODOFBComposerMinutiaeStickerExperimentContext : FBExperimentContext {

	NSString* _minutiaeActivityNux;
	BOOL _showStickers;
	NSString* _minutiaeStickerNux;
	BOOL _useNewTabDesign;
	BOOL _showNuxInComposer;
	BOOL _splitActivitiesEnabled;
	BOOL _showNewMinutiaeUi;
	BOOL _showStickersAsFirstTab;
	BOOL _allowStickerSearch;

}

@property (nonatomic,copy) NSString * minutiaeActivityNux;              //@synthesize minutiaeActivityNux=_minutiaeActivityNux - In the implementation block
@property (assign,nonatomic) BOOL showStickers;                         //@synthesize showStickers=_showStickers - In the implementation block
@property (nonatomic,copy) NSString * minutiaeStickerNux;               //@synthesize minutiaeStickerNux=_minutiaeStickerNux - In the implementation block
@property (assign,nonatomic) BOOL useNewTabDesign;                      //@synthesize useNewTabDesign=_useNewTabDesign - In the implementation block
@property (assign,nonatomic) BOOL showNuxInComposer;                    //@synthesize showNuxInComposer=_showNuxInComposer - In the implementation block
@property (assign,nonatomic) BOOL splitActivitiesEnabled;               //@synthesize splitActivitiesEnabled=_splitActivitiesEnabled - In the implementation block
@property (assign,nonatomic) BOOL showNewMinutiaeUi;                    //@synthesize showNewMinutiaeUi=_showNewMinutiaeUi - In the implementation block
@property (assign,nonatomic) BOOL showStickersAsFirstTab;               //@synthesize showStickersAsFirstTab=_showStickersAsFirstTab - In the implementation block
@property (assign,nonatomic) BOOL allowStickerSearch;                   //@synthesize allowStickerSearch=_allowStickerSearch - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)allowStickerSearch;
-(NSString *)minutiaeActivityNux;
-(NSString *)minutiaeStickerNux;
-(BOOL)showNewMinutiaeUi;
-(BOOL)showNuxInComposer;
-(BOOL)showStickers;
-(BOOL)showStickersAsFirstTab;
-(BOOL)splitActivitiesEnabled;
-(BOOL)useNewTabDesign;
-(void)setMinutiaeActivityNux:(NSString *)arg1 ;
-(void)setShowStickers:(BOOL)arg1 ;
-(void)setMinutiaeStickerNux:(NSString *)arg1 ;
-(void)setUseNewTabDesign:(BOOL)arg1 ;
-(void)setShowNuxInComposer:(BOOL)arg1 ;
-(void)setSplitActivitiesEnabled:(BOOL)arg1 ;
-(void)setShowNewMinutiaeUi:(BOOL)arg1 ;
-(void)setShowStickersAsFirstTab:(BOOL)arg1 ;
-(void)setAllowStickerSearch:(BOOL)arg1 ;
@end

