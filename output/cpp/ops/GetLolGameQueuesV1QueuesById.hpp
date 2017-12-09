#pragma once
#include "../client.hpp"
#include "LolGameQueuesQueue.hpp"
namespace leagueapi {
  LolGameQueuesQueue_t GetLolGameQueuesV1QueuesById (const ClientInfo& info,
    const int32_t& id)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-game-queues/v1/queues/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
