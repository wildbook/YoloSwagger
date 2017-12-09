#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Returns hardware and software specs for the machine the client is running on.
  nlohmann::json GetPerformanceV1SystemInfo (const ClientInfo& info,
    //Returns all available system information
    const std::optional<int32_t>& full = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/performance/v1/system-info";
    Headers query;
    if({0})
      query["full"] = *full;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
