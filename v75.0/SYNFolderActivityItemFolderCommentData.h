/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SRUser, NSString;

@interface SYNFolderActivityItemFolderCommentData : NSObject {

	BOOL _showProfilePic;
	SRUser* _sender;
	NSString* _text;

}

@property (nonatomic,retain) SRUser * sender;                  //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * text;                    //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL showProfilePic;              //@synthesize showProfilePic=_showProfilePic - In the implementation block
-(BOOL)showProfilePic;
-(void)setShowProfilePic:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(SRUser *)sender;
-(void)setSender:(SRUser *)arg1 ;
@end
