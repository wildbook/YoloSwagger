#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority (const ClientInfo& info,
    const std::string& sequenceEventName,
    const int32_t& priority)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-pre-end-of-game/v1/registration/"+UrlCode::encode(to_string(sequenceEventName))+"/"+UrlCode::encode(to_string(priority))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
