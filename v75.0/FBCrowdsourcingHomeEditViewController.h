/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCrowdsourcingHomeBaseViewController.h>

@protocol FBCrowdsourcingHomeEditViewControllerDelegate;
@class FBMemPage, FBCrowdsourcingHomeEditModel, FBCrowdsourcingHomeEditUploadRequest, FBCrowdsourcingHomeEditLogger, FBNetworkerRequest;

@interface FBCrowdsourcingHomeEditViewController : FBCrowdsourcingHomeBaseViewController {

	FBMemPage* _page;
	id _photoDownloadHandle;
	FBCrowdsourcingHomeEditModel* _model;
	FBCrowdsourcingHomeEditUploadRequest* _uploadRequest;
	FBCrowdsourcingHomeEditLogger* _logger;
	FBNetworkerRequest* _detailFetchNetworkRequest;
	long long _alertDialogErrorCode;
	id<FBCrowdsourcingHomeEditViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingHomeEditViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithPage:(id)arg1 userSession:(id)arg2 ;
-(void)_didTapCancel;
-(void)mediaAttachmentPickerControllerDidCancel:(id)arg1 ;
-(void)mediaAttachmentPickerControllerDidClearMediaAttachments:(id)arg1 ;
-(void)_didTapDone;
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
-(void)_fetchHomeDetails;
-(void)_updateHomeView;
-(void)_sendEditUploadRequest;
-(void)_resetHomeName;
-(void)_resetHomeCity;
-(void)_sendEditUploadRequestWithImageData:(id)arg1 ;
-(void)_handleUploadError:(id)arg1 request:(id)arg2 ;
-(/*^block*/id)_failureBlockForFetchFailing;
-(void)_handleDetailResponse:(id)arg1 ;
-(void)setDelegate:(id<FBCrowdsourcingHomeEditViewControllerDelegate>)arg1 ;
-(id<FBCrowdsourcingHomeEditViewControllerDelegate>)delegate;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)_fetchPhoto;
-(void)_didEnterBackgroundNotification;
@end

