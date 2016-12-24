/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBSavedButtonProminenceExperimentContext : FBExperimentContext {

	BOOL _saveOverlayButton;
	NSString* _saveButtonNuxText;
	NSString* _saveShareMenuButtonNuxText;
	BOOL _saveTopLevelButton;
	BOOL _saveInShareMenu;
	NSString* _saveTopLevelButtonNuxText;

}

@property (assign,nonatomic) BOOL saveOverlayButton;                           //@synthesize saveOverlayButton=_saveOverlayButton - In the implementation block
@property (nonatomic,copy) NSString * saveButtonNuxText;                       //@synthesize saveButtonNuxText=_saveButtonNuxText - In the implementation block
@property (nonatomic,copy) NSString * saveShareMenuButtonNuxText;              //@synthesize saveShareMenuButtonNuxText=_saveShareMenuButtonNuxText - In the implementation block
@property (assign,nonatomic) BOOL saveTopLevelButton;                          //@synthesize saveTopLevelButton=_saveTopLevelButton - In the implementation block
@property (assign,nonatomic) BOOL saveInShareMenu;                             //@synthesize saveInShareMenu=_saveInShareMenu - In the implementation block
@property (nonatomic,copy) NSString * saveTopLevelButtonNuxText;               //@synthesize saveTopLevelButtonNuxText=_saveTopLevelButtonNuxText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)saveButtonNuxText;
-(BOOL)saveInShareMenu;
-(BOOL)saveOverlayButton;
-(NSString *)saveShareMenuButtonNuxText;
-(BOOL)saveTopLevelButton;
-(NSString *)saveTopLevelButtonNuxText;
-(void)setSaveOverlayButton:(BOOL)arg1 ;
-(void)setSaveShareMenuButtonNuxText:(NSString *)arg1 ;
-(void)setSaveButtonNuxText:(NSString *)arg1 ;
-(void)setSaveTopLevelButton:(BOOL)arg1 ;
-(void)setSaveInShareMenu:(BOOL)arg1 ;
-(void)setSaveTopLevelButtonNuxText:(NSString *)arg1 ;
@end
