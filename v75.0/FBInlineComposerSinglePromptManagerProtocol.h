/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBInlineComposerPromptSession, FBInlineComposerPrompt;


@protocol FBInlineComposerSinglePromptManagerProtocol <FBInlineComposerPromptsInteractionManager>
@property (assign,nonatomic,__weak) id<FBInlineComposerSinglePromptManagerDelegate> delegate; 
@property (nonatomic,readonly) FBInlineComposerPromptSession * currentPromptSession; 
@property (nonatomic,readonly) FBInlineComposerPrompt * currentPrompt; 
@property (nonatomic,readonly) id<FBInlineComposerPromptsManagerProtocol> promptsManager; 
@optional
-(void)forceReloadPromptsWithCompletion:(/*^block*/id)arg1;

@required
-(void)reloadPromptsWithCompletion:(/*^block*/id)arg1;
-(FBInlineComposerPromptSession *)currentPromptSession;
-(FBInlineComposerPrompt *)currentPrompt;
-(id<FBInlineComposerPromptsManagerProtocol>)promptsManager;
-(void)setDelegate:(id)arg1;
-(id<FBInlineComposerSinglePromptManagerDelegate>)delegate;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;

@end

