/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>
#import <Facebook/FBProfileSingleEditStatusListener.h>

@class NSString;

@interface FBProfileIntroCardComponentController : CKComponentController <FBComponentControllerWorkingRangeListenerProviding, FBComponentControllerWorkingRangeListening, FBProfileSingleEditStatusListener> {

	BOOL _hasLogged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)componentEnteredVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(id)workingRangeListenerForComponent:(id)arg1 ;
-(void)didUnmount;
-(id)myComponent;
-(void)didUpdateProfileSingleEditStatus:(BOOL)arg1 ;
@end

