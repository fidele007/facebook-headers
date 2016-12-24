/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFeedSideFeedDetailViewBaseDelegate.h>

@protocol FBFeedSideFeedItemViewBaseDelegate;
@class UILabel, UIImageView, UITapGestureRecognizer, NSArray, FBUserSession, UIButton, FBSideFeedItemDetailViewBase, FBNetworkImageView, NSIndexPath, NSString;

@interface FBFeedSideFeedItemViewBase : UIView <FBFeedSideFeedDetailViewBaseDelegate> {

	UILabel* _sponsoredLabel;
	UIImageView* _playIconImageView;
	UITapGestureRecognizer* _staticImageTapGestureRecognizer;
	NSArray* _accessibleElements;
	FBUserSession* _session;
	UIButton* _ctaButton;
	FBSideFeedItemDetailViewBase* _detailView;
	FBNetworkImageView* _staticImageView;
	id<FBFeedSideFeedItemViewBaseDelegate> _delegate;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) UIButton * ctaButton; 
@property (nonatomic,readonly) FBSideFeedItemDetailViewBase * detailView; 
@property (nonatomic,readonly) FBNetworkImageView * staticImageView; 
@property (assign,getter=isSponsored,nonatomic) BOOL sponsored; 
@property (assign,nonatomic) BOOL hasPlayVideoIcon; 
@property (assign,nonatomic,__weak) id<FBFeedSideFeedItemViewBaseDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                             //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)playerHeightForWidth:(double)arg1 ;
+(double)heightConstrainedToSize:(CGSize)arg1 title:(id)arg2 subtitle:(id)arg3 description:(id)arg4 starRatingValue:(id)arg5 withButton:(BOOL)arg6 ;
-(id)initWithFrame:(CGRect)arg1 withSession:(id)arg2 ;
-(FBNetworkImageView *)staticImageView;
-(id)createDetailViewForBaseClass;
-(id)createCtaButtonForBaseClass;
-(void)setHasPlayVideoIcon:(BOOL)arg1 ;
-(BOOL)hasPlayVideoIcon;
-(void)updateImageAccessibility;
-(void)_bottomButtonViewTapped:(id)arg1 ;
-(void)_staticImageViewTapped:(id)arg1 ;
-(void)_updateAccessibilityElements;
-(UIButton *)ctaButton;
-(void)setDelegate:(id<FBFeedSideFeedItemViewBaseDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFeedSideFeedItemViewBaseDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)prepareForReuse;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)isAccessibilityElement;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(FBSideFeedItemDetailViewBase *)detailView;
-(BOOL)isSponsored;
-(void)setSponsored:(BOOL)arg1 ;
@end

