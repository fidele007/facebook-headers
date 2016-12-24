/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebImageDownloader.h>

@protocol FBWebImageDownloader, FBWebImageSpecifier;
@class NSDictionary, FBScenePath, NSSet, NSString;

@interface FBWebImageAutoRetryDownloader : NSObject <FBWebImageDownloader> {

	id<FBWebImageDownloader> _webImageDownloader;
	NSDictionary* _retryableErrorDomainAndCodes;
	id<FBWebImageSpecifier> _currentSpecifier;
	FBScenePath* _currentScenePath;
	NSSet* _currentAnalyticsTags;
	BOOL _alreadyRetried;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)downloadWithSpecifier:(id)arg1 scenePath:(id)arg2 analyticsTags:(id)arg3 queue:(id)arg4 downloadBlock:(/*^block*/id)arg5 ;
-(void)_handleResponse:(id)arg1 filterSpecifier:(id)arg2 queue:(id)arg3 downloadBlock:(/*^block*/id)arg4 ;
-(id)initWithWebImageDownloader:(id)arg1 retryableErrorDomainAndCodes:(id)arg2 ;
-(void)cancel;
@end

