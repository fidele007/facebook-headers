/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, UIView, RCTUIManager;

@interface RCTViewPropertyMapper : NSObject {

	NSNumber* _viewTag;
	UIView* _cachedView;
	RCTUIManager* _uiManager;

}

@property (assign,nonatomic,__weak) UIView * cachedView;                   //@synthesize cachedView=_cachedView - In the implementation block
@property (assign,nonatomic,__weak) RCTUIManager * uiManager;              //@synthesize uiManager=_uiManager - In the implementation block
@property (nonatomic,readonly) NSNumber * viewTag;                         //@synthesize viewTag=_viewTag - In the implementation block
-(RCTUIManager *)uiManager;
-(id)initWithViewTag:(id)arg1 uiManager:(id)arg2 ;
-(void)updateViewWithDictionary:(id)arg1 ;
-(NSNumber *)viewTag;
-(UIView *)cachedView;
-(void)setCachedView:(UIView *)arg1 ;
-(void)setUiManager:(RCTUIManager *)arg1 ;
-(id)init;
@end

