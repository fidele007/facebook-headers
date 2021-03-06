/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExpandableVideoBlockController.h>
#import <Facebook/FBNativeAdVideoCTAButtonNodeDelegate.h>

@protocol FBQueriedDocumentNativeAdBaseObjectFieldsProtocol;
@class FBUserSession, FBMemModelObject, FBRichStoryBlockDisplayContext, FBNativeArticleNativeAdIntentHandler, NSString, NSMutableDictionary, FBNativeAdVideoCTAButtonNode;

@interface FBNativeAdExpandableVideoBlockController : FBExpandableVideoBlockController <FBNativeAdVideoCTAButtonNodeDelegate> {

	FBUserSession* _session;
	FBMemModelObject*<FBQueriedDocumentNativeAdBaseObjectFieldsProtocol> _nativeAdObject;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBNativeArticleNativeAdIntentHandler* _intentHandler;
	NSString* _articleID;
	NSMutableDictionary* _perfAnalyticsInfo;
	double _adContentLoadingStartTime;
	BOOL _videoContentDisplayed;
	BOOL _needsToFirePerfEvent;
	mutex _asyncMutex;
	FBNativeAdVideoCTAButtonNode* _videoCTAButton;

}

@property (nonatomic,retain) FBNativeAdVideoCTAButtonNode * videoCTAButton;              //@synthesize videoCTAButton=_videoCTAButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)richStoryVideoEntityForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerClassesForAnnotationRegistry;
+(id)annotationDictionaryForBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)annotationDictionaryForExpandableBlock:(id)arg1 presentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)landscapeAnnotationsFromAnnotations:(id)arg1 ;
+(id)_perfAnalyticsInfoForPresentationAttributes:(id)arg1 ;
+(double)_adContentLoadingStartTimeForPresentationAttributes:(id)arg1 ;
+(BOOL)_needsToLogImpressionForPresentationAttributes:(id)arg1 ;
+(BOOL)_shouldEnableSponsoredHeaderForPresentationAttributes:(id)arg1 ;
+(id)richStoryVideoEntityForNativeAdObject:(id)arg1 ;
-(void)handleIntent:(id)arg1 ;
-(void)videoNodeDidDisplayPreviewImage:(id)arg1 ;
-(id)initWithBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 reachabilityAnnouncer:(id)arg5 videoLoggingDataProvider:(id)arg6 ;
-(id)interactiveMediaNodeController;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(id)renderableForOverlayAnnotation:(id)arg1 withKey:(id)arg2 annotationController:(id)arg3 ;
-(BOOL)wantsCentermostFocus;
-(void)didGainCentermostFocus;
-(void)didLoseCentermostFocus;
-(id)expandedOnlyAnnotations;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(BOOL)needsToFirePerfEvent;
-(void)setNeedsToFirePerfEvent:(BOOL)arg1 ;
-(void)_cleanupNativeAdPerfAnalyticValues;
-(void)_logNativeAdPerfAnalytics;
-(BOOL)isVideoContentDisplayed;
-(id)renderableForVideoCTAAnnotationBlock:(id)arg1 ;
-(void)setVideoContentDisplayed:(BOOL)arg1 ;
-(void)didTapVideoCTAButton:(id)arg1 ;
-(BOOL)shouldAlwaysMuteInlineVideos;
-(FBNativeAdVideoCTAButtonNode *)videoCTAButton;
-(void)setVideoCTAButton:(FBNativeAdVideoCTAButtonNode *)arg1 ;
@end

