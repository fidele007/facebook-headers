/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBUserSession, FBFNFacepileDialogueViewModel, UILabel, NSMutableArray, FBBubbleView;

@interface FBFNFacepileDialogueView : UIView {

	FBUserSession* _session;
	FBFNFacepileDialogueViewModel* _viewModel;
	UILabel* _friendsCountSummary;
	NSMutableArray* _facepile;
	FBBubbleView* _bubbleView;

}
-(void)_loadViews;
-(void)_layoutFacepileAndSumaryLabel;
-(void)_reconfigureAndLayoutBubbleWithWidth:(double)arg1 ;
-(void)_initiateFacepileArray;
-(void)setSessionAndViewModelWithDictionary:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

