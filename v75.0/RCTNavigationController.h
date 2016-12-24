/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationBarDelegate.h>

@class NSString;

@interface RCTNavigationController : UINavigationController <UINavigationBarDelegate> {

	/*^block*/id _scrollCallback;
	unsigned long long _navigationLock;

}

@property (assign,nonatomic) unsigned long long navigationLock;              //@synthesize navigationLock=_navigationLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)navigationLock;
-(void)setNavigationLock:(unsigned long long)arg1 ;
-(id)initWithScrollCallback:(/*^block*/id)arg1 ;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
@end
