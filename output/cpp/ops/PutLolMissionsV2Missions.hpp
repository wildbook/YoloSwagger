#pragma once
#include "../client.hpp"
#include ".hpp"
#include "MissionIdsDTO.hpp"
namespace leagueapi {
  void PutLolMissionsV2Missions (const ClientInfo& info,
    const MissionIdsDTO_t& missionIds)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(missionIds).dump();
    std::string path = "/lol-missions/v2/missions";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
