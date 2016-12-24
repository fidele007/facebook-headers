/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRSingleViewFragmentController.h>
#import <Facebook/FBMLPhotoGroupHeaderCellResponder.h>

@protocol FBMLPhotoGroupHeaderFragmentControllerDelegate;
@class FBMLPhotoGroupHeaderCell, NSString, NSArray;

@interface FBMLPhotoGroupHeaderFragmentController : SRSingleViewFragmentController <FBMLPhotoGroupHeaderCellResponder> {

	FBMLPhotoGroupHeaderCell* _headerCell;
	NSString* _locationText;
	NSString* _timeText;
	BOOL _allPhotosSelected;
	id<FBMLPhotoGroupHeaderFragmentControllerDelegate> _delegate;
	NSArray* _photos;

}

@property (assign,nonatomic,__weak) id<FBMLPhotoGroupHeaderFragmentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                                                  //@synthesize photos=_photos - In the implementation block
@property (assign,nonatomic) BOOL allPhotosSelected;                                                          //@synthesize allPhotosSelected=_allPhotosSelected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_rawTextFromPhotos:(id)arg1 ;
-(Class)classOfSingleCell;
-(double)heightOfSingleCell;
-(void)configureSingleCell:(id)arg1 ;
-(void)_configureHeaderCell:(id)arg1 ;
-(void)setAllPhotosSelected:(BOOL)arg1 ;
-(BOOL)allPhotosSelected;
-(void)photoGroupHeaderCellDidTap:(id)arg1 ;
-(void)setDelegate:(id<FBMLPhotoGroupHeaderFragmentControllerDelegate>)arg1 ;
-(id<FBMLPhotoGroupHeaderFragmentControllerDelegate>)delegate;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(id)initWithPhotos:(id)arg1 ;
@end
