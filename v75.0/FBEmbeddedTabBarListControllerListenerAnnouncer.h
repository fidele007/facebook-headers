/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBEmbeddedTabBarListControllerListener.h>

@class NSString;

@interface FBEmbeddedTabBarListControllerListenerAnnouncer : FBAnnouncerBase <FBEmbeddedTabBarListControllerListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectTabAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)didLoadContentView:(id)arg1 forTabAtIndex:(unsigned long long)arg2 ;
-(void)didUpdateHeaderViewSize:(CGSize)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

