/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AutoFillCache : NSObject
+(id)sharedInstance;
-(void)_updateCacheWithAutoFillValues:(id)arg1 session:(id)arg2 cacheTagKeyFormat:(id)arg3 ;
-(id)_cachedAutoFillValuesForTags:(id)arg1 session:(id)arg2 cacheTagKeyFormat:(id)arg3 ;
-(BOOL)isCacheValid:(id)arg1 ;
-(void)updateLocalCacheWithAutoFillValues:(id)arg1 session:(id)arg2 ;
-(void)updateGraphQLCacheWithAutoFillValues:(id)arg1 session:(id)arg2 ;
-(id)cachedAutoFillValuesForTags:(id)arg1 session:(id)arg2 ;
-(id)init;
@end

