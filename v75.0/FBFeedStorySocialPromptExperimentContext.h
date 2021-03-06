/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBFeedStorySocialPromptExperimentContext : FBExperimentContext {

	NSString* _buttonTitleInsideAttachment;
	NSString* _buttonTitleUnderFeedStory;
	BOOL _promptUnderSocialPromptStory;
	BOOL _showAfterInteraction;

}

@property (nonatomic,copy) NSString * buttonTitleInsideAttachment;              //@synthesize buttonTitleInsideAttachment=_buttonTitleInsideAttachment - In the implementation block
@property (nonatomic,copy) NSString * buttonTitleUnderFeedStory;                //@synthesize buttonTitleUnderFeedStory=_buttonTitleUnderFeedStory - In the implementation block
@property (assign,nonatomic) BOOL promptUnderSocialPromptStory;                 //@synthesize promptUnderSocialPromptStory=_promptUnderSocialPromptStory - In the implementation block
@property (assign,nonatomic) BOOL showAfterInteraction;                         //@synthesize showAfterInteraction=_showAfterInteraction - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)buttonTitleInsideAttachment;
-(NSString *)buttonTitleUnderFeedStory;
-(BOOL)showAfterInteraction;
-(void)setButtonTitleInsideAttachment:(NSString *)arg1 ;
-(void)setShowAfterInteraction:(BOOL)arg1 ;
-(void)setButtonTitleUnderFeedStory:(NSString *)arg1 ;
-(BOOL)promptUnderSocialPromptStory;
-(void)setPromptUnderSocialPromptStory:(BOOL)arg1 ;
@end

