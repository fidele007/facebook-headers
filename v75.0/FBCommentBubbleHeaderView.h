/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBubbleHeaderView.h>
#import <Facebook/FBCommentStreamViewHeaderProtocol.h>

@class NSString, UIButton, NSArray, NSAttributedString;

@interface FBCommentBubbleHeaderView : FBBubbleHeaderView <FBCommentStreamViewHeaderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UIButton * backButton; 
@property (nonatomic,readonly) UIButton * doneButton; 
@property (assign,nonatomic) BOOL shouldShowDoneButton; 
@property (nonatomic,copy) NSArray * leftHeaderButtons; 
@property (nonatomic,copy) NSArray * rightHeaderButtons; 
@property (nonatomic,copy) NSAttributedString * subtitle; 
+(UIEdgeInsets)headerContentInsets;
+(double)headerHeight;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

