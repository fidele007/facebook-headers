/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent;

@interface CKCenterLayoutComponent : CKComponent {

	unsigned long long _centeringOptions;
	unsigned long long _sizingOptions;
	CKComponent* _child;

}
+(id)newWithCenteringOptions:(unsigned long long)arg1 sizingOptions:(unsigned long long)arg2 child:(id)arg3 size:(const CKComponentSize*)arg4 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end
