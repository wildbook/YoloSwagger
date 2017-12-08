#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  std::string_t PostLolLoginV1ServiceProxyUuidRequests (const ClientInfo& info,
    const std::string_t& serviceName,
    const std::string_t& methodName,
    const uint32_t_t& pluginId,
    const std::string_t& payload)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-login/v1/service-proxy-uuid-requests?serviceName=" + UrlCode::encode(to_string(serviceName))    +
    "&methodName=" + UrlCode::encode(to_string(methodName))    +
    "&pluginId=" + UrlCode::encode(to_string(pluginId))    +
    "&payload=" + UrlCode::encode(to_string(payload));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
