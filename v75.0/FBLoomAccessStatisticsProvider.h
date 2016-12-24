/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLoomTraceProvider.h>
#import <Facebook/FBAccessStatisticsDelegate.h>

@class NSString;

@interface FBLoomAccessStatisticsProvider : NSObject <FBLoomTraceProvider, FBAccessStatisticsDelegate> {

	unordered_map<int, markerAndString, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, markerAndString> > >* eventNameToIDMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)writeLogEntry:(int)arg1 eventName:(unsigned long long)arg2 time:(long long)arg3 identifier:(id)arg4 ;
-(void)writeStartLogEntry:(unsigned long long)arg1 startTime:(long long)arg2 identifier:(id)arg3 ;
-(void)writeStopLogEntry:(unsigned long long)arg1 endTime:(long long)arg2 identifier:(id)arg3 ;
-(void)writeCounterLogEntry:(unsigned long long)arg1 time:(long long)arg2 ;
-(void)loomTraceWillBeginWithContext:(id)arg1 ;
-(void)loomTraceDidEnd;
-(unsigned long long)eventProviderIdentifier;
-(id)customHeaderFromProviderWithContext:(id)arg1 ;
-(void)addDurationEvent:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 identifier:(id)arg4 ;
-(void)addCounterEvent:(unsigned long long)arg1 time:(long long)arg2 ;
@end
