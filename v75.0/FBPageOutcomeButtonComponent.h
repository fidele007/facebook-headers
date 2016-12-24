/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBFeedToolbox, FBMemPageOutcomeButton, NSString, FBPageCTALogger;

@interface FBPageOutcomeButtonComponent : CKCompositeComponent {

	FBFeedToolbox* _toolbox;
	FBMemPageOutcomeButton* _pageOutcomeButton;
	NSString* _ctaType;
	NSString* _ctaURL;
	NSString* _pageName;
	NSString* _pageID;
	NSString* _storyID;
	FBPageCTALogger* _ctaLogger;

}

@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                 //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemPageOutcomeButton * pageOutcomeButton;              //@synthesize pageOutcomeButton=_pageOutcomeButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaType;                                 //@synthesize ctaType=_ctaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaURL;                                  //@synthesize ctaURL=_ctaURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageID;                                  //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyID;                                 //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,readonly) FBPageCTALogger * ctaLogger;                             //@synthesize ctaLogger=_ctaLogger - In the implementation block
+(id)newWithStory:(id)arg1 toolbox:(id)arg2 ;
-(FBFeedToolbox *)toolbox;
-(NSString *)storyID;
-(NSString *)ctaType;
-(NSString *)pageName;
-(FBMemPageOutcomeButton *)pageOutcomeButton;
-(NSString *)ctaURL;
-(FBPageCTALogger *)ctaLogger;
-(NSString *)pageID;
@end

