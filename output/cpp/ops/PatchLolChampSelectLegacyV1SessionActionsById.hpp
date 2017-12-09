#pragma once
#include "../client.hpp"
#include "LolChampSelectLegacyChampSelectAction.hpp"
namespace leagueapi {
  nlohmann::json PatchLolChampSelectLegacyV1SessionActionsById (const ClientInfo& info,
    const uint64_t& id,
    const LolChampSelectLegacyChampSelectAction_t& data)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(data).dump();
    std::string path = "/lol-champ-select-legacy/v1/session/actions/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
