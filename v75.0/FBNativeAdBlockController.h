/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnnotatedBlockController.h>
#import <Facebook/FBNativeAdPlaceholderNodeDelegate.h>
#import <Facebook/FBInlineAdHeaderNodeDelegate.h>
#import <Facebook/FBNativeAdShareContentNodeDelegate.h>
#import <Facebook/FBNativeArticleNativeAdDownloaderDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBPreloadableBlockController.h>
#import <Facebook/FBFocusableBlockController.h>
#import <Facebook/FBTransitioningBlockController.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBUserSession, FBRichStoryBlock, NSDictionary, FBRichStoryBlockDisplayContext, FBNativeAdPlaceholderNodeMetrics, FBNativeAdPlaceholderNode, ASControlNode, FBInlineAdHeaderNode, FBPopoverActionSheet, FBNativeArticleNativeAdDownloader, FBMemModelObject, FBNativeArticleNativeAdIntentHandler, UIAlertView, NSString, NSMutableDictionary;

@interface FBNativeAdBlockController : FBAnnotatedBlockController <FBNativeAdPlaceholderNodeDelegate, FBInlineAdHeaderNodeDelegate, FBNativeAdShareContentNodeDelegate, FBNativeArticleNativeAdDownloaderDelegate, FBPopoverControllerDelegate, UIAlertViewDelegate, FBPreloadableBlockController, FBFocusableBlockController, FBTransitioningBlockController> {

	FBUserSession* _session;
	FBRichStoryBlock* _storyBlock;
	NSDictionary* _presentationAttributes;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBNativeAdPlaceholderNodeMetrics* _metrics;
	FBNativeAdPlaceholderNode* _nativeAdPlaceholderNode;
	ASControlNode* _nativeAdContentNode;
	FBInlineAdHeaderNode* _sponsoredHeaderNode;
	FBPopoverActionSheet* _popoverActionSheet;
	FBNativeArticleNativeAdDownloader* _nativeAdDownloader;
	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _nativeAdObject;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	UIAlertView* _clickConfirmationAlertView;
	NSString* _articleID;
	NSMutableDictionary* _perfAnalyticsInfo;
	BOOL _adObjectLoaded;
	BOOL _needsToLoadAdObject;
	BOOL _adContentLoaded;
	BOOL _needsToLogImpression;
	BOOL _needsToFirePerfEvent;
	BOOL _adHidden;
	BOOL _isAdDropDownEnabled;
	BOOL _showConfirmationOnClick;
	BOOL _enableShareContentRedesign;
	BOOL _enableShareContentFullWidthRedesign;
	BOOL _shareContentRedesignDisableTapOnTitleSection;
	BOOL _enableShareContentRedesignWithTwoStep;
	BOOL _enableShareAdFullLengthBorderLineRedesign;
	BOOL _enableExpandableVideoRedesign;
	BOOL _enableExpandableVideoFullLengthBorderLineRedesign;
	BOOL _enableMultiShareAdUFI;
	BOOL _enableVideoAdUFI;
	BOOL _enableShareContentAdUFI;
	BOOL _enableSharesInUFI;
	BOOL _enablePhotoAdUFI;
	BOOL _enableShareContentBlockController;
	BOOL _enableCarouselRedesign;
	double _contentLoadingStartTime;
	mutex _asyncMutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)blockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
-(void)handleIntent:(id)arg1 ;
-(void)_dismissPopover;
-(void)didEnterPreloadViewport;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)blockRenderable;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(id)renderableForOverlayAnnotation:(id)arg1 withKey:(id)arg2 annotationController:(id)arg3 ;
-(id)eligiblePresentationAttributesFromTransitioningToPresentationAttributes:(id)arg1 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(CGRect)contentFrameForFramesetter:(id)arg1 ;
-(void)nativeAdDownloader:(id)arg1 didDownloadNativeAdObject:(id)arg2 downloadStartTime:(double)arg3 isCached:(BOOL)arg4 error:(id)arg5 ;
-(id)renderableForSponsoredHeaderAnnotationBlock:(id)arg1 ;
-(void)_explainAdUnit;
-(long long)_videoLoopingStyleForNativeAdObject:(id)arg1 ;
-(BOOL)needsToLogImpression;
-(BOOL)isAdObjectLoaded;
-(BOOL)isAdHidden;
-(void)setNeedsToLoadAdObject:(BOOL)arg1 ;
-(void)_replaceWithNativeAdShareContentPresentation;
-(void)_replaceWithNativeAdVideoPresentation;
-(void)_replaceWithNativeAdPhotoPresentation;
-(void)_replaceWithNativeAdMultiSharePresentation;
-(void)setAdObjectLoaded:(BOOL)arg1 ;
-(void)_updateLayoutForNewContentNodeIfNecessary;
-(void)setNeedsToLogImpression:(BOOL)arg1 ;
-(BOOL)needsToFirePerfEvent;
-(BOOL)isAdContentLoaded;
-(void)setNeedsToFirePerfEvent:(BOOL)arg1 ;
-(void)_cleanupNativeAdPerfAnalyticValues;
-(id)initWithStoryBlock:(id)arg1 metrics:(id)arg2 nativeAdDownloader:(id)arg3 presentationAttributes:(id)arg4 session:(id)arg5 displayContext:(id)arg6 ;
-(void)downloadNativeAdObjectWithShouldRenderImmediately:(BOOL)arg1 ;
-(void)_loadDownloadedNativeAdObjectIfNecessary;
-(void)_logNativeAdPerfAnalytics;
-(void)_presentClickConfirmationAlertView;
-(void)_handleTapOnAdContentAction;
-(void)_logNativeAdClickWithClickType:(unsigned long long)arg1 ;
-(void)setAdContentLoaded:(BOOL)arg1 ;
-(void)_updateLayoutForInvalidOrHiddenAd;
-(void)setAdHidden:(BOOL)arg1 ;
-(void)_logInvalidationForNativeAdObject:(id)arg1 ;
-(BOOL)needsToLoadAdObject;
-(void)didTapNativeAdContentBlockNode:(id)arg1 ;
-(void)nativeAdContentNode:(id)arg1 didTapContentNode:(id)arg2 ;
-(void)inlineAdHeaderNode:(id)arg1 didTapChevronButton:(id)arg2 ;
-(void)nativeAdContentNode:(id)arg1 contentImageNode:(id)arg2 didLoadImage:(id)arg3 ;
-(void)nativeAdContentNode:(id)arg1 didTapActionButton:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

