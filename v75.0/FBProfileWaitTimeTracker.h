/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FBProfileWaitTimeTracker : NSObject {

	NSMutableDictionary* _waitTimeTrackers;

}
-(void)loadingWasAbortedForAllTypes;
-(void)loadingWasAbortedForType:(long long)arg1 ;
-(void)loadingDidEndWithError:(id)arg1 forType:(long long)arg2 ;
-(void)loadingDidStartForType:(long long)arg1 ;
-(void)spinnerWillAppearForType:(long long)arg1 ;
-(void)loadingDidEndForAllTypesWithError:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end
