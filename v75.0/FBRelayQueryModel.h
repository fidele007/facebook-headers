/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary;

@interface FBRelayQueryModel : NSObject {

	mutex _lock;
	NSMutableDictionary* _moduleToKeyToFragment;
	NSMutableDictionary* _nameToFragment;

}
+(id)sharedModel;
-(id)_loadFragmentsForModuleFromDisk:(id)arg1 ;
-(id)_registerFragmentMap:(id)arg1 forModule:(id)arg2 ;
-(id)_loadFragmentsForModule:(id)arg1 fromURL:(id)arg2 ;
-(id)_loadFragmentsForModule:(id)arg1 fromNodeRoot:(id)arg2 ;
-(void)loadFragmentsForModuleFromDisk:(id)arg1 ;
-(id)fragmentMapforModule:(id)arg1 ;
-(id)init;
@end
