//
//  PartnerConfig.h
//  AlipaySdkDemo
//
//  Created by ChaoGanYing on 13-5-3.
//  Copyright (c) 2013年 RenFei. All rights reserved.
//
//  提示：如何获取安全校验码和合作身份者id
//  1.用您的签约支付宝账号登录支付宝网站(www.alipay.com)
//  2.点击“商家服务”(https://b.alipay.com/order/myorder.htm)
//  3.点击“查询合作者身份(pid)”、“查询安全校验码(key)”
//  4.jdkjd

#ifndef MQPDemo_PartnerConfig_h
#define MQPDemo_PartnerConfig_h

//合作身份者id，以2088开头的16位纯数字
#define PartnerID @"2088021088907115"
//收款支付宝账号
#define SellerID  @"1150150428@qq.com"

//安全校验码（MD5）密钥，以数字和字母组成的32位字符
#define MD5_KEY @"x00rtp5b9s8g9dblxgc0k4ngdoajel7x"

//商户私钥，自助生成
#define PartnerPrivKey @"MIICXAIBAAKBgQC8rPqGGsar+BWI7vAtaaDOqphy41j5186hCU9DcchV4HWiv0HvQ3KXAEqHfZiAHZSyMSRMmDZVnqJwCVWFvKUPqU1RsCPZ9Imk+9ZXVkM3DDdw74v/s6YMNx8cTuxybRCJUfOKbyC79cnHgmQqqkODv+EnprBtNKE4k8g90jNmbwIDAQABAoGAS06Hl+ssDQuyHLux5Y5ZfuOcgY64vtAiSyhaGMNbgNtcWJ8aBBPZsueM19OLgOdNqGnw4RmH5liw4SL4na6T+qGpblEW/4G1eQXXJvfIBhlYJupaSvhuTf3msFw4z9GY8V29deGPx5/6FRVTPTqnLoxUlfloOCYCeDJrXa9+YGECQQD24cdN9MT3HqfP3S+UEDHO3XaDq38V3sCnKQ5mSYtnst/NV/g4bqYUOYElQW27p0YgwhHLlxWPke8a4Jz/r4lnAkEAw6TfA36kUZfnFIXNM/0250jyZDE/yEKBXhThO8DAXAyAaEHjxA7K+eprXP7ayFIfy+nrz/W5Iy81ibP5G/4tuQJBALaDn9ZP+DVBIoqXWI87kbb/Hpik9mTysrZhsdWI1Viqcq3aNRVzJ7CX+pPSVQ9/0GZzUriST0w+dOgH2clkuk0CQDXXhdh8XdRmrZ2kRRjtstJr7OlN9HO0ec3eiS3cmhO7DQukNn6aY5nrvahWKve+QinoMpGE2nKoZ1+CPChMB2ECQG8utIhzAGH0lKbv/3+SzDERStrFYn/WqpWG3qSXAMyes24khuRPtMYPzIxI/wZYPazbKgxuERAhiRtpz0e9jvI="


//支付宝公钥
#define AlipayPubKey   @"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQC8rPqGGsar+BWI7vAtaaDOqphy41j5186hCU9DcchV4HWiv0HvQ3KXAEqHfZiAHZSyMSRMmDZVnqJwCVWFvKUPqU1RsCPZ9Imk+9ZXVkM3DDdw74v/s6YMNx8cTuxybRCJUfOKbyC79cnHgmQqqkODv+EnprBtNKE4k8g90jNmbwIDAQAB"

#endif
