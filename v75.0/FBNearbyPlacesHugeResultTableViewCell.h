/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Facebook/FBNearbyPlacesResultActionBarViewDelegate.h>
#import <Facebook/FBNearbyPlacesResultFriendsWhoVistedViewDelegate.h>
#import <Facebook/FBNearbyPlacesResultFriendsReviewViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol UICollectionViewDataSource, FBNearbyPlacesHugeResultTableViewCellDelegate;
@class FBRichTextView, FBNetworkImageView, FBNearbyPlacesResultActionBarView, FBNearbyPlacesPhotosCollectionView, FBNearbyPlacesResultFriendsWhoVisitedView, FBNearbyPlacesResultFriendsReviewView, UIImageView, UIView, NSString;

@interface FBNearbyPlacesHugeResultTableViewCell : UITableViewCell <FBNearbyPlacesResultActionBarViewDelegate, FBNearbyPlacesResultFriendsWhoVistedViewDelegate, FBNearbyPlacesResultFriendsReviewViewDelegate, UICollectionViewDelegate> {

	unsigned long long _componentOptions;
	FBRichTextView* _titleLabel;
	FBRichTextView* _primarySubtitleTextView;
	FBRichTextView* _secondarySubtitleTextView;
	FBNetworkImageView* _thumbnailView;
	unsigned long long _thumbnailSize;
	FBNearbyPlacesResultActionBarView* _actionBarView;
	FBNearbyPlacesPhotosCollectionView* _photosHScrollView;
	id<UICollectionViewDataSource> _photosDataSource;
	FBNearbyPlacesResultFriendsWhoVisitedView* _friendsWhoVisitedView;
	FBNearbyPlacesResultFriendsReviewView* _friendsReviewView;
	UIImageView* _disclosureView;
	UIView* _topBorder;
	UIView* _bottomBorder;
	UIView* _socialContextBorder;
	UIView* _cellSpacer;
	UIView* _cellBackground;
	id<FBNearbyPlacesHugeResultTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesHugeResultTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForCellInformation:(id)arg1 userLocation:(id)arg2 isCurrentLocationSearch:(BOOL)arg3 userSession:(id)arg4 ;
+(unsigned long long)componentsForCellInformation:(id)arg1 userLocation:(id)arg2 isCurrentLocationSearch:(BOOL)arg3 userSession:(id)arg4 ;
+(BOOL)isLargeHugeResultCellOptions:(unsigned long long)arg1 ;
+(BOOL)isMediumHugeResultCellOptions:(unsigned long long)arg1 ;
+(BOOL)isSmallHugeResultCellOptions:(unsigned long long)arg1 ;
+(BOOL)hasSocialContextForResultCellOptions:(unsigned long long)arg1 ;
+(double)_borderSize;
-(void)_configureLargeResultCellWithPage:(id)arg1 session:(id)arg2 ;
-(void)_configureMediumResultCellWithPage:(id)arg1 session:(id)arg2 ;
-(void)_configureSmallResultCellWithPage:(id)arg1 session:(id)arg2 ;
-(void)_configurePhotoHScrollViewWithPage:(id)arg1 photosDataSource:(id)arg2 ;
-(void)_configureActionBarViewWithPage:(id)arg1 userLocation:(id)arg2 isCurrentLocationSearch:(BOOL)arg3 ;
-(void)_configureSocialContextViewWithPage:(id)arg1 userSession:(id)arg2 ;
-(void)_layoutLargeResultCellWithWidth:(double)arg1 height:(double)arg2 parentWidth:(double)arg3 ;
-(void)_layoutMediumResultCellWithWidth:(double)arg1 height:(double)arg2 parentWidth:(double)arg3 ;
-(void)_layoutSmallResultCellWithWidth:(double)arg1 height:(double)arg2 parentWidth:(double)arg3 ;
-(id)_backgroundColorForSelectedState:(BOOL)arg1 ;
-(void)_configureBaseResultCellWithPage:(id)arg1 session:(id)arg2 thumbnailSize:(unsigned long long)arg3 ;
-(id)_spotlightStringForPage:(id)arg1 ;
-(void)_updateThumbnailViewWithPage:(id)arg1 session:(id)arg2 thumbnailSize:(unsigned long long)arg3 ;
-(id)_categoriesStringForPage:(id)arg1 ;
-(void)_didTapThumbnailPhoto;
-(double)_layoutHeaderWithWidth:(double)arg1 height:(double)arg2 ;
-(double)_layoutActionBarViewWithComponentStartY:(double)arg1 parentWidth:(double)arg2 ;
-(double)_layoutSocialContextViewWithComponentStartY:(double)arg1 parentWidth:(double)arg2 ;
-(void)_layoutBordersAndBackgroundWithComponentStartY:(double)arg1 ;
-(double)_layoutPhotoHScrollViewWithComponentStartY:(double)arg1 parentWidth:(double)arg2 ;
-(void)_layoutDisclosureViewWithParentWidth:(double)arg1 centerOffsetY:(double)arg2 ;
-(void)nearbyPlacesResultActionBar:(id)arg1 actionTapped:(unsigned long long)arg2 ;
-(void)nearbyPlacesFriendsWhoVisitedViewTapped;
-(void)nearbyPlacesFriendsReviewViewTapped;
-(void)configWithCellInformation:(id)arg1 session:(id)arg2 userLocation:(id)arg3 photosDataSource:(id)arg4 isCurrentLocationSearch:(BOOL)arg5 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<FBNearbyPlacesHugeResultTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBNearbyPlacesHugeResultTableViewCellDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
@end

