/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent;

@interface FIGLabelTextComponent : CKComponent {

	CKComponent* _richTextComponent;

}
+(id)newWithString:(id)arg1 font:(id)arg2 color:(id)arg3 maximumNumberOfLines:(unsigned long long)arg4 options:(const FIGLabelTextComponentOptions*)arg5 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

