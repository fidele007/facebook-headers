/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface CDScope : NSObject {

	shared_ptr<compactdisk::experimental::Scope>* _scope;

}

@property (nonatomic,readonly) shared_ptr<compactdisk::experimental::Scope>* scope;              //@synthesize scope=_scope - In the implementation block
-(id)initWithScope:(shared_ptr<compactdisk::experimental::Scope>*)arg1 ;
-(void)invalidate;
-(id)initWithUUID:(id)arg1 ;
-(shared_ptr<compactdisk::experimental::Scope>*)scope;
-(id)uuid;
@end
