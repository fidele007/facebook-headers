/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSearchModuleResultsDataBridgeDelegate <NSObject>
@required
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2;
-(long long)numberOfObjectsInSection:(long long)arg1;
-(void)didReceiveInitalContentWithAppliedFilters:(id)arg1 isOfflineContent:(BOOL)arg2;
-(void)didUpdateFromState:(long long)arg1 toState:(long long)arg2 error:(id)arg3;
-(BOOL)hasAppliedFilters;
-(id)objectAtIndexPath:(id)arg1;

@end

