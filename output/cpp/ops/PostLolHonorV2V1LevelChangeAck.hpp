#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolHonorV2V1LevelChangeAck (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-honor-v2/v1/level-change/ack";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
