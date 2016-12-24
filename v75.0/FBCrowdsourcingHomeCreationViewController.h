/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCrowdsourcingHomeBaseViewController.h>

@protocol FBCrowdsourcingHomeCreationViewControllerDelegate;
@class CLLocation, FBCrowdsourcingCreationModel, FBCrowdsourcingCreationRequest, FBCrowdsourcingHomeCreationLogger, FBCrowdsourcingCreationErrorHandleController;

@interface FBCrowdsourcingHomeCreationViewController : FBCrowdsourcingHomeBaseViewController {

	CLLocation* _location;
	FBCrowdsourcingCreationModel* _model;
	FBCrowdsourcingCreationRequest* _networkRequest;
	FBCrowdsourcingHomeCreationLogger* _logger;
	id _cityQueryToken;
	FBCrowdsourcingCreationErrorHandleController* _errorHandler;
	id<FBCrowdsourcingHomeCreationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingHomeCreationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCancel;
-(void)mediaAttachmentPickerControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1 ;
-(void)_didTapDone;
-(id)initWithLocation:(id)arg1 currentUser:(id)arg2 userSession:(id)arg3 logger:(id)arg4 ;
-(void)_didTapUpdateProfilePhotoOption;
-(void)_didTapRemoveProfilePhotoOption;
-(void)_updateHomeViewWithSelectedPhoto:(id)arg1 ;
-(BOOL)_hasProfilePhoto;
-(void)crowdsourcingCreationPrivacyViewControllerDidUpdatePrivacy:(id)arg1 ;
-(void)crowdsourcingCreationPrivacyViewControllerDidTapCancel;
-(void)crowdsourcingHomeViewDidTapOnPrivacySetting;
-(void)crowdsourcingHomeViewDidTapOnAddPhotoIcon;
-(void)crowdsourcingHomeViewDidTapOnCityField;
-(void)crowdsourcingCityPickerViewControllerDidCancel;
-(void)crowdsourcingCityPickerViewControllerDidSelectCity:(id)arg1 ;
-(void)_showAlertViewWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(void)_sendNetworkRequest;
-(void)_doSendRequestWithPhoto:(id)arg1 parameters:(id)arg2 ;
-(void)_doSendRequestWithParameters:(id)arg1 ;
-(void)constructRequestWithParameters:(id)arg1 ;
-(void)notifyCreatedWithID:(id)arg1 name:(id)arg2 location:(id)arg3 ;
-(void)_showAlertWithError:(id)arg1 request:(id)arg2 ;
-(id)initWithModel:(id)arg1 currentUser:(id)arg2 userSession:(id)arg3 logger:(id)arg4 ;
-(void)setDelegate:(id<FBCrowdsourcingHomeCreationViewControllerDelegate>)arg1 ;
-(id<FBCrowdsourcingHomeCreationViewControllerDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_didEnterBackgroundNotification;
@end
