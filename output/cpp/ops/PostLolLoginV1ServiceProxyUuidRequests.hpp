#pragma once
#include "../client.hpp"
namespace leagueapi {
  std::string PostLolLoginV1ServiceProxyUuidRequests (const ClientInfo& info,
    const std::string& serviceName,
    const std::string& methodName,
    const uint32_t& pluginId,
    const std::string& payload)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-login/v1/service-proxy-uuid-requests";
    Headers query;
      query["serviceName"] = serviceName;
      query["methodName"] = methodName;
      query["pluginId"] = pluginId;
      query["payload"] = payload;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
