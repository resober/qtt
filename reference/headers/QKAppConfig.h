//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LCBaseModel.h"

@class NSArray, NSDictionary, NSString, QKAppUsable, QKMsgPush, QKShareContent, QKShareInvite, QKUpdate, QKVideoEndAdModel, QKWeiXinKey, QKgloablConfig, QKread_timer_config, SplashModel, SwitchPushInfo, TemplateConfig, VideoReadConfig;

@interface QKAppConfig : LCBaseModel
{
    int _policy_app_my_menu;
    int _new_user_redbag_enable;
    int _is_firstLogin;
    NSDictionary *_H5URL;
    QKUpdate *_updateInfo;
    VideoReadConfig *_videoReadConfig;
    QKWeiXinKey *_weixin_key;
    QKShareInvite *_share_invite;
    QKShareContent *_share_content;
    QKgloablConfig *_gloablConfig;
    QKMsgPush *_msg_push;
    QKread_timer_config *_read_timer_config;
    SplashModel *_splashModel;
    QKVideoEndAdModel *_videoEndAdModel;
    long long _need_active_notice;
    NSArray *_member_tags;
    NSString *_iconZip;
    NSString *_need_active_notice_img;
    long long _is_first;
    long long _is_ios_review;
    long long _is_ios_high_risk;
    NSArray *_h5_url_cache;
    TemplateConfig *_local_template;
    SwitchPushInfo *_switch_push_info;
    QKAppUsable *_app_unuseable;
    NSArray *_ios_schema_black_list;
    NSDictionary *_feed_preload;
}

@property(retain, nonatomic) NSDictionary *feed_preload; // @synthesize feed_preload=_feed_preload;
@property(retain, nonatomic) NSArray *ios_schema_black_list; // @synthesize ios_schema_black_list=_ios_schema_black_list;
@property(nonatomic) int is_firstLogin; // @synthesize is_firstLogin=_is_firstLogin;
@property(nonatomic) int new_user_redbag_enable; // @synthesize new_user_redbag_enable=_new_user_redbag_enable;
@property(retain, nonatomic) QKAppUsable *app_unuseable; // @synthesize app_unuseable=_app_unuseable;
@property(retain, nonatomic) SwitchPushInfo *switch_push_info; // @synthesize switch_push_info=_switch_push_info;
@property(nonatomic) int policy_app_my_menu; // @synthesize policy_app_my_menu=_policy_app_my_menu;
@property(retain, nonatomic) TemplateConfig *local_template; // @synthesize local_template=_local_template;
@property(retain, nonatomic) NSArray *h5_url_cache; // @synthesize h5_url_cache=_h5_url_cache;
@property(nonatomic) long long is_ios_high_risk; // @synthesize is_ios_high_risk=_is_ios_high_risk;
@property(nonatomic) long long is_ios_review; // @synthesize is_ios_review=_is_ios_review;
@property(nonatomic) long long is_first; // @synthesize is_first=_is_first;
@property(copy, nonatomic) NSString *need_active_notice_img; // @synthesize need_active_notice_img=_need_active_notice_img;
@property(copy, nonatomic) NSString *iconZip; // @synthesize iconZip=_iconZip;
@property(retain, nonatomic) NSArray *member_tags; // @synthesize member_tags=_member_tags;
@property(nonatomic) long long need_active_notice; // @synthesize need_active_notice=_need_active_notice;
@property(retain, nonatomic) QKVideoEndAdModel *videoEndAdModel; // @synthesize videoEndAdModel=_videoEndAdModel;
@property(retain, nonatomic) SplashModel *splashModel; // @synthesize splashModel=_splashModel;
@property(retain, nonatomic) QKread_timer_config *read_timer_config; // @synthesize read_timer_config=_read_timer_config;
@property(retain, nonatomic) QKMsgPush *msg_push; // @synthesize msg_push=_msg_push;
@property(retain, nonatomic) QKgloablConfig *gloablConfig; // @synthesize gloablConfig=_gloablConfig;
@property(retain, nonatomic) QKShareContent *share_content; // @synthesize share_content=_share_content;
@property(retain, nonatomic) QKShareInvite *share_invite; // @synthesize share_invite=_share_invite;
@property(retain, nonatomic) QKWeiXinKey *weixin_key; // @synthesize weixin_key=_weixin_key;
@property(retain, nonatomic) VideoReadConfig *videoReadConfig; // @synthesize videoReadConfig=_videoReadConfig;
@property(retain, nonatomic) QKUpdate *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(retain, nonatomic) NSDictionary *H5URL; // @synthesize H5URL=_H5URL;
- (void).cxx_destruct;
- (id)initWithAttribute:(id)arg1 realTime:(_Bool)arg2;
- (id)initWithAttribute:(id)arg1;

@end
