/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlatformShareDialogViewControllerBase.h>

@class FBPlatformActionProcessor;

@interface FBPlatformOpenGraphActionDialogViewController : FBPlatformShareDialogViewControllerBase {

	FBPlatformActionProcessor* _processor;

}
-(id)parseResponse:(id)arg1 ;
-(id)composerTraits;
-(BOOL)validateAction;
-(id)processor;
-(void)platformActionProcessor:(id)arg1 didCompleteOperation:(id)arg2 ;
@end

