#pragma once
#include "../client.hpp"
#include "RemotingSerializedFormat.hpp"
namespace leagueapi {
  //Controls the console output format
  nlohmann::json WebSocketFormat (const ClientInfo& info,
    //Output format to switch to
    const std::optional<RemotingSerializedFormat_t>& format = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/WebSocketFormat";
    Headers query;
    if({0})
      query["format"] = *format;
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
