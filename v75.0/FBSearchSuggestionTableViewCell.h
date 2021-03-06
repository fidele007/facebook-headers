/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAttributedTextTableViewCell_DEPRECATED.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBSearchSuggestionTableViewCellProtocol.h>

@protocol FBSearchStyleConfig, FBSearchSuggestionProtocol, FBSearchSuggestionTableViewCellDelegate;
@class NSString, UIView, UITapGestureRecognizer, FBSearchTypeaheadActivityListenerAnnouncer, UIColor, FBUserSession, FBNetworkImageView, UIImageView;

@interface FBSearchSuggestionTableViewCell : FBAttributedTextTableViewCell_DEPRECATED <UIGestureRecognizerDelegate, FBSearchSuggestionTableViewCellProtocol> {

	NSString* _queryString;
	UIView* _actionView;
	id<FBSearchStyleConfig> _searchStyleConfig;
	UITapGestureRecognizer* _cellTapRecognizer;
	BOOL _centerVerifiedBadge;
	BOOL _isLastCellInSection;
	BOOL _showSeparator;
	BOOL _showGrammarIcon;
	BOOL _suggestionTextIsRTL;
	id<FBSearchSuggestionProtocol> _suggestion;
	FBSearchTypeaheadActivityListenerAnnouncer* _typeaheadActivityAnnouncer;
	unsigned long long _objectIndex;
	UIColor* _contentBackgroundColor;
	id<FBSearchSuggestionTableViewCellDelegate> _delegate;
	FBUserSession* _session;
	FBNetworkImageView* _networkThumbnailView;
	UIImageView* _staticThumbnailView;
	UIImageView* _verifiedBadgeView;
	UIImageView* _leaveAppView;
	UIImageView* _lineView;

}

