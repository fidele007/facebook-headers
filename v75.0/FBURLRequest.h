/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkRequest.h>

@class NSData, NSString, FBStreamFileInfo, NSURL;

@interface FBURLRequest : FBNetworkRequest {

	NSData* _body;
	NSString* _httpMethod;
	FBStreamFileInfo* _streamFileInfo;
	BOOL _shouldHandleCookies;
	NSURL* _URL;

}

@property (nonatomic,readonly) NSURL * URL;                                    //@synthesize URL=_URL - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleCookies;                         //@synthesize shouldHandleCookies=_shouldHandleCookies - In the implementation block
@property (nonatomic,readonly) FBStreamFileInfo * streamFileInfo; 
-(id)initWithHttpMethod:(id)arg1 body:(id)arg2 URL:(id)arg3 ;
-(id)generateRequest;
-(id)initWithStreamFileInfo:(id)arg1 URL:(id)arg2 ;
-(FBStreamFileInfo *)streamFileInfo;
-(BOOL)shouldHandleCookies;
-(void)setShouldHandleCookies:(BOOL)arg1 ;
-(id)debugDescription;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
@end

