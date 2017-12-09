#pragma once
#include "../client.hpp"
#include "LolLoginLcdsResponse.hpp"
namespace leagueapi {
  LolLoginLcdsResponse_t PostLolLoginV1SessionInvoke (const ClientInfo& info,
    const std::string& destination,
    const std::string& method,
    const std::vector<nlohmann::json>& args)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/x-www-form-urlencoded";
    const std::string body = body = UrlCode::encode(to_string(args));
    std::string path = "/lol-login/v1/session/invoke";
    Headers query;
      query["destination"] = destination;
      query["method"] = method;
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
