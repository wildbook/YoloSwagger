#pragma once
#include "../client.hpp"
#include "RemotingHelpFormat.hpp"
namespace leagueapi {
  //Returns information on available functions and types
  nlohmann::json Help (const ClientInfo& info,
    //Name of the function or type to describe
    const std::optional<std::string>& target = std::nullopt,
    //Format for returned information
    const std::optional<RemotingHelpFormat_t>& format = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/Help";
    Headers query;
    if({0})
      query["target"] = *target;
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
