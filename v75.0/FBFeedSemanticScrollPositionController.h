/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSemanticScrollPositionController.h>

@class FBFeedSemanticScrollPositionControllerListenerAnnouncer, NSString;

@interface FBFeedSemanticScrollPositionController : NSObject <FBSemanticScrollPositionController> {

	FBFeedSemanticScrollPositionControllerListenerAnnouncer* _listenerAnnouncer;
	BOOL _isAtTop;
	BOOL _isScrolling;
	BOOL _isDragging;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isAtTop;
-(void)setIsAtTop:(BOOL)arg1 ;
-(id)init;
-(BOOL)isDragging;
-(void)setIsScrolling:(BOOL)arg1 ;
-(BOOL)isScrolling;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)setIsDragging:(BOOL)arg1 ;
@end

