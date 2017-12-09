#pragma once
#include "../client.hpp"
namespace leagueapi {
  std::string PostLolLootV1NewPlayerCheckDoneByNewValue (const ClientInfo& info,
    const bool& newValue)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-loot/v1/new-player-check-done/"+UrlCode::encode(to_string(newValue))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
