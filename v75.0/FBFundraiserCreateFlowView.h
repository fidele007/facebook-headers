/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UIView, UICollectionView, UICollectionViewFlowLayout, NSString;

@interface FBFundraiserCreateFlowView : UIView <UICollectionViewDelegateFlowLayout> {

	UIView* _loadingOverlayView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UIView * loadingOverlayView;                    //@synthesize loadingOverlayView=_loadingOverlayView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)loadingOverlayView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UICollectionView *)collectionView;
@end

