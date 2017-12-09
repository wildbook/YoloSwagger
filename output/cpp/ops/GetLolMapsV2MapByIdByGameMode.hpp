#pragma once
#include "../client.hpp"
#include "LolMapsMaps.hpp"
namespace leagueapi {
  LolMapsMaps_t GetLolMapsV2MapByIdByGameMode (const ClientInfo& info,
    const int64_t& id,
    const std::string& gameMode)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-maps/v2/map/"+UrlCode::encode(to_string(id))+"/"+UrlCode::encode(to_string(gameMode))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
