/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIColor, UIButton;


@protocol FBGroupsLandingHeaderViewProtocol <NSObject>
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain,readonly) UIButton * button; 
@property (nonatomic,retain) UIColor * separatorColor; 
@property (assign,nonatomic) BOOL buttonImageOnRight; 
@required
+(double)headerHeight;
-(void)setButtonImageOnRight:(BOOL)arg1;
-(BOOL)buttonImageOnRight;
-(UIButton *)button;
-(void)setTextColor:(id)arg1;
-(NSString *)text;
-(void)setText:(id)arg1;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(id)arg1;
-(UIColor *)textColor;

@end

