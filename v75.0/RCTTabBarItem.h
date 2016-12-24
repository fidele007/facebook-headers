/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UITapGestureRecognizer, UITabBarItem, UIImage;

@interface RCTTabBarItem : UIView {

	UITapGestureRecognizer* _selectRecognizer;
	BOOL _renderAsOriginal;
	BOOL _selected;
	UITabBarItem* _barItem;
	id _badge;
	UIImage* _icon;
	UIImage* _selectedIcon;
	long long _systemIcon;
	/*^block*/id _onPress;

}

@property (nonatomic,copy) id badge;                                       //@synthesize badge=_badge - In the implementation block
@property (nonatomic,retain) UIImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImage * selectedIcon;                       //@synthesize selectedIcon=_selectedIcon - In the implementation block
@property (assign,nonatomic) long long systemIcon;                         //@synthesize systemIcon=_systemIcon - In the implementation block
@property (assign,nonatomic) BOOL renderAsOriginal;                        //@synthesize renderAsOriginal=_renderAsOriginal - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UITabBarItem * barItem;                     //@synthesize barItem=_barItem - In the implementation block
@property (nonatomic,copy) id onPress;                                     //@synthesize onPress=_onPress - In the implementation block
-(id)reactViewController;
-(void)setOnPress:(id)arg1 ;
-(id)onPress;
-(UITabBarItem *)barItem;
-(void)setSystemIcon:(long long)arg1 ;
-(void)setSelectedIcon:(UIImage *)arg1 ;
-(UIImage *)selectedIcon;
-(long long)systemIcon;
-(BOOL)renderAsOriginal;
-(void)setRenderAsOriginal:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
-(id)badge;
-(void)setBadge:(id)arg1 ;
-(void)setBadgeColor:(id)arg1 ;
@end
