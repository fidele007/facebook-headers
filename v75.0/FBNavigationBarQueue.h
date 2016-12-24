/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationBarDelegate.h>

@class NSMutableArray, NSString;

@interface FBNavigationBarQueue : NSObject <UINavigationBarDelegate> {

	BOOL _animationPending;
	NSMutableArray* _pendingItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_processNextItemForNavigationBar:(id)arg1 ;
-(void)_delayProcessingNextItemForNavigationBar:(id)arg1 ;
-(void)processItem:(id)arg1 forNavigationBar:(id)arg2 ;
-(id)init;
-(void)navigationBar:(id)arg1 didPushItem:(id)arg2 ;
-(void)navigationBar:(id)arg1 didPopItem:(id)arg2 ;
-(long long)positionForBar:(id)arg1 ;
@end
