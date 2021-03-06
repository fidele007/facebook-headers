/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, FB360InitialViewParams, NSString;

@interface FB360PhotoSpecifier : NSObject {

	NSURL* _resourceFileURL;
	unsigned long long _photoSize;
	FB360InitialViewParams* _initialViewParams;
	NSString* _analyticsModule;
	NSString* _photoId;

}

@property (nonatomic,copy,readonly) NSURL * resourceFileURL;                            //@synthesize resourceFileURL=_resourceFileURL - In the implementation block
@property (nonatomic,readonly) unsigned long long photoSize;                            //@synthesize photoSize=_photoSize - In the implementation block
@property (nonatomic,readonly) FB360InitialViewParams * initialViewParams;              //@synthesize initialViewParams=_initialViewParams - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                         //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoId;                                 //@synthesize photoId=_photoId - In the implementation block
-(NSString *)analyticsModule;
-(FB360InitialViewParams *)initialViewParams;
-(id)initWithResourceFileURL:(id)arg1 photoSize:(unsigned long long)arg2 initialViewParams:(id)arg3 photoId:(id)arg4 analyticsModule:(id)arg5 ;
-(NSURL *)resourceFileURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)photoId;
-(unsigned long long)photoSize;
@end

