#pragma once
#incldue "../client.hpp"
#include "PatcherP2PStatusUpdate.hpp"
namespace leagueapi {
  nlohmann::json PatchPatcherV1P2pStatus (const ClientInfo& info,
    const PatcherP2PStatusUpdate_t& data)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(data).dump();
    const std::string path = "/patcher/v1/p2p/status";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
