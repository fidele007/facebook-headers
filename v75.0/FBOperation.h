/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Foundation/NSOperation.h>

@interface FBOperation : NSOperation {

	/*^block*/id _block;
	long long _stateFlag;
	recursive_mutex _lock;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)_setStateFlag:(long long)arg1 ;
-(void)_completeOperation;
-(long long)_stateFlag;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

