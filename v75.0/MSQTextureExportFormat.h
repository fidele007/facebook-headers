/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MSQTextureExportFormat : NSObject <NSCopying> {

	unsigned long long _subtype;
	long long _pvr_format;
	long long _pvr_quality;
	BOOL _pvr_ditheringEnabled;
	long long _etc2_format;
	long long _etc2_quality;
	BOOL _etc2_ditheringEnabled;

}
+(id)etc2WithFormat:(long long)arg1 quality:(long long)arg2 ditheringEnabled:(BOOL)arg3 ;
+(id)pvrWithFormat:(long long)arg1 quality:(long long)arg2 ditheringEnabled:(BOOL)arg3 ;
-(void)matchPvr:(/*^block*/id)arg1 etc2:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

