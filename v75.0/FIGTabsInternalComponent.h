/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FIGTabsInternalComponent : CKCompositeComponent {

	CKTypedComponentAction<NSNumber *> _tapAction;

}
+(id)newWithItems:(id)arg1 style:(unsigned long long)arg2 selectedIndex:(unsigned long long)arg3 tapAction:(CKTypedComponentAction<NSNumber *>)arg4 options:(const FIGTabsOptions*)arg5 internalOptions:(const FIGTabsInternalOptions*)arg6 ;
-(void)segmentedComponent:(id)arg1 didSelectItemAtIndex:(id)arg2 ;
-(void)overflowingSegmentedComponent:(id)arg1 didSelectItemAtIndex:(id)arg2 ;
@end
