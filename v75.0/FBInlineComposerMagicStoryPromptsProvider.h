/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInlineComposerPromptsProvider.h>

@class FBInlineComposerPromptsProviderListenerAnnouncer, FBUserSession, NSArray, NSString;

@interface FBInlineComposerMagicStoryPromptsProvider : NSObject <FBInlineComposerPromptsProvider> {

	FBInlineComposerPromptsProviderListenerAnnouncer* _announcer;
	FBUserSession* _session;
	/*^block*/id _completion;
	NSArray* _currentPrompts;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * currentPrompts;              //@synthesize currentPrompts=_currentPrompts - In the implementation block
-(void)didClosePrompt:(id)arg1 closeReason:(long long)arg2 ;
-(void)reloadPromptsWithCompletion:(/*^block*/id)arg1 ;
-(id)currentPrompt;
-(void)inlineComposerImpression:(id)arg1 ;
-(void)didHidePrompt:(id)arg1 hideReason:(long long)arg2 ;
-(NSArray *)currentPrompts;
-(void)magicStoryCollectionIndexDidUpdate:(id)arg1 ;
-(void)dealloc;
-(void)_reloadData;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

