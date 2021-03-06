/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBPageEditAnalyticsLogger : NSObject {

	FBUserSession* _userSession;
	NSString* _pageId;
	NSString* _analyticsUUID;

}
-(void)_logWithEventName:(id)arg1 extraInfo:(id)arg2 ;
-(id)_standardExtraInfoWithAddition:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 pageId:(id)arg2 analyticsUUID:(id)arg3 ;
-(void)logActionBarButtonTapped:(id)arg1 position:(unsigned long long)arg2 ;
-(void)logCompleteReplaceAction:(id)arg1 newActionType:(id)arg2 position:(unsigned long long)arg3 ;
-(void)logUseDefaultButtonsTapped:(id)arg1 ;
-(void)logTemplateRowTapped:(id)arg1 ;
-(void)logUseDefaultTabOrderTapped:(id)arg1 ;
-(void)logTabReorderTapped:(id)arg1 oldTabOrder:(id)arg2 newTabOrder:(id)arg3 ;
-(void)logAddTabsTapped:(id)arg1 templateType:(id)arg2 ;
-(void)logTemplateMoreInfoTapped:(id)arg1 ;
-(void)logTemplatesTapApplyTapped:(id)arg1 ;
-(void)logTemplateConfirmApplicationTapped:(id)arg1 ;
-(void)logTemplateCancelApplicationTapped:(id)arg1 ;
-(void)logAdminBarGearTapped:(id)arg1 ;
-(void)logAdminBarCopyTabLinkTapped:(id)arg1 ;
-(void)logAdminBarShareTabTapped:(id)arg1 ;
-(void)logAdminBarReorderTabsTapped:(id)arg1 ;
-(void)logAdminBarHideTabTapped:(id)arg1 ;
@end

