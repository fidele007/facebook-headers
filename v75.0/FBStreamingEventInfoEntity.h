/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamingEventEntity.h>

@protocol FBQueriedActorFieldsProtocol;
@class NSString, NSMutableDictionary, FBMemModelObject, UIImage, UIColor;

@interface FBStreamingEventInfoEntity : FBStreamingEventEntity {

	NSString* _text;
	NSMutableDictionary* _callToActionStateToTitle;
	NSMutableDictionary* _callToActionStateToImage;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _target;
	UIImage* _iconImage;
	UIColor* _iconBackgroundColor;
	unsigned long long _callToActionType;
	unsigned long long _shimmerDirection;

}

@property (nonatomic,retain) FBMemModelObject*<FBQueriedActorFieldsProtocol> target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                                 //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIColor * iconBackgroundColor;                                       //@synthesize iconBackgroundColor=_iconBackgroundColor - In the implementation block
@property (assign,nonatomic) unsigned long long callToActionType;                                 //@synthesize callToActionType=_callToActionType - In the implementation block
@property (assign,nonatomic) unsigned long long shimmerDirection;                                 //@synthesize shimmerDirection=_shimmerDirection - In the implementation block
-(void)setCallToActionType:(unsigned long long)arg1 ;
-(id)initWithText:(id)arg1 iconImage:(id)arg2 iconBackgroundColor:(id)arg3 ;
-(BOOL)canPerformCallToAction;
-(BOOL)isFocal;
-(id)_initWithText:(id)arg1 iconBackgroundColor:(id)arg2 ;
-(unsigned long long)callToActionType;
-(id)_keyForState:(unsigned long long)arg1 ;
-(id)initWithText:(id)arg1 networkImage:(id)arg2 iconBackgroundColor:(id)arg3 ;
-(id)callToActionImageForState:(unsigned long long)arg1 ;
-(void)setCallToActionImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)callToActionTitleForState:(unsigned long long)arg1 ;
-(void)setCallToActionTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(UIColor *)iconBackgroundColor;
-(void)setIconBackgroundColor:(UIColor *)arg1 ;
-(unsigned long long)shimmerDirection;
-(void)setShimmerDirection:(unsigned long long)arg1 ;
-(void)setTarget:(FBMemModelObject*<FBQueriedActorFieldsProtocol>)arg1 ;
-(unsigned long long)type;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)target;
-(id)attributedText;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
@end

