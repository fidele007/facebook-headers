/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface FBMLFaceRecognitionRequestResponse : NSObject {

	NSSet* _recognitionResultSet;
	unsigned long long _faceCropSize;

}

@property (nonatomic,copy,readonly) NSSet * recognitionResultSet;              //@synthesize recognitionResultSet=_recognitionResultSet - In the implementation block
@property (nonatomic,readonly) unsigned long long faceCropSize;                //@synthesize faceCropSize=_faceCropSize - In the implementation block
-(id)initWithResultSet:(id)arg1 faceCropSize:(unsigned long long)arg2 ;
-(unsigned long long)faceCropSize;
-(NSSet *)recognitionResultSet;
@end

