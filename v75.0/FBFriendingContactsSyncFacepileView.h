/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBFacepileView, NSArray;

@interface FBFriendingContactsSyncFacepileView : UIView {

	FBFacepileView* _facepileView;
	NSArray* _profileImageURLs;

}

@property (nonatomic,copy) NSArray * profileImageURLs;              //@synthesize profileImageURLs=_profileImageURLs - In the implementation block
+(CGSize)sizeThatFitsNumberOfFacepile:(unsigned long long)arg1 size:(CGSize)arg2 ;
+(id)defaultConfig;
-(NSArray *)profileImageURLs;
-(void)setProfileImageURLs:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

