/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString;

@interface FBIntermixedTabEntryPointCellModel : NSObject {

	unsigned long long _type;
	unsigned long long _glyphName;
	NSString* _title;
	NSString* _subtitle;
	CKTypedComponentAction<> _action;

}

@property (nonatomic,readonly) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;                 //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> action;              //@synthesize action=_action - In the implementation block
-(id)initWithType:(unsigned long long)arg1 glyphName:(unsigned long long)arg2 title:(id)arg3 subtitle:(id)arg4 action:(CKTypedComponentAction<>)arg5 ;
-(unsigned long long)glyphName;
-(unsigned long long)type;
-(CKTypedComponentAction<>)action;
-(NSString *)title;
-(NSString *)subtitle;
@end

