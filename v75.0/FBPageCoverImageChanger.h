/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPageSurfaceEditCoverControllerDelegate.h>
#import <Facebook/FBTimelineEditCoverControllerDelegate.h>
#import <Facebook/FIGCoverImageChanger.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBNavigationCoordinator, FBNetworkDispatch, FBPageCoverImageChangerDelegate;
@class FBMemPage, FBUserSession, FBPageSurfaceEditCoverController, NSString;

@interface FBPageCoverImageChanger : NSObject <FBPageSurfaceEditCoverControllerDelegate, FBTimelineEditCoverControllerDelegate, FIGCoverImageChanger, NSCopying> {

	FBMemPage* _page;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBNetworkDispatch> _networkDispatcher;
	FBPageSurfaceEditCoverController* _editCoverImageController;
	/*^block*/id _didChangeCoverImageBlock;
	/*^block*/id _didFailToChangeCoverImageBlock;
	id<FBPageCoverImageChangerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageCoverImageChangerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowChangerWithPage:(id)arg1 session:(id)arg2 ;
+(id)changerWithPage:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 ;
-(id)initWithPage:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)_notifyDelegateDidFailToChangeCoverImageWithErrorType:(int)arg1 ;
-(void)_notifyDelegateWillChangeCoverImage;
-(void)_dismissEditCoverImageController;
-(void)_notifyDelegateDidChangeCoverImage;
-(void)cancelCoverPhotoEdit;
-(void)saveCoverPhoto:(id)arg1 focus:(CGPoint)arg2 ;
-(void)didSelectNewCoverImageWithExistingPhoto:(id)arg1 didChangeCoverImageBlock:(/*^block*/id)arg2 didFailToChangeCoverImageBlock:(/*^block*/id)arg3 ;
-(void)didSelectNewCoverImage:(id)arg1 didChangeCoverImageBlock:(/*^block*/id)arg2 didFailToChangeCoverImageBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBPageCoverImageChangerDelegate>)arg1 ;
-(id<FBPageCoverImageChangerDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

