/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBInlineAdHeaderNodeDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBRichStoryBlockController.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBUserSession, FBRichStoryBlock, FBRichStoryBlockDisplayContext, FBMemModelObject, FBNativeArticleNativeAdIntentHandler, FBInlineAdHeaderNode, FBInlineAdHeaderNodeMetrics, FBNativeAdRedesignHeaderNode, FBNativeAdRedesignHeaderNodeMetrics, FBPopoverActionSheet, NSString;

@interface FBAnnotationNativeAdMediaHeaderBarController : NSObject <FBInlineAdHeaderNodeDelegate, FBPopoverControllerDelegate, FBRichStoryBlockController> {

	FBUserSession* _session;
	FBRichStoryBlock* _storyBlock;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _nativeAdObject;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	FBInlineAdHeaderNode* _headerNode;
	FBInlineAdHeaderNodeMetrics* _metrics;
	FBNativeAdRedesignHeaderNode* _redesignedHeaderNode;
	FBNativeAdRedesignHeaderNodeMetrics* _redesignedHeaderNodeMetrics;
	BOOL _isAdDropDownEnabled;
	BOOL _isHeaderRedesignEnabled;
	FBPopoverActionSheet* _popoverActionSheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)headerAnnotationWithNativeAdObject:(id)arg1 verticalPosition:(long long)arg2 ;
+(id)redesignedHeaderAnnotationWithNativeAdObject:(id)arg1 verticalPosition:(long long)arg2 ;
-(void)handleIntent:(id)arg1 ;
-(id)richStoryRenderable;
-(void)_dismissPopover;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)_explainAdUnit;
-(void)inlineAdHeaderNode:(id)arg1 didTapChevronButton:(id)arg2 ;
@end

