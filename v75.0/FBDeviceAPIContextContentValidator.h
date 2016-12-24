/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBContentValidating.h>

@class FBGraphBatchRequest, NSString;

@interface FBDeviceAPIContextContentValidator : NSObject <FBContentValidating> {

	FBGraphBatchRequest* _batchRequest;

}

@property (nonatomic,readonly) FBGraphBatchRequest * batchRequest;              //@synthesize batchRequest=_batchRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)validateContent:(id)arg1 responseProcessor:(id)arg2 error:(id*)arg3 ;
-(id)initWithBatchRequest:(id)arg1 ;
-(FBGraphBatchRequest *)batchRequest;
-(BOOL)_isValidDeviceAPIResponse:(id)arg1 ;
@end

