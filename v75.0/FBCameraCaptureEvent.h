/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraCaptureEvent.h>

@protocol FBCameraCaptureEvent <NSObject>
@required
-(void)emit:(unsigned long long)arg1;

@end


@class FBEventEmitter, NSString;

@interface FBCameraCaptureEvent : NSObject <FBCameraCaptureEvent> {

	FBEventEmitter* _eventEmitter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)emit:(unsigned long long)arg1 ;
-(id)init;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end

