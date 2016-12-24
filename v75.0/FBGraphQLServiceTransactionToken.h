/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceTransactionMutating.h>

@protocol FBServiceTransactionMutating;
@class NSString;

@interface FBGraphQLServiceTransactionToken : NSObject <FBServiceTransactionMutating> {

	BOOL _cancelled;
	BOOL _cachedFetchCompleted;
	BOOL _networkFetchCompleted;
	id<FBServiceTransactionMutating> _serviceToken;

}

@property (nonatomic,retain) id<FBServiceTransactionMutating> serviceToken;              //@synthesize serviceToken=_serviceToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)changePriorityToNewPriority:(long long)arg1 ;
-(void)cancel;
-(id<FBServiceTransactionMutating>)serviceToken;
-(void)setServiceToken:(id<FBServiceTransactionMutating>)arg1 ;
@end

