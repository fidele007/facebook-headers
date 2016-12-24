/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>
#import <Facebook/FBNetworkCDNRequestProtocol.h>

@class NSURL, NSString;

@interface FBImageDownloadRequest : FBNetworkerRequest <FBNetworkCDNRequestProtocol> {

	/*^block*/id _responseHandlerFactory;
	BOOL _enabledCDNStatusQuery;
	BOOL _enabledCacheStatusQuery;
	BOOL _squareSafeImage;
	NSURL* _URL;
	double _currentDownloadProgress;
	unsigned long long _firstByte;

}

@property (nonatomic,retain,readonly) NSURL * URL;                        //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) double currentDownloadProgress;              //@synthesize currentDownloadProgress=_currentDownloadProgress - In the implementation block
@property (assign,nonatomic) BOOL squareSafeImage;                        //@synthesize squareSafeImage=_squareSafeImage - In the implementation block
@property (nonatomic,readonly) unsigned long long firstByte;              //@synthesize firstByte=_firstByte - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL enabledCacheStatusQuery;                //@synthesize enabledCacheStatusQuery=_enabledCacheStatusQuery - In the implementation block
-(id)networkRequest;
-(id)initWithURL:(id)arg1 startingAtByte:(unsigned long long)arg2 callbackPerformer:(id)arg3 ;
-(BOOL)enabledCacheStatusQuery;
-(void)setEnabledCacheStatusQuery:(BOOL)arg1 ;
-(BOOL)squareSafeImage;
-(void)setSquareSafeImage:(BOOL)arg1 ;
-(unsigned long long)firstByte;
-(double)currentDownloadProgress;
-(void)setCurrentDownloadProgress:(double)arg1 ;
-(id)initWithURL:(id)arg1 startingAtByte:(unsigned long long)arg2 callbackPerformer:(id)arg3 responseHandlerFactory:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)URL;
@end

