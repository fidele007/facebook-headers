/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBVideoNetworkerURLGenerator : NSObject
+(id)buildDataKeyWithVideoID:(id)arg1 videoUrl:(id)arg2 ;
+(id)videoIDForDataKey:(id)arg1 ;
+(id)proxyURLForURL:(id)arg1 videoID:(id)arg2 trackerID:(id)arg3 definition:(long long)arg4 ;
+(id)extractEverstoreBlobIDFromURL:(id)arg1 ;
+(id)videoIDFromProxyURL:(id)arg1 ;
+(id)dataKeyForProxyURL:(id)arg1 ;
+(id)trackerIDFromProxyURL:(id)arg1 ;
+(id)remoteURLFromProxyURL:(id)arg1 ;
+(id)everstoreBlobIDFromProxyURL:(id)arg1 ;
+(id)_buildDataKeyWithVideoID:(id)arg1 everstoreBlobID:(id)arg2 ;
+(long long)definitionFromProxyURL:(id)arg1 ;
@end

