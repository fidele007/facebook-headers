/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBMLPermalinkMoreControllerDelegate;
@class FBMLNativeBridge, SRUser, SYNFolder, NSString;

@interface FBMLPermalinkMoreController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate> {

	FBMLNativeBridge* _nativeBridge;
	SRUser* _sessionUser;
	SYNFolder* _folder;
	long long _editAlbumButtonIndex;
	BOOL _shouldDelete;
	id<FBMLPermalinkMoreControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMLPermalinkMoreControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithNativeBridge:(id)arg1 folderUUID:(id)arg2 ;
-(void)showMoreOptionsFromView:(id)arg1 ;
-(void)setDelegate:(id<FBMLPermalinkMoreControllerDelegate>)arg1 ;
-(id<FBMLPermalinkMoreControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

