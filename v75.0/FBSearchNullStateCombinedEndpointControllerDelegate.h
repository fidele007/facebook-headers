/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchNullStateCombinedEndpointControllerDelegate <NSObject>
@required
-(void)updateNullStateModulesWithRefreshedTopModule:(id)arg1;
-(BOOL)shouldLoadFromDiskForSearchNullStateCombinedEndpointController:(id)arg1;
-(void)updateNullStateModules;
-(void)notifyLoadingDidFinish;
-(void)recordRequestStatusForPerfLoggerForEndpointName:(id)arg1 isFresh:(BOOL)arg2 lastResultsDate:(id)arg3 alreadyLoading:(BOOL)arg4;
-(void)notifyLoadingDidFail:(id)arg1;
-(void)nullStateLoadingFinished;

@end

