/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageProductUnlikeMutationOptimisticPayloadFactoryProtocol.h>

@class FBMemPageProduct, NSString;

@interface DEPRECATED_FBPageProductUnlikeMutationOptimisticPayloadFactory : NSObject <FBPageProductUnlikeMutationOptimisticPayloadFactoryProtocol> {

	FBMemPageProduct* _product;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)optimisticPayload:(id)arg1 ;
-(id)rollbackOptimisticPayload:(id)arg1 ;
-(id)buildPageProductFromInput:(id)arg1 withDoesLikePage:(id)arg2 likerCount:(id)arg3 ;
-(id)initWithPageProduct:(id)arg1 ;
@end

