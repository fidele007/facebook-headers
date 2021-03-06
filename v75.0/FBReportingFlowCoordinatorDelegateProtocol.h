/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReportingFlowCoordinatorDelegateProtocol
@required
-(void)logReportingFlowEvent:(id)arg1;
-(void)dismissReportingFlow;
-(void)loadNewBranchForDetailedResponse:(id)arg1;
-(void)performGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)performMessageGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 targetFBID:(id)arg3 message:(id)arg4;
-(void)loadMessageComposer:(id)arg1;
-(void)showAvatarPicker;
-(void)redirectToURL:(id)arg1;
-(int)presentationStyle;
-(id)dismissButtonTitle;

@end

