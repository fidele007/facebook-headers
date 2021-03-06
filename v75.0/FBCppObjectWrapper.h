/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBInvalidating.h>

@class NSString;

@interface FBCppObjectWrapper : NSObject <FBInvalidating> {

	mutex _lock;
	BOOL _valid;
	shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>* _object;

}

@property (nonatomic,readonly) shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>* object;              //@synthesize object=_object - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                                                            //@synthesize valid=_valid - In the implementation block
-(void)invalidate;
-(BOOL)isValid;
-(shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>*)object;
-(id)initWithObject:(const shared_ptr<facebook::mobile::xplat::compactdisk::Invalidatable>*)arg1 ;
@end

