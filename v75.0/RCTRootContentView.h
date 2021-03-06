/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTView.h>
#import <Facebook/RCTInvalidating.h>

@class RCTBridge, UIColor, RCTTouchHandler, NSString;

@interface RCTRootContentView : RCTView <RCTInvalidating> {

	RCTBridge* _bridge;
	UIColor* _backgroundColor;
	BOOL _contentHasAppeared;
	BOOL _passThroughTouches;
	RCTTouchHandler* _touchHandler;

}

@property (nonatomic,readonly) BOOL contentHasAppeared;                     //@synthesize contentHasAppeared=_contentHasAppeared - In the implementation block
@property (nonatomic,readonly) RCTTouchHandler * touchHandler;              //@synthesize touchHandler=_touchHandler - In the implementation block
@property (assign,nonatomic) BOOL passThroughTouches;                       //@synthesize passThroughTouches=_passThroughTouches - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)insertReactSubview:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)passThroughTouches;
-(void)setPassThroughTouches:(BOOL)arg1 ;
-(BOOL)contentHasAppeared;
-(id)initWithFrame:(CGRect)arg1 bridge:(id)arg2 reactTag:(id)arg3 sizeFlexiblity:(long long)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)invalidate;
-(RCTTouchHandler *)touchHandler;
@end

