/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface CBDEye : NSObject {

	long long _type;
	Eye* _eye;

}

@property (assign,nonatomic) Eye* eye;                    //@synthesize eye=_eye - In the implementation block
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
-(_GLKMatrix4)perspectiveMatrixWithZNear:(float)arg1 zFar:(float)arg2 ;
-(_GLKMatrix4)eyeViewMatrix;
-(id)initWithEye:(Eye*)arg1 ;
-(Eye*)eye;
-(void)setEye:(Eye*)arg1 ;
-(id)init;
-(void)setType:(long long)arg1 ;
-(long long)type;
@end
