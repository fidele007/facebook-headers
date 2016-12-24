/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageDownloaderFactoryProtocol.h>

@class NSMutableDictionary, NSString;

@interface FBWebImageRegisterDownloaderFactory : NSObject <FBWebImageDownloaderFactoryProtocol> {

	NSMutableDictionary* _typeToFunctionMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)downloaderForType:(id)arg1 ;
-(void)registerDownloaderFactoryValue:(id)arg1 forType:(id)arg2 ;
-(BOOL)isTypeRegistered:(id)arg1 ;
-(id)init;
@end

