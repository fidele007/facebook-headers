/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBFeedInlineComposerControllerComponentsDelegate.h>

@protocol FBFeedInlineComposerControllerDelegate, FBFeedInlineComposerNuxHandler;
@class CKComponentHostingView, FBFeedInlineComposerControllerComponents, FBInlineComposerComponentToolbox, FBUserSession, NSString;

@interface FBFeedInlineComposerController : NSObject <CKComponentHostingViewDelegate, FBFeedInlineComposerControllerComponentsDelegate> {

	CKComponentHostingView* _composerHostingView;
	FBFeedInlineComposerControllerComponents* _inlineComposerControllerComponents;
	id<FBFeedInlineComposerControllerDelegate> _delegate;
	FBInlineComposerComponentToolbox* _toolbox;
	id<FBFeedInlineComposerNuxHandler> _nuxHandler;
	double _heightForComposerView;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)_updateModel:(id)arg1 ;
-(id)initWithSession:(id)arg1 fillerText:(id)arg2 viewerFBID:(id)arg3 publisherBarConfig:(id)arg4 toolbox:(id)arg5 delegate:(id)arg6 cardOptions:(FBInlineComposerCardOptions)arg7 nuxHandler:(id)arg8 options:(FBInlineComposerOptions)arg9 ;
-(id)composerView;
-(double)heightForComposerViewForWidth:(double)arg1 ;
-(void)registerPromptsManager:(id)arg1 ;
-(void)updateInlineComposerConfigurationWithFillerText:(id)arg1 publisherBarButtonTypes:(id)arg2 ;
-(void)inlineComposerNeedsReload:(id)arg1 ;
-(BOOL)inlineComposerCanReload:(id)arg1 ;
-(BOOL)inlineComposerIsVisible:(id)arg1 ;
-(void)inlineComposer:(id)arg1 didUpdatePromptSession:(id)arg2 ;
-(void)inlineComposer:(id)arg1 toolboxDidUpdate:(id)arg2 ;
-(void)inlineComposer:(id)arg1 modelDidUpdate:(id)arg2 ;
-(id)composerComponents;
-(void)_updateToolbox:(id)arg1 ;
@end

