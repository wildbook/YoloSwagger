#pragma once
#include "../client.hpp"
#include "LolHonorV2VoteCompletion.hpp"
namespace leagueapi {
  LolHonorV2VoteCompletion_t GetLolHonorV2V1VoteCompletion (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-honor-v2/v1/vote-completion";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
