/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBToastQueuing.h>

@protocol FBToastQueuing;
@class NSString;

@interface FBFilteredToastQueue : NSObject <FBToastQueuing> {

	/*^block*/id _predicate;
	id<FBToastQueuing> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToastQueue:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)queueToast:(id)arg1 ;
-(void)removeToast:(id)arg1 ;
-(id)peek;
-(BOOL)isEmpty;
-(id)dequeue;
@end

