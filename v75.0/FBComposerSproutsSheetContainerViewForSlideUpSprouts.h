/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBComposerSproutsSheetScrollViewDelegate.h>

@protocol FBComposerSproutControlEventsListener;
@class UIView, FBComposerSproutsSheetScrollView, CKComponentHostingView, NSString;

@interface FBComposerSproutsSheetContainerViewForSlideUpSprouts : UIView <FBComposerSproutsSheetScrollViewDelegate> {

	UIView* _backgroundTapGestureRecognizerView;
	id<FBComposerSproutControlEventsListener> _controlEventsListener;
	UIView* _opaqueView;
	FBComposerSproutsSheetScrollView* _scrollView;
	CKComponentHostingView* _sproutSheetHostingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)scrollViewAnimator;
-(id)initWithSproutSheetHostingView:(id)arg1 opaqueView:(id)arg2 controlEventsListener:(id)arg3 ;
-(void)_dismissSprout;
-(void)setSproutSheet:(id)arg1 ;
-(void)didScrollToProgress:(double)arg1 ;
-(void)willEndDraggedToProgress:(double)arg1 ;
@end
