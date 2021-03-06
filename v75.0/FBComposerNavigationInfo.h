/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBComposerDestinationType, FBPopoverInfo;

@interface FBComposerNavigationInfo : NSObject {

	FBComposerDestinationType* _destinationType;
	id _navigationPayload;
	unsigned long long _method;
	FBPopoverInfo* _popoverInfo;
	unsigned long long _options;
	unsigned long long _destinationToPushBehindIn;

}

@property (nonatomic,readonly) FBComposerDestinationType * destinationType;               //@synthesize destinationType=_destinationType - In the implementation block
@property (nonatomic,readonly) id navigationPayload;                                      //@synthesize navigationPayload=_navigationPayload - In the implementation block
@property (nonatomic,readonly) unsigned long long method;                                 //@synthesize method=_method - In the implementation block
@property (nonatomic,readonly) FBPopoverInfo * popoverInfo;                               //@synthesize popoverInfo=_popoverInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long destinationToPushBehindIn;              //@synthesize destinationToPushBehindIn=_destinationToPushBehindIn - In the implementation block
-(id)initWithDestinationType:(id)arg1 navigationPayload:(id)arg2 method:(unsigned long long)arg3 options:(unsigned long long)arg4 destinationToPushBehind:(unsigned long long)arg5 popoverInfo:(id)arg6 ;
-(unsigned long long)destinationToPushBehindIn;
-(id)navigationPayload;
-(FBPopoverInfo *)popoverInfo;
-(FBComposerDestinationType *)destinationType;
-(unsigned long long)options;
-(unsigned long long)method;
@end

