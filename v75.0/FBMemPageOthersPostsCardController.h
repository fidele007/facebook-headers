/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBPublishingCompletionEventListener.h>
#import <Facebook/FBPagePublisherBarDelegate.h>
#import <Facebook/FBMemPageOthersPostsCardCellDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@class FBMemPageTimelineViewController, FBPublishingCompletionEventForwarder, FBPageOthersPostsViewModel, FBMemPageOthersPostsCardCell, NSString;

@interface FBMemPageOthersPostsCardController : FBMemPageCardController <FBComposerFlowDelegate, FBPublishingCompletionEventListener, FBPagePublisherBarDelegate, FBMemPageOthersPostsCardCellDelegate, FBCardViewProvider> {

	FBMemPageTimelineViewController* _othersPostsTimelineVC;
	FBPublishingCompletionEventForwarder* _publishingEventForwarder;
	FBPageOthersPostsViewModel* _viewModel;
	FBMemPageOthersPostsCardCell* _cardCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)configureWithPage:(id)arg1 ;
-(void)writePostTapped:(id)arg1 ;
-(void)sharePhotoTapped:(id)arg1 ;
-(void)messageTapped:(id)arg1 ;
-(void)startTrackingPublicationWithIdentifier:(id)arg1 ;
-(void)cleanUpPublicationHandling;
-(void)publicationCompletedThroughTerminalFailureOfPublication:(id)arg1 withError:(id)arg2 ;
-(void)publicationCompletedThroughSuccessOfPublication:(id)arg1 withResponse:(id)arg2 ;
-(void)publicationCompletedThroughCancellationOfPublication:(id)arg1 ;
-(void)cellHeightChanged;
-(void)showOthersPostsTimeline;
-(void)messageToPage;
-(void)_openComposerWithTraits:(id)arg1 startingStyleContext:(id)arg2 entryPointAnalyticsContext:(id)arg3 ;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end

