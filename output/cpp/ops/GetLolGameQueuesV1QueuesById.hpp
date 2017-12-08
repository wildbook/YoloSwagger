#pragma once
#incldue "../client.hpp"
#include "LolGameQueuesQueue.hpp"
namespace leagueapi {
  LolGameQueuesQueue_t GetLolGameQueuesV1QueuesById (const ClientInfo& info,
    const int32_t_t& id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-game-queues/v1/queues/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}