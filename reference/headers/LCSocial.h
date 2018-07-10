//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LCShareActionSheetDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, QKShareModel, TencentOAuth, qq_share_delegate, weibo_share_delegate, weixin_share_delegate;
@protocol LCSocialDelegate;

@interface LCSocial : NSObject <LCShareActionSheetDelegate>
{
    long long _type;
    long long _shareContentType;
    QKShareModel *_shareModel;
    TencentOAuth *_tencentOAuth;
    id <LCSocialDelegate> _delegate;
    weibo_share_delegate *_weibo;
    weixin_share_delegate *_weixin;
    qq_share_delegate *_qq;
    NSString *_shortVersion;
    NSString *_shareContentiOSWay;
    NSString *_configiOSAppid;
    NSArray *_cdnServices;
    NSMutableArray *_gloableConfigShareWay;
    NSString *_userID;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSMutableArray *gloableConfigShareWay; // @synthesize gloableConfigShareWay=_gloableConfigShareWay;
@property(retain, nonatomic) NSArray *cdnServices; // @synthesize cdnServices=_cdnServices;
@property(copy, nonatomic) NSString *configiOSAppid; // @synthesize configiOSAppid=_configiOSAppid;
@property(copy, nonatomic) NSString *shareContentiOSWay; // @synthesize shareContentiOSWay=_shareContentiOSWay;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(retain, nonatomic) qq_share_delegate *qq; // @synthesize qq=_qq;
@property(retain, nonatomic) weixin_share_delegate *weixin; // @synthesize weixin=_weixin;
@property(retain, nonatomic) weibo_share_delegate *weibo; // @synthesize weibo=_weibo;
@property(nonatomic) id <LCSocialDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
@property(retain, nonatomic) QKShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(nonatomic) long long shareContentType; // @synthesize shareContentType=_shareContentType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)requestParam:(id)arg1 contentId:(id)arg2;
- (id)convertShareContentType:(long long)arg1;
- (id)shareTypeCorrespondingShareSource:(id)arg1;
- (void)updateUserID:(id)arg1;
- (void)updateShortVersion:(id)arg1 shareContentiOSWay:(id)arg2 gloableConfigShareWay:(id)arg3 appID:(id)arg4 CDNServices:(id)arg5;
- (void)shareActionSheetDismiss;
- (void)requestShareInfoWithParam:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)report:(long long)arg1 withShareModel:(id)arg2;
- (void)report:(long long)arg1 withSubcript:(id)arg2;
- (void)report:(long long)arg1 withContent:(id)arg2;
- (_Bool)handleSendResult:(int)arg1;
- (void)QQShare:(id)arg1;
- (_Bool)weiboShare:(id)arg1;
- (_Bool)wxShare:(long long)arg1 object:(id)arg2;
- (_Bool)followBizWithUserName:(id)arg1 msg:(id)arg2;
- (void)report:(long long)arg1 withObject:(id)arg2;
- (void)composeToWeixin:(id)arg1;
- (_Bool)shareWithType:(long long)arg1 object:(id)arg2;
- (_Bool)shareWithActionType:(id)arg1 content:(id)arg2;
- (void)shareAction:(id)arg1 withObject:(id)arg2;
- (void)subcriptShareWithActionType:(id)arg1 subcript:(id)arg2;
- (void)actionSheet:(id)arg1 subcriptClickedAtType:(id)arg2;
- (void)actionSheet:(id)arg1 contentClickedAtType:(id)arg2;
- (void)actionSheet:(id)arg1 clickedAtType:(id)arg2;
- (void)share_subcript:(id)arg1 shareBlock:(CDUnknownBlockType)arg2 bottomBlock:(CDUnknownBlockType)arg3;
- (void)share_content:(id)arg1 src:(long long)arg2 shareBlock:(CDUnknownBlockType)arg3 bottomBlock:(CDUnknownBlockType)arg4 actionTypeBlock:(CDUnknownBlockType)arg5;
- (_Bool)handleParams:(id)arg1 content:(id)arg2;
- (void)inviteShareMod:(id)arg1 targetIsShare:(id)arg2 target:(id)arg3;
- (void)inviteShareMod:(id)arg1 inviteFrom:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1;
- (void)registerSocial;
- (void)report;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
