/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent;

@interface FBTarotRatioLayoutComponent : CKComponent {

	double _ratio;
	unsigned long long _sizingOption;
	CKComponent* _component;

}

@property (assign,nonatomic) double ratio;                                 //@synthesize ratio=_ratio - In the implementation block
@property (assign,nonatomic) unsigned long long sizingOption;              //@synthesize sizingOption=_sizingOption - In the implementation block
@property (nonatomic,retain) CKComponent * component;                      //@synthesize component=_component - In the implementation block
+(id)newWithRatio:(double)arg1 sizingOption:(unsigned long long)arg2 size:(const CKComponentSize*)arg3 component:(id)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(unsigned long long)sizingOption;
-(void)setSizingOption:(unsigned long long)arg1 ;
-(void)setComponent:(CKComponent *)arg1 ;
-(CKComponent *)component;
-(double)ratio;
-(void)setRatio:(double)arg1 ;
@end

