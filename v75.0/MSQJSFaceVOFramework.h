/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/MSQScriptingFramework.h>

@class JSValue;

@interface MSQJSFaceVOFramework : MSQScriptingFramework {

	int maxFaces;
	int maxPoints;
	SCNVector3 landmarks3d[357];
	SCNMatrix4 matrix;
	JSValue* updateFacesJS;

}
-(id)initWithContext:(id)arg1 document:(id)arg2 ;
-(void)initScript:(id)arg1 fileName:(id)arg2 ;
-(void)initNativeMethods:(id)arg1 ;
-(BOOL)validateFace:(id)arg1 index:(long long)arg2 ;
-(BOOL)validatePoint:(id)arg1 index:(long long)arg2 ;
-(void)updateFace:(id)arg1 isHighPoly:(BOOL)arg2 ;
@end
