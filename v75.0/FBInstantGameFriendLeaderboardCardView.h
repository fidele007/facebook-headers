/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBInstantGameFriendLeaderboardCardViewDelegate;
@class FBUserSession, FBInstantGameLeaderboardData, FBInstantGameFriendLeaderboardHeaderCell, NSArray, FBInstantGameRoundableCell, UIButton;

@interface FBInstantGameFriendLeaderboardCardView : UIView {

	FBUserSession* _session;
	FBInstantGameLeaderboardData* _leaderboardData;
	FBInstantGameFriendLeaderboardHeaderCell* _headerCell;
	NSArray* _leaderboardCells;
	FBInstantGameRoundableCell* _footerCell;
	UIButton* _playButton;
	id<FBInstantGameFriendLeaderboardCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBInstantGameFriendLeaderboardCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCellWithGestureRecognizer:(id)arg1 ;
-(void)_didTapPlayButton;
-(id)initWithSession:(id)arg1 leaderboardData:(id)arg2 ;
-(void)setDelegate:(id<FBInstantGameFriendLeaderboardCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBInstantGameFriendLeaderboardCardViewDelegate>)delegate;
@end

