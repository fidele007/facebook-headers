/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageDownloaderFactoryProtocol.h>

@protocol FBWebImageDownloaderFactoryProtocol, OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface FBWebImageDownloaderReuseFactory : NSObject <FBWebImageDownloaderFactoryProtocol> {

	NSMutableDictionary* _factoryMap;
	id<FBWebImageDownloaderFactoryProtocol> _factory;
	long long _queueType;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<FBWebImageDownloaderFactoryProtocol> factory;              //@synthesize factory=_factory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)downloaderForType:(id)arg1 ;
-(id<FBWebImageDownloaderFactoryProtocol>)factory;
-(id)initWithFactory:(id)arg1 ;
@end

