/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNASharingOptionControlling.h>

@class FBNativeArticleComposerPresenter, NSString, FBUserSession, FBComposerPrivacySetting;

@interface FBNASharingOptionShareNowController : NSObject <FBNASharingOptionControlling> {

	FBNativeArticleComposerPresenter* _composerPresenter;
	NSString* _analyticsSource;
	NSString* _contentOrigin;
	FBUserSession* _session;
	FBComposerPrivacySetting* _privacySetting;

}

@property (nonatomic,readonly) FBComposerPrivacySetting * privacySetting;                         //@synthesize privacySetting=_privacySetting - In the implementation block
@property (nonatomic,readonly) FBNativeArticleComposerPresenter * composerPresenter;              //@synthesize composerPresenter=_composerPresenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsSource;                                   //@synthesize analyticsSource=_analyticsSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentOrigin;                                     //@synthesize contentOrigin=_contentOrigin - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                           //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * actionTitle; 
@property (nonatomic,copy,readonly) NSString * actionDescription; 
@property (nonatomic,readonly) unsigned long long actionGlyphName; 
@property (nonatomic,copy,readonly) NSString * analyticsShareType; 
-(unsigned long long)actionGlyphName;
-(NSString *)contentOrigin;
-(id)prepareActionWithShareable:(id)arg1 ;
-(id)initWithComposerPresenter:(id)arg1 analyticsSource:(id)arg2 contentOrigin:(id)arg3 session:(id)arg4 ;
-(NSString *)actionDescription;
-(BOOL)canPerformActionWithShareable:(id)arg1 ;
-(id)performActionWithShareable:(id)arg1 ;
-(NSString *)analyticsShareType;
-(FBNativeArticleComposerPresenter *)composerPresenter;
-(NSString *)analyticsSource;
-(id)_fetchComposerPrivacySetting;
-(FBComposerPrivacySetting *)privacySetting;
-(void)setPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
-(FBUserSession *)session;
-(NSString *)actionTitle;
@end
