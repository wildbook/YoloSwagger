#pragma once
#incldue "../client.hpp"
#include "LolMapsMaps.hpp"
namespace leagueapi {
  LolMapsMaps_t GetLolMapsV2MapByIdByGameModeByGameMutator (const ClientInfo& info,
    const int64_t_t& id,
    const std::string_t& gameMode,
    const std::string_t& gameMutator)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-maps/v2/map/"+UrlCode::encode(to_string(id))+"/"+UrlCode::encode(to_string(gameMode))+"/"+UrlCode::encode(to_string(gameMutator))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
