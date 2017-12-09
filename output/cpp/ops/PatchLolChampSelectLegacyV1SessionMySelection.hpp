#pragma once
#include "../client.hpp"
#include "LolChampSelectLegacyChampSelectMySelection.hpp"
namespace leagueapi {
  nlohmann::json PatchLolChampSelectLegacyV1SessionMySelection (const ClientInfo& info,
    const LolChampSelectLegacyChampSelectMySelection_t& selection)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(selection).dump();
    std::string path = "/lol-champ-select-legacy/v1/session/my-selection";
    HttpsClient client(info.host, false);
    auto res = client.request("patch", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
