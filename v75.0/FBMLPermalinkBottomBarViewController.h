/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBMLPhotoPickerViewControllerDelegate.h>
#import <Facebook/FBMLPermalinkBottomBarMembershipViewResponder.h>
#import <Facebook/FBMLPermalinkBottomBarWrapperViewResponder.h>
#import <Facebook/FBMLAudiencePickerViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBMLPermalinkBottomBarViewControllerDelegate;
@class FBMLSession, SRUser, FBMLPermalinkBottomBarWrapperView, FBMLAudiencePickerViewController, NSArray, SYNFolder, NSString;

@interface FBMLPermalinkBottomBarViewController : UIViewController <FBMLPhotoPickerViewControllerDelegate, FBMLPermalinkBottomBarMembershipViewResponder, FBMLPermalinkBottomBarWrapperViewResponder, FBMLAudiencePickerViewControllerDelegate, UIAlertViewDelegate> {

	FBMLSession* _session;
	SRUser* _sessionUser;
	FBMLPermalinkBottomBarWrapperView* _wrapperView;
	FBMLAudiencePickerViewController* _audiencePickerViewController;
	NSArray* _addedUsers;
	NSArray* _removedUsers;
	BOOL _disabled;
	SYNFolder* _folder;
	id<FBMLPermalinkBottomBarViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL disabled;                                                                 //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) SYNFolder * folder;                                                            //@synthesize folder=_folder - In the implementation block
@property (assign,nonatomic,__weak) id<FBMLPermalinkBottomBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureView;
-(void)audiencePickerViewControllerDidCancel:(id)arg1 ;
-(void)audiencePickerViewControllerDidFinish:(id)arg1 withSelectedUsers:(id)arg2 selectedFolder:(id)arg3 ;
-(void)bottomBarMembershipViewDidTap:(id)arg1 ;
-(void)permalinkBottomBarWrapperViewDidTapAddPhotos:(id)arg1 ;
-(void)permalinkBottomBarWrapperViewDidTapMore:(id)arg1 ;
-(void)_didTapAudienceNames;
-(void)_dismissAndCommitMutations;
-(void)photoPickerViewController:(id)arg1 didSelectPhotos:(id)arg2 photosToBlacklist:(id)arg3 ;
-(void)photoPickerViewControllerDidCancel:(id)arg1 ;
-(id)initWithMomentsSession:(id)arg1 folder:(id)arg2 ;
-(void)setDelegate:(id<FBMLPermalinkBottomBarViewControllerDelegate>)arg1 ;
-(id<FBMLPermalinkBottomBarViewControllerDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(SYNFolder *)folder;
-(void)setFolder:(SYNFolder *)arg1 ;
@end

