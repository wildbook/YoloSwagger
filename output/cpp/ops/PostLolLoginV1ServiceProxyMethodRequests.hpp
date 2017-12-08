#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolLoginV1ServiceProxyMethodRequests (const ClientInfo& info,
    const std::string& serviceName,
    const std::string& methodName,
    const std::string& responseMethodName,
    const std::string& responseErrorName,
    const uint32_t& pluginId,
    const std::string& payload)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-login/v1/service-proxy-method-requests?serviceName=" + UrlCode::encode(to_string(serviceName))    +
    "&methodName=" + UrlCode::encode(to_string(methodName))    +
    "&responseMethodName=" + UrlCode::encode(to_string(responseMethodName))    +
    "&responseErrorName=" + UrlCode::encode(to_string(responseErrorName))    +
    "&pluginId=" + UrlCode::encode(to_string(pluginId))    +
    "&payload=" + UrlCode::encode(to_string(payload));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
