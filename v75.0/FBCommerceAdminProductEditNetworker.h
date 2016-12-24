/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, NSString;

@interface FBCommerceAdminProductEditNetworker : NSObject {

	FBUserSession* _session;
	NSString* _pageID;

}
-(id)initWithSession:(id)arg1 pageID:(id)arg2 ;
-(void)fetchProductWithID:(id)arg1 successBlock:(/*^block*/id)arg2 ;
-(void)createProductWithProductInfo:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)updateProductWithProductInfo:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)deleteProductWithProductInfo:(id)arg1 successBlock:(/*^block*/id)arg2 errorBlock:(/*^block*/id)arg3 ;
@end
