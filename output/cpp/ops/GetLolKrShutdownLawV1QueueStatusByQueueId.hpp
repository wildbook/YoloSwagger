#pragma once
#include "../client.hpp"
#include "LolKrShutdownLawQueueShutdownStatus.hpp"
namespace leagueapi {
  LolKrShutdownLawQueueShutdownStatus_t GetLolKrShutdownLawV1QueueStatusByQueueId (const ClientInfo& info,
    const int32_t& queue_id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-kr-shutdown-law/v1/queue-status/"+UrlCode::encode(to_string(queue_id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
