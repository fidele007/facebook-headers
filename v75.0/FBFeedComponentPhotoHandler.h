/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedComponentPhotoHandlerProtocol.h>

@protocol FBFullScreenTransitionBoundsProvider;
@class FBFeedToolbox, FBFeedEventBus, FBMemFeedStory, FBMemStoryAttachment, NSArray, NSString;

@interface FBFeedComponentPhotoHandler : NSObject <FBFeedComponentPhotoHandlerProtocol> {

	BOOL _sponsored;
	FBFeedToolbox* _toolbox;
	FBFeedEventBus* _eventBus;
	FBMemFeedStory* _story;
	FBMemStoryAttachment* _attachment;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	id<FBFullScreenTransitionBoundsProvider> _contentBoundsViewProvider;

}

@property (nonatomic,copy) NSArray * trackingCodes;                                                                  //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy) NSArray * trackingNodes;                                                                  //@synthesize trackingNodes=_trackingNodes - In the implementation block
@property (assign,nonatomic,__weak) id<FBFullScreenTransitionBoundsProvider> contentBoundsViewProvider;              //@synthesize contentBoundsViewProvider=_contentBoundsViewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBMemFeedStory * story;                                                               //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBMemStoryAttachment * attachment;                                                    //@synthesize attachment=_attachment - In the implementation block
-(FBMemFeedStory *)story;
-(NSArray *)trackingCodes;
-(NSArray *)trackingNodes;
-(id)initWithToolbox:(id)arg1 trackingCodes:(id)arg2 trackingNodes:(id)arg3 attachment:(id)arg4 story:(id)arg5 sponsored:(BOOL)arg6 eventBus:(id)arg7 ;
-(void)openPhoto:(id)arg1 fromViewOrLayer:(id)arg2 photoViewProvider:(id)arg3 photoViewOverlayProvider:(id)arg4 openInTaggingMode:(BOOL)arg5 showInspirationHeader:(BOOL)arg6 scrollBackToFeedDismissalEnabled:(BOOL)arg7 ;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)openPhoto:(id)arg1 fromViewOrLayer:(id)arg2 ;
-(id)_viewForLayer:(id)arg1 ;
-(void)setContentBoundsViewProvider:(id<FBFullScreenTransitionBoundsProvider>)arg1 ;
-(BOOL)_customStoryHandlerWithAttachment:(id)arg1 photo:(id)arg2 ;
-(id)_photosConsumptionReferrerForPhoto:(id)arg1 layoutIdiom:(unsigned long long)arg2 userFBID:(id)arg3 ;
-(void)_openStoryAttachment:(id)arg1 photo:(id)arg2 referrer:(id)arg3 ;
-(id)_photoStoryIntentAnalyticsInfo;
-(void)openStory;
-(void)setTrackingNodes:(NSArray *)arg1 ;
-(id<FBFullScreenTransitionBoundsProvider>)contentBoundsViewProvider;
-(FBMemStoryAttachment *)attachment;
@end

