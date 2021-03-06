/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExpandableBlockController.h>
#import <Facebook/FBCarouselNodeDelegate.h>

@class NSArray, NSMutableDictionary, FBRichStoryBlockControllerRegistry, FBCarouselNode, FBTransitionFrameSetter, NSString;

@interface FBCarouselBlockController : FBExpandableBlockController <FBCarouselNodeDelegate> {

	NSArray* _childBlocks;
	NSMutableDictionary* _childBlockControllers;
	FBRichStoryBlockControllerRegistry* _registry;
	BOOL _isPagingStyle;
	BOOL _isArrowStyle;
	FBCarouselNode* _carouselNode;
	FBTransitionFrameSetter* _transitionFrameSetter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
+(id)_mediaLayoutForDisplayContext:(id)arg1 ;
+(BOOL)_shouldMediaBlockOpenAspectFit:(id)arg1 albumPresentationAttributes:(id)arg2 displayContext:(id)arg3 ;
+(id)blockRenderableLayoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(id)verticalPositionsForPresentationAttributes:(id)arg1 ;
+(id)_orderedMediaBlocksFromAlbumBlock:(id)arg1 displayContext:(id)arg2 ;
+(id)_mediaElementPresentationAttributesFromAlbumAttributes:(id)arg1 ;
+(BOOL)shouldPageForPresentationAttributes:(id)arg1 ;
+(BOOL)shouldShowArrowForPresentationAttributes:(id)arg1 ;
-(void)didEnterPreloadViewport;
-(BOOL)blockCanRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)blockRenderable;
-(void)didGainInteractiveFocus;
-(void)didLoseInteractiveFocus;
-(void)didEnterWorkingRange;
-(void)didExitWorkingRange;
-(id)initWithBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)didLoseCentermostFocus;
-(void)willExpandWithAnimationConfiguration:(SCD_Struct_FB196)arg1 ;
-(void)willCollapseWithAnimationConfiguration:(SCD_Struct_FB196)arg1 ;
-(void)didBeginTransitionToPresentationAttributes:(id)arg1 withGestureAtPoint:(CGPoint)arg2 originLayout:(id)arg3 destinationLayout:(id)arg4 ;
-(void)didUpdateTransitionToPresentationAttributes:(id)arg1 withProgress:(double)arg2 ;
-(void)willFinishTransitionToPresentationAttributes:(id)arg1 animationConfiguration:(SCD_Struct_FB196)arg2 ;
-(void)didFinishTransitionToPresentationAttributes:(id)arg1 withResultingLayout:(id)arg2 ;
-(void)didReceiveFocusWithInteraction:(unsigned long long)arg1 ;
-(void)didLoseFocusWithInteraction:(unsigned long long)arg1 ;
-(void)willBeginScrollingWithInteraction:(unsigned long long)arg1 ;
-(CGPoint)contentAnchorPoint;
-(void)didExitPreloadViewport;
-(void)didBeginExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(id)_currentlyFeaturedBlockController;
-(void)didUpdateExpansionInteractionAtPoint:(CGPoint)arg1 ;
-(void)didTapCarouselNode:(id)arg1 ;
-(void)carouselNode:(id)arg1 didAddElementForElementID:(id)arg2 ;
-(void)carouselNode:(id)arg1 didRemoveElementForElementID:(id)arg2 ;
-(BOOL)carouselNode:(id)arg1 elementForElementIDCanRespondToTap:(id)arg2 ;
-(void)carouselNode:(id)arg1 didFeatureElementForElementID:(id)arg2 ;
-(void)carouselNode:(id)arg1 didStopFeaturingElementForElementID:(id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
@end

