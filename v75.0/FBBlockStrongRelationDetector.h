/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBBlockStrongRelationDetector : NSObject {

	void* forwarding;
	int flags;
	int size;
	/*function pointer*/void* byref_keep;
	/*function pointer*/void* byref_dispose;
	void** captured[16];
	BOOL _strong;

}

@property (assign,getter=isStrong,nonatomic) BOOL strong;              //@synthesize strong=_strong - In the implementation block
+(id)alloc;
-(oneway void)trueRelease;
-(BOOL)isStrong;
-(void)setStrong:(BOOL)arg1 ;
-(id)retain;
-(oneway void)release;
@end
