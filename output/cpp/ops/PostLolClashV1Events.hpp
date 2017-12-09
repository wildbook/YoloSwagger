#pragma once
#include "../client.hpp"
#include "ClashEventData.hpp"
namespace leagueapi {
  std::map<std::string, ClashEventData_t> PostLolClashV1Events (const ClientInfo& info,
    const std::vector<std::string>& uuids)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(uuids).dump();
    std::string path = "/lol-clash/v1/events";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
