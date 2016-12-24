/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAccessibleButton.h>

@class NSMutableDictionary;

@interface FBPersonFriendableButton : FBAccessibleButton {

	NSMutableDictionary* _customActionToImageMap;
	BOOL _onlyDisplayCustomImages;
	unsigned long long _displayedAction;

}

@property (assign,nonatomic) unsigned long long displayedAction;              //@synthesize displayedAction=_displayedAction - In the implementation block
@property (assign,nonatomic) BOOL onlyDisplayCustomImages;                    //@synthesize onlyDisplayCustomImages=_onlyDisplayCustomImages - In the implementation block
-(id)initWithBackgroundImages:(BOOL)arg1 ;
-(void)cancelBounce;
-(id)initWithNoBackgroundImages;
-(BOOL)onlyDisplayCustomImages;
-(void)setOnlyDisplayCustomImages:(BOOL)arg1 ;
-(void)setDisplayedAction:(unsigned long long)arg1 ;
-(unsigned long long)displayedAction;
-(void)clearCustomImages;
-(void)addCustomImage:(id)arg1 forAction:(unsigned long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)bounce;
@end