@property (nonatomic,retain) FBUserSession * session;                                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * networkThumbnailView;                                            //@synthesize networkThumbnailView=_networkThumbnailView - In the implementation block
@property (nonatomic,retain) UIImageView * staticThumbnailView;                                                    //@synthesize staticThumbnailView=_staticThumbnailView - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedBadgeView;                                                      //@synthesize verifiedBadgeView=_verifiedBadgeView - In the implementation block
@property (nonatomic,retain) UIImageView * leaveAppView;                                                           //@synthesize leaveAppView=_leaveAppView - In the implementation block
@property (nonatomic,retain) UIImageView * lineView;                                                               //@synthesize lineView=_lineView - In the implementation block
@property (assign,nonatomic) BOOL suggestionTextIsRTL;                                                             //@synthesize suggestionTextIsRTL=_suggestionTextIsRTL - In the implementation block
@property (nonatomic,readonly) id<FBSearchSuggestionProtocol> suggestion;                                          //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) FBSearchTypeaheadActivityListenerAnnouncer * typeaheadActivityAnnouncer;              //@synthesize typeaheadActivityAnnouncer=_typeaheadActivityAnnouncer - In the implementation block
@property (nonatomic,readonly) unsigned long long objectIndex;                                                     //@synthesize objectIndex=_objectIndex - In the implementation block
@property (nonatomic,retain) UIColor * contentBackgroundColor;                                                     //@synthesize contentBackgroundColor=_contentBackgroundColor - In the implementation block
@property (nonatomic,readonly) UIView * actionView;                                                                //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic) BOOL centerVerifiedBadge;                                                             //@synthesize centerVerifiedBadge=_centerVerifiedBadge - In the implementation block
@property (assign,nonatomic) BOOL isLastCellInSection;                                                             //@synthesize isLastCellInSection=_isLastCellInSection - In the implementation block
@property (assign,nonatomic) BOOL showSeparator;                                                                   //@synthesize showSeparator=_showSeparator - In the implementation block
@property (assign,nonatomic) BOOL showGrammarIcon;                                                                 //@synthesize showGrammarIcon=_showGrammarIcon - In the implementation block
@property (assign,nonatomic,__weak) id<FBSearchSuggestionTableViewCellDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForSuggestion:(id)arg1 constrainedToSize:(CGSize)arg2 queryString:(id)arg3 userSession:(id)arg4 ;
+(id)textForFollowButton;
+(FBLayout)_thumbnailLayoutForSuggestion:(id)arg1 userSession:(id)arg2 ;
+(BOOL)_shouldUseCompactLayout:(id)arg1 ;
+(unsigned long long)_fontWeightForSuggestion:(id)arg1 ;
+(id)getRenderingAttributedStringForSuggestion:(id)arg1 queryString:(id)arg2 ;
+(BOOL)_suggestionIsNullStateRecentSearch:(id)arg1 ;
+(double)widthForFollowText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 ;
-(void)didTapCell;
-(FBSearchTypeaheadActivityListenerAnnouncer *)typeaheadActivityAnnouncer;
-(void)setSuggestion:(id)arg1 objectIndex:(unsigned long long)arg2 ;
-(void)setCenterVerifiedBadge:(BOOL)arg1 ;
-(id<FBSearchSuggestionProtocol>)suggestion;
-(CGRect)textLayoutFrame;
-(UIEdgeInsets)textPadding;
-(unsigned long long)objectIndex;
-(BOOL)isLastCellInSection;
-(void)setIsLastCellInSection:(BOOL)arg1 ;
-(void)setSuggestion:(id)arg1 objectIndex:(unsigned long long)arg2 queryString:(id)arg3 ;
-(void)setTypeaheadActivityAnnouncer:(FBSearchTypeaheadActivityListenerAnnouncer *)arg1 ;
-(BOOL)_hasActionButton;
-(double)actionViewWidthForSuggestion:(id)arg1 ;
-(id)_iconForKeywordSuggestion;
-(id)_actionViewForSuggestion:(id)arg1 ;
-(void)_setActionView:(id)arg1 ;
-(BOOL)_shouldUseFollowIcon;
-(id)_actionButtonForUserSuggestion:(id)arg1 ;
-(id)_actionViewWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(BOOL)_shouldAllowUnfollow;
-(void)_didToggleLikeButton:(id)arg1 ;
-(id)_actionViewWithText:(id)arg1 ;
-(BOOL)_shouldAllowSendFriendRequest;
-(void)_didClickSendRequestButton:(id)arg1 ;
-(void)_didClickCancelRequestButton:(id)arg1 ;
-(BOOL)_shouldAllowUserFollow;
-(void)_didToggleUserFollowButton:(id)arg1 ;
-(BOOL)_shouldAllowUserMessage:(id)arg1 ;
-(id)_messageActionButton;
-(void)_didTapSendMessageButton:(id)arg1 ;
-(void)_sendFriendRequestForSuggestion:(id)arg1 ;
-(void)_refreshDisplayAfterActionWithSuggestion:(id)arg1 ;
-(void)_cancelFriendRequestForSuggestion:(id)arg1 ;
-(void)_toggleLikePageForSuggestion:(id)arg1 like:(BOOL)arg2 ;
-(BOOL)centerVerifiedBadge;
-(BOOL)showGrammarIcon;
-(void)setShowGrammarIcon:(BOOL)arg1 ;
-(FBNetworkImageView *)networkThumbnailView;
-(void)setNetworkThumbnailView:(FBNetworkImageView *)arg1 ;
-(UIImageView *)staticThumbnailView;
-(void)setStaticThumbnailView:(UIImageView *)arg1 ;
-(UIImageView *)verifiedBadgeView;
-(void)setVerifiedBadgeView:(UIImageView *)arg1 ;
-(UIImageView *)leaveAppView;
-(void)setLeaveAppView:(UIImageView *)arg1 ;
-(void)setLineView:(UIImageView *)arg1 ;
-(BOOL)suggestionTextIsRTL;
-(void)setSuggestionTextIsRTL:(BOOL)arg1 ;
-(void)setDelegate:(id<FBSearchSuggestionTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBSearchSuggestionTableViewCellDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIView *)actionView;
-(void)setShowSeparator:(BOOL)arg1 ;
-(BOOL)showSeparator;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(id)defaultImage;
-(UIImageView *)lineView;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)contentBackgroundColor;
@end

