/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlacePickerViewControllerDelegate.h>
#import <Facebook/FBPhotoViewControllerAddLocationControllerProtocol.h>

@protocol FBPhotoViewControllerAddLocationControllerDelegateProtocol;
@class FBUserSession, FBPlacePickerBaseViewController, FBPlacePickerV2NearbyFetcher, FBLoadingIndicatorView, NSMutableSet, FBMemPhoto, NSString;

@interface FBPhotoViewControllerAddLocationController : NSObject <FBPlacePickerViewControllerDelegate, FBPhotoViewControllerAddLocationControllerProtocol> {

	FBUserSession* _session;
	FBPlacePickerBaseViewController* _placePickerViewController;
	FBPlacePickerV2NearbyFetcher* _nearbyFetcher;
	FBLoadingIndicatorView* _spinner;
	NSMutableSet* _taggedPhotoSet;
	id<FBPhotoViewControllerAddLocationControllerDelegateProtocol> delegate;
	FBMemPhoto* _photo;

}

@property (nonatomic,copy) FBMemPhoto * photo;                                                                            //@synthesize photo=_photo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPhotoViewControllerAddLocationControllerDelegateProtocol> delegate; 
-(BOOL)placePickerDidCancel:(id)arg1 ;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2 ;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1 ;
-(BOOL)allowsPostAddLocationForPhoto:(id)arg1 ;
-(void)photoViewControllerOpenPlacePicker:(id)arg1 forPhoto:(id)arg2 ;
-(BOOL)_allowsSocialPhotoTaggingForPhoto:(id)arg1 ;
-(id)_getLocationOfPhoto:(id)arg1 ;
-(void)_dismissPlacePickerAnimated:(BOOL)arg1 ;
-(void)_editPhotoPlace:(id)arg1 onSuccess:(/*^block*/id)arg2 optimisticFactory:(id)arg3 ;
-(void)_addLocation:(id)arg1 ;
-(void)_removeLocation;
-(void)prefetchPlacesForPhoto:(id)arg1 ;
-(void)setDelegate:(id<FBPhotoViewControllerAddLocationControllerDelegateProtocol>)arg1 ;
-(id<FBPhotoViewControllerAddLocationControllerDelegateProtocol>)delegate;
-(void)setPhoto:(FBMemPhoto *)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(FBMemPhoto *)photo;
-(void)_showSpinner;
-(void)_hideSpinner;
@end

