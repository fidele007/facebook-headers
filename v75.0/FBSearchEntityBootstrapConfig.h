/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchBootstrapConfig.h>

@class NSString;

@interface FBSearchEntityBootstrapConfig : NSObject <FBSearchBootstrapConfig>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)lastStoreFullRefreshDateKeyString;
+(double)refreshIntervalWiFiForSession:(id)arg1 ;
+(double)refreshIntervalNonWiFiForSession:(id)arg1 ;
+(id)suggestionGeneratorWithBootstrapFileManager:(id)arg1 session:(id)arg2 ;
+(id)downloadRequestWithSession:(id)arg1 ;
+(id)resultsFromRequest:(id)arg1 response:(id)arg2 parseError:(id*)arg3 ;
+(id)serializeBootstrapData:(id)arg1 ;
+(id)supportedBootstrapEntityTypes;
+(unsigned long long)maxResultCount;
+(id)fileName;
@end

