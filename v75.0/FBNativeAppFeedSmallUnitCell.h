/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Facebook/FBNativeAppFeedCellProtocol.h>

@protocol FBNativeAppFeedCellDelegate;
@class NSIndexPath, FBUserSession, FBMemDigitalGoodFeedUnitItem, UILabel, FBItemView_DEPRECATED, FBNetworkImageView, NSString;

@interface FBNativeAppFeedSmallUnitCell : UICollectionViewCell <FBNativeAppFeedCellProtocol> {

	BOOL _useContextSentence;
	id<FBNativeAppFeedCellDelegate> _delegate;
	NSIndexPath* _indexPath;
	FBUserSession* _session;
	FBMemDigitalGoodFeedUnitItem* _feedUnit;
	UILabel* _secondarySubtitleView;
	FBItemView_DEPRECATED* _summaryView;
	FBNetworkImageView* _imageView;

}

@property (nonatomic,retain) UILabel * secondarySubtitleView;                              //@synthesize secondarySubtitleView=_secondarySubtitleView - In the implementation block
@property (nonatomic,retain) FBItemView_DEPRECATED * summaryView;                          //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * imageView;                               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL useContextSentence;                                      //@synthesize useContextSentence=_useContextSentence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBUserSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBMemDigitalGoodFeedUnitItem * feedUnit;                      //@synthesize feedUnit=_feedUnit - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeAppFeedCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                      //@synthesize indexPath=_indexPath - In the implementation block
+(double)cellHeight;
-(FBMemDigitalGoodFeedUnitItem *)feedUnit;
-(void)setFeedUnit:(FBMemDigitalGoodFeedUnitItem *)arg1 ;
-(void)setSummaryView:(FBItemView_DEPRECATED *)arg1 ;
-(void)setSecondarySubtitleView:(UILabel *)arg1 ;
-(void)didLongPress:(id)arg1 ;
-(BOOL)useContextSentence;
-(id)_makeColoredSubtitleWithContextSentence:(id)arg1 actionText:(id)arg2 ;
-(void)_initImageViewInContainer:(id)arg1 withSession:(id)arg2 ;
-(UILabel *)secondarySubtitleView;
-(FBItemView_DEPRECATED *)summaryView;
-(void)setUseContextSentence:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBNativeAppFeedCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBNativeAppFeedCellDelegate>)delegate;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(FBNetworkImageView *)imageView;
-(void)setImageView:(FBNetworkImageView *)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end

