/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/SRCompositeFragmentController.h>
#import <Facebook/FBMLPhotoGroupHeaderFragmentControllerDelegate.h>
#import <Facebook/FBMLPhotosFragmentDelegate.h>

@protocol FBMLPhotoGroupFragmentControllerDelegate;
@class FBMLSession, SRStickyHeaderLayoutFragment, FBMLPhotoGroupHeaderFragmentController, FBMLPhotosFragment, NSArray, NSSet, NSString;

@interface FBMLPhotoGroupFragmentController : SRCompositeFragmentController <FBMLPhotoGroupHeaderFragmentControllerDelegate, FBMLPhotosFragmentDelegate> {

	FBMLSession* _session;
	SRStickyHeaderLayoutFragment* _stickyHeaderLayout;
	FBMLPhotoGroupHeaderFragmentController* _headerController;
	FBMLPhotosFragment* _photosController;
	BOOL _enforceSinglePhotoSelection;
	id<FBMLPhotoGroupFragmentControllerDelegate> _delegate;
	NSArray* _photos;

}

@property (assign,nonatomic,__weak) id<FBMLPhotoGroupFragmentControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                                            //@synthesize photos=_photos - In the implementation block
@property (nonatomic,copy) NSSet * selectedPhotoIdentifiers; 
@property (assign,nonatomic) BOOL isHeaderHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layoutFragment;
-(void)photosFragmentController:(id)arg1 didTapPhoto:(id)arg2 ;
-(void)photosFragmentControllerDidEnterSelectionMode:(id)arg1 ;
-(void)photosFragmentController:(id)arg1 toggleSelectionForPhoto:(id)arg2 ;
-(void)setSelectedPhotoIdentifiers:(NSSet *)arg1 ;
-(NSSet *)selectedPhotoIdentifiers;
-(void)_togglePhotoSelectionForPhoto:(id)arg1 ;
-(void)photoGroupHeaderFragmentControllerDidToggleSelection:(id)arg1 ;
-(id)initWithMomentsSession:(id)arg1 photos:(id)arg2 initiallySelectedPhotoIdentifiers:(id)arg3 photosPerRow:(long long)arg4 enforceSinglePhotoSelection:(BOOL)arg5 ;
-(CGRect)parentLevelBoundsOfChildBounds:(CGRect)arg1 forChildFragment:(unsigned long long)arg2 ;
-(void)updateLayoutUponChildChange;
-(BOOL)isHeaderHidden;
-(void)setIsHeaderHidden:(BOOL)arg1 ;
-(void)setDelegate:(id<FBMLPhotoGroupFragmentControllerDelegate>)arg1 ;
-(id<FBMLPhotoGroupFragmentControllerDelegate>)delegate;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
@end

