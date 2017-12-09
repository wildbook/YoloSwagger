#pragma once
#include "../client.hpp"
#include "PlayerMissionDTO.hpp"
namespace leagueapi {
  PlayerMissionDTO_t GetLolMissionsV1MissionsByMissionId (const ClientInfo& info,
    const std::string& missionId)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-missions/v1/missions/"+UrlCode::encode(to_string(missionId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
