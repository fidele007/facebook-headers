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

@class SRFlowLayoutFragment, FBMLPhotosFragment, NSString;

@interface FBMLFolderStoryPhotoLayout : NSObject <SRFlowLayoutFragmentDelegate, FBMLPhotosFragmentLayout> {

	SRFlowLayoutFragment* _flowLayout;
	BOOL _useExtraLargeSinglePhoto;
	FBMLPhotosFragment* photosFragmentController;
	double _photoSpacing;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (assign,nonatomic) double photoSpacing;                                               //@synthesize photoSpacing=_photoSpacing - In the implementation block
@property (assign,nonatomic) BOOL useExtraLargeSinglePhoto;                                     //@synthesize useExtraLargeSinglePhoto=_useExtraLargeSinglePhoto - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) FBMLPhotosFragment * photosFragmentController; 
+(double)_roundWidth:(double)arg1 photosPerRow:(unsigned long long)arg2 forItemAtIndex:(unsigned long long)arg3 ;
-(double)photoSpacing;
-(void)setPhotoSpacing:(double)arg1 ;
-(id)layoutFragment;
-(FBMLPhotosFragment *)photosFragmentController;
-(long long)countOfItemsForLayoutFragment:(id)arg1 ;
-(CGSize)layoutFragment:(id)arg1 sizeForItemAtIndex:(unsigned long long)arg2 ;
-(void)setPhotosFragmentController:(FBMLPhotosFragment *)arg1 ;
-(double)heightOfItems:(unsigned long long)arg1 ;
-(int)photoQualityForIndex:(unsigned long long)arg1 countOfItems:(unsigned long long)arg2 ;
-(BOOL)showUploadBadgeForIndex:(unsigned long long)arg1 countOfItems:(unsigned long long)arg2 ;
-(void)_performBatchUpdates:(/*^block*/id)arg1 ;
-(void)setUseExtraLargeSinglePhoto:(BOOL)arg1 ;
-(BOOL)useExtraLargeSinglePhoto;
-(id)init;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

