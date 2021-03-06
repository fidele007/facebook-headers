/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAdInterfacesImagePickerEventHandlerDelegate.h>

@protocol FBAdInterfacesAdCreativeImagePickerControllerDelegate, FBNavigationCoordinator;
@class FBUserSession, UIImage, UIViewController, FBAdInterfacesLogger, NSString;

@interface FBAdInterfacesAdCreativeImagePickerController : NSObject <FBAdInterfacesImagePickerEventHandlerDelegate> {

	FBUserSession* _session;
	CGSize _imageCropSize;
	CGSize _minImageCropSize;
	UIImage* _originalCreativeImage;
	UIViewController* _imagePickerVC;
	UIImage* _creativeImage;
	id<FBAdInterfacesAdCreativeImagePickerControllerDelegate> _delegate;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBAdInterfacesLogger* _logger;
	NSString* _flowEntryPoint;

}

@property (assign,nonatomic,__weak) id<FBAdInterfacesAdCreativeImagePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;                                      //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) UIImage * creativeImage;                                                                //@synthesize creativeImage=_creativeImage - In the implementation block
@property (nonatomic,retain) FBAdInterfacesLogger * logger;                                                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) NSString * flowEntryPoint;                                                                //@synthesize flowEntryPoint=_flowEntryPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(BOOL)wasCreativeImageChanged;
-(NSString *)flowEntryPoint;
-(void)_doneSelectingImage;
-(void)_uploadImage:(id)arg1 ;
-(void)handleImageError;
-(void)_completeImageProcessWithCGImage:(CGImageRef)arg1 transformData:(id)arg2 ;
-(void)_didChangeImage:(id)arg1 ;
-(void)handleNoImageSelected;
-(void)_loadAndProcessImageFromAssetURL:(id)arg1 transformData:(id)arg2 ;
-(void)_downloadAndProcessImageFromURL:(id)arg1 transformData:(id)arg2 ;
-(void)imagePickerDidSelectImageWithMetadata:(id)arg1 ;
-(id)initWithCreativeImage:(id)arg1 imageCropSize:(CGSize)arg2 minImageCropSize:(CGSize)arg3 session:(id)arg4 navigationCoordinator:(id)arg5 logger:(id)arg6 delegate:(id)arg7 flowEntryPoint:(id)arg8 ;
-(void)openImagePicker;
-(UIImage *)creativeImage;
-(void)setCreativeImage:(UIImage *)arg1 ;
-(void)setFlowEntryPoint:(NSString *)arg1 ;
-(void)setDelegate:(id<FBAdInterfacesAdCreativeImagePickerControllerDelegate>)arg1 ;
-(id<FBAdInterfacesAdCreativeImagePickerControllerDelegate>)delegate;
-(FBAdInterfacesLogger *)logger;
-(void)setLogger:(FBAdInterfacesLogger *)arg1 ;
@end

