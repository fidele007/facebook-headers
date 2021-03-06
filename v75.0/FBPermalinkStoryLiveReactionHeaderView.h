/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBNetworkImageViewDelegate.h>
#import <Facebook/CAAnimationDelegate.h>

@class FBUserSession, UILabel, FBNetworkImageView, UIImageView, FBFourRoundedCornerView, FBMemFeedback, NSString;

@interface FBPermalinkStoryLiveReactionHeaderView : UIView <FBNetworkImageViewDelegate, CAAnimationDelegate> {

	FBUserSession* _session;
	UILabel* _socialSentenceView;
	FBNetworkImageView* _profileImageView;
	UIImageView* _reactionsImageView;
	UIImageView* _borderView;
	FBFourRoundedCornerView* _profileImageRoundedCornersView;
	UILabel* _authorNameView;
	UILabel* _feedbackSummaryView;
	FBMemFeedback* _feedback;
	BOOL _shouldShowLiveReaction;
	BOOL _isShowingLiveReaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkImageViewDidLoadImage:(id)arg1 ;
-(void)_showAnimated;
-(void)_hideAnimated;
-(id)initWithStory:(id)arg1 imageDownloader:(id)arg2 session:(id)arg3 ;
-(void)updateFeedbackSummaryWithFeedback:(id)arg1 ;
-(void)setReactionWithKey:(long long)arg1 reactionDataProvider:(id)arg2 actor:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

