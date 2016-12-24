/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/CKComponentProvider.h>

@class CKComponentHostingView, NSArray, NSString;

@interface FBGroupsInviteePanelView : UIView <CKComponentHostingViewDelegate, CKComponentProvider> {

	CKComponentHostingView* _componentHostingView;
	NSArray* _selectedAvatars;

}

@property (nonatomic,copy) NSArray * selectedAvatars;               //@synthesize selectedAvatars=_selectedAvatars - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(NSArray *)selectedAvatars;
-(void)setSelectedAvatars:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 selectedAvatars:(id)arg2 session:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
