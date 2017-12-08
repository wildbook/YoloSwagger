#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolPreEndOfGameV1RegistrationBySequenceEventNameByPriority (const ClientInfo& info,
    const std::string_t& sequenceEventName,
    const int32_t_t& priority)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-pre-end-of-game/v1/registration/"+UrlCode::encode(to_string(sequenceEventName))+"/"+UrlCode::encode(to_string(priority))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
