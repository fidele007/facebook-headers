/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLPagedDownloadRequest.h>
#import <Facebook/FBReactionDownloadRequestProtocol.h>

@class NSString;

@interface FBReactionDataSourceDownloadRequest : FBGraphQLPagedDownloadRequest <FBReactionDownloadRequestProtocol> {

	/*^block*/id _downloadRequestBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)responseProcessingBlock;
-(id)newQueryWithCursor:(id)arg1 ;
-(id)initWithTargetID:(id)arg1 downloadRequestBlock:(/*^block*/id)arg2 callbackPerformer:(id)arg3 ;
@end
