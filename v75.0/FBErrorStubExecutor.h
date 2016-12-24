/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSimpleJSUnderlyingExecutor.h>

@class NSError, NSString;

@interface FBErrorStubExecutor : NSObject <FBSimpleJSUnderlyingExecutor> {

	NSError* _error;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
-(id)executorCreationError;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithError:(id)arg1 ;
@end
