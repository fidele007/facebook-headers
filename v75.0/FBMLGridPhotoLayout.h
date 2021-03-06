/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRFlowLayoutFragmentDelegate.h>
#import <Facebook/FBMLPhotosFragmentLayout.h>

@class FBMLPhotosFragment, SRFlowLayoutFragment, NSString;

@interface FBMLGridPhotoLayout : NSObject <SRFlowLayoutFragmentDelegate, FBMLPhotosFragmentLayout> {

	SRFlowLayoutFragment* _flowLayout;
	BOOL _rightAlign;
	FBMLPhotosFragment* photosFragmentController;
	long long _photosPerRow;
	double _photoSpacing;

}

@property (nonatomic,readonly) long long photosPerRow;                                          //@synthesize photosPerRow=_photosPerRow - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) double photoSpacing;                                               //@synthesize photoSpacing=_photoSpacing - In the implementation block
@property (assign,nonatomic) BOOL rightAlign;                                                   //@synthesize rightAlign=_rightAlign - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) FBMLPhotosFragment * photosFragmentController; 
-(double)photoSpacing;
-(void)setPhotoSpacing:(double)arg1 ;
-(id)layoutFragment;
-(FBMLPhotosFragment *)photosFragmentController;
-(unsigned long long)_columnIndexToGiveExtraSpaceForItemIndex:(unsigned long long)arg1 ;
-(long long)countOfItemsForLayoutFragment:(id)arg1 ;
-(CGSize)layoutFragment:(id)arg1 sizeForItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithPhotosPerRow:(long long)arg1 ;
-(void)setRightAlign:(BOOL)arg1 ;
-(long long)photosPerRow;
-(BOOL)rightAlign;
-(void)setPhotosFragmentController:(FBMLPhotosFragment *)arg1 ;
-(double)heightOfItems:(unsigned long long)arg1 ;
-(int)photoQualityForIndex:(unsigned long long)arg1 countOfItems:(unsigned long long)arg2 ;
-(BOOL)showUploadBadgeForIndex:(unsigned long long)arg1 countOfItems:(unsigned long long)arg2 ;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

