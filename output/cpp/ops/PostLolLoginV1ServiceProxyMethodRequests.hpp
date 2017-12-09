#pragma once
#include "../client.hpp"
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
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-login/v1/service-proxy-method-requests";
    Headers query;
      query["serviceName"] = serviceName;
      query["methodName"] = methodName;
      query["responseMethodName"] = responseMethodName;
      query["responseErrorName"] = responseErrorName;
      query["pluginId"] = pluginId;
      query["payload"] = payload;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
