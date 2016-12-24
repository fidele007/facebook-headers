/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBCommentsModelControllerConfiguration, FBMemComment;

@interface FBOfflineCommentsCacheObject : FBValueObject <NSCopying, NSCoding> {

	FBCommentsModelControllerConfiguration* _commentsModelControllerConfiguration;
	FBMemComment* _comment;

}

@property (nonatomic,copy,readonly) FBCommentsModelControllerConfiguration * commentsModelControllerConfiguration;              //@synthesize commentsModelControllerConfiguration=_commentsModelControllerConfiguration - In the implementation block
@property (nonatomic,copy,readonly) FBMemComment * comment;                                                                     //@synthesize comment=_comment - In the implementation block
-(id)initWithCommentsModelControllerConfiguration:(id)arg1 comment:(id)arg2 ;
-(FBCommentsModelControllerConfiguration *)commentsModelControllerConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMemComment *)comment;
@end

