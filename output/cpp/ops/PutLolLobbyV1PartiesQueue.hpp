#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PutLolLobbyV1PartiesQueue (const ClientInfo& info,
    const int32_t& queueId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(queueId).dump();
    const std::string path = "/lol-lobby/v1/parties/queue";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
