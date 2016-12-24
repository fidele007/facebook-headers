/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FNFDashAssetPrefetcherLogger.h>

@class NSString;

@interface FBPrefetchLiveDashVideoLogger : NSObject <FNFDashAssetPrefetcherLogger>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logPrefetchStartedForVideoID:(id)arg1 ;
-(void)logPrefetchAvailableForVideoID:(id)arg1 isPrefetched:(BOOL)arg2 bytesRequested:(unsigned long long)arg3 bytesPrefetched:(unsigned long long)arg4 prefetchLeadTimeInMS:(unsigned long long)arg5 isKnownURL:(BOOL)arg6 ;
-(void)logPrefetchDiscardedForVideoID:(id)arg1 bytesRequested:(unsigned long long)arg2 bytesPrefetched:(unsigned long long)arg3 prefetchLeadTimeInMS:(unsigned long long)arg4 ;
@end

