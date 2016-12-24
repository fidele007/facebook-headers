/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBackgroundDeallocatedObject.h>
#import <Facebook/PARichTextInteractionHandlerDelegate.h>
#import <Facebook/FBRichStoryBlockController.h>
#import <Facebook/FBFocusableBlockController.h>

@class NSMutableDictionary, FBAdornedTextContentNode, PARichTextInteractionHandler, FBUserSession, FBRichStoryTextBlock, FBRichStoryBlockDisplayContext, FBNABlockAnalyticsLogger, NSString, NSArray;

@interface FBRichStoryTextBlockController : FBBackgroundDeallocatedObject <PARichTextInteractionHandlerDelegate, FBRichStoryBlockController, FBFocusableBlockController> {

	NSMutableDictionary* _analyticsInfo;
	FBAdornedTextContentNode* _textNode;
	PARichTextInteractionHandler* _textInteractionHandler;
	FBUserSession* _session;
	FBRichStoryTextBlock* _textBlock;
	FBRichStoryBlockDisplayContext* _displayContext;
	BOOL _isDecorated;
	FBNABlockAnalyticsLogger* _analyticsLogger;

}

@property (nonatomic,readonly) FBNABlockAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * analyticsTrackingCodes; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)attributedStringFromTextBlock:(id)arg1 inDisplayContext:(id)arg2 ;
+(id)textAdornmentStringFromTextBlock:(id)arg1 inDisplayContext:(id)arg2 ;
-(id)analyticsModule;
-(void)handleIntent:(id)arg1 ;
-(id)analyticsExtras;
-(id)richStoryRenderable;
-(void)didEnterWorkingRange;
-(void)didExitWorkingRange;
-(id)initWithBlock:(id)arg1 session:(id)arg2 displayContext:(id)arg3 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(void)willBeginScrollingWithInteraction:(unsigned long long)arg1 ;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(NSArray *)analyticsTrackingCodes;
-(FBNABlockAnalyticsLogger *)analyticsLogger;
-(id)popoverPresentationViewForRichTextNode:(id)arg1 ;
-(void)textHandler:(id)arg1 copiedText:(id)arg2 ;
-(void)textHandler:(id)arg1 openedComposerForText:(id)arg2 ;
-(id)shareableAttachmentForText:(id)arg1 ;
-(void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 textRange:(NSRange)arg5 ;
-(void)textNode:(id)arg1 longPressedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 textRange:(NSRange)arg5 ;
-(BOOL)textNode:(id)arg1 shouldLongPressLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)_preloadInstantArticles;
@end
