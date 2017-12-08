#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName (const ClientInfo& info,
    const std::string_t& serviceName,
    const std::string_t& methodName,
    const uint32_t_t& pluginId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-login/v1/service-proxy-async-requests/"+UrlCode::encode(to_string(serviceName))+"/"+UrlCode::encode(to_string(methodName))+"?pluginId=" + UrlCode::encode(to_string(pluginId));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
