//
//  UMPNSReturnCode.h
//  UMVerify
//
//  Copyright © 2019 umeng. All rights reserved.
//

#ifndef PNSReturnCode_h
#define PNSReturnCode_h

#import <Foundation/Foundation.h>


/// 接口成功
static NSString * const PNSCodeSuccess = @"600000";
/// 唤起授权页成功
static NSString * const PNSCodeLoginControllerPresentSuccess = @"600001";
/// 唤起授权页失败
static NSString * const PNSCodeLoginControllerPresentFailed = @"600002";
/// 获取运营商配置信息失败
static NSString * const PNSCodeGetOperatorInfoFailed = @"600004";
/// 未检测到sim卡
static NSString * const PNSCodeNoSIMCard = @"600007";
/// 蜂窝网络未开启
static NSString * const PNSCodeNoCellularNetwork = @"600008";
/// 无法判运营商
static NSString * const PNSCodeUnknownOperator = @"600009";
/// 未知异常
static NSString * const PNSCodeUnknownError = @"600010";
/// 获取token失败
static NSString * const PNSCodeGetTokenFailed = @"600011";
/// 预取号失败
static NSString * const PNSCodeGetMaskPhoneFailed = @"600012";
/// 运营商维护升级，该功能不可用
static NSString * const PNSCodeInterfaceDemoted = @"600013";
/// 运营商维护升级，该功能已达最大调用次数
static NSString * const PNSCodeInterfaceLimited = @"600014";
/// 接口超时
static NSString * const PNSCodeInterfaceTimeout = @"600015";
/// AppID、Appkey解析失败
static NSString * const PNSCodeDecodeAppInfoFailed = @"600017";
/// 运营商已切换
static NSString * const PNSCodeCarrierChanged = @"600021";
/// 终端环境检测失败（终端不支持认证 / 终端检测参数错误）
static NSString * const PNSCodeEnvCheckFail = @"600025";
/// 授权页已加载时不允许调用加速或预取号接口
static NSString * const PNSCodeCallPreLoginInAuthPage = @"600026";

/// 接口请求失败
static NSString * const PNSCodeFailed = @"600030";
/// 网络错误
static NSString * const PNSCodeErrorNetwork = @"600031";
/// 客户端设备时间错误
static NSString * const PNSCodeErrorClientTimestamp = @"600032";
/// 功能不可用，需要到控制台开通对应功能
static NSString * const PNSCodeFeatureInvalid = @"600033";
/// 不合法的SDK密钥
static NSString * const PNSCodeSDKInfoInvalid = @"600034";
/// 状态繁忙
static NSString * const PNSCodeStatusBusy = @"600035";
/// 业务停机
static NSString * const PNSCodeOutOfSerivce = @"600036";
#pragma mark - 授权页的点击事件回调码

/// 点击返回，⽤户取消一键登录
static NSString * const PNSCodeLoginControllerClickCancel = @"700000";
/// 点击切换按钮，⽤户取消免密登录
static NSString * const PNSCodeLoginControllerClickChangeBtn = @"700001";
/// 点击登录按钮事件
static NSString * const PNSCodeLoginControllerClickLoginBtn = @"700002";
/// 点击CheckBox事件
static NSString * const PNSCodeLoginControllerClickCheckBoxBtn = @"700003";
/// 点击协议富文本文字
static NSString * const PNSCodeLoginControllerClickProtocol = @"700004";

/// 活体认证页面准备启动
static NSString * const PNSCodeLiftBodyVerifyReadyStating = @"700005";
/// 用户主动取消操作UI事件，用户取消操作
static NSString * const PNSCodeErrorUserCancel = @"700000";
#endif /* PNSReturnCode_h */
