/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarPickerControllerDelegate.h>

@protocol FBHumanQueriedFundraiserWithPresenceFieldsProtocol;
@class FBFundraiserPageToolbox, FBMemModelObject, FBAnalyticsInfo, NSString;

@interface FBFundraiserActionBarTapResponder : NSObject <FBAvatarPickerControllerDelegate> {

	FBFundraiserPageToolbox* _toolbox;
	FBMemModelObject*<FBHumanQueriedFundraiserWithPresenceFieldsProtocol> _campaign;
	FBAnalyticsInfo* _analyticsInfo;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(id)initWithCampaign:(id)arg1 toolbox:(id)arg2 ;
-(void)tappedInvite;
-(void)tappedEdit;
-(void)tappedFollowUnfollow;
-(void)tappedGoToCharityPage:(id)arg1 ;
-(void)tappedReportFundraiser;
-(void)tappedCopyLink;
-(void)tappedWritePost;
-(void)tappedSendMessenger;
-(void)logEvent:(id)arg1 extraInfo:(id)arg2 ;
@end
